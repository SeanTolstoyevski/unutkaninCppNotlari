# `std::unique_ptr`: `<memory>`

`unique_ptr`, aslinda **raii** idiomuyla calisan bir akilli ptr sinifi diyebiliriz.  
basitce su isi yapiyor:

Sizin bir isiniz var. Bu is icin bazi objelerin hayata gelmesi gerekiyor. Bu objeler cesitli kaynaklar ediniyor olabilir.  
Ornegin bir socket acmis olabilir, yeni bir bellek alanini edinip okuma yazma yapmis olabilir.  
Ve objemizin kullandigi kaynaklarin bir noktada sisteme geri veriliyor olmasi gerekir. Ornegin socket'in isin sonunda kapatilmasi gerekiyor.  
Bu durumda butun senaryolari ele alarak bunlari kendimiz elle sisteme geri verebiliriz. Fakat bu durumda belirli sorumluluklarimiz oluyor:

1. Bazi senaryolarda objenin hayatini bitirmeyi unutmus olabiliriz.
2. Birbirine bagli olarak calisan objeleri yanlis sirayla destroy ediyor olabiliriz.
3. Farkli bir programlama dilinin wrapper'ini kullaniyor olabiliriz. Ya da kullandigimiz arac raii'le calisamayacak bir C kodu olabilir.

`unique_ptr` bu senaryolari kapsayabilecek harika bir arac.

Asagidaki OpenSSL kodunu inceleyebiliriz. Her  objenin sisteme geri verilmesi gerektigini unutmayalim. Elle yapmak isimizi oldukca karmasik bir hale getirirdi:

### Ornek OpenSSL Kodu

```c++
#include <fstream>
#include <memory>

#include "openssl/opensslv.h"
#include "openssl/pem.h"
#include "openssl/x509.h"
#include "openssl/x509v3.h"

#include <iostream>

bool VerifyCertificate(const std::string &certContent) {
  std::unique_ptr<BIO, decltype(&BIO_free)> bioPtr{
    BIO_new(BIO_s_mem()), &BIO_free};
  if (!bioPtr) {
    return false;
  }
  BIO_puts(bioPtr.get(), certContent.c_str());
  std::unique_ptr<X509, decltype(&X509_free)> x509Ptr{
      PEM_read_bio_X509(bioPtr.get(), nullptr, nullptr, nullptr), &X509_free};
  if (!x509Ptr) {
    return false;
  }
  std::unique_ptr<EVP_PKEY, decltype(&EVP_PKEY_free)> evpPkeyPtr{
      X509_get_pubkey(x509Ptr.get()), &EVP_PKEY_free};
  if (!evpPkeyPtr) {
    return false;
  }
  int r = X509_verify(x509Ptr.get(), evpPkeyPtr.get());
  return r == 1;
}

int main() {
  // init openssl
  OpenSSL_add_all_algorithms();

  // read certificate with fstream
  std::string pem_c;
  std::ifstream pem_c_file("cert.pem");
  std::getline(pem_c_file, pem_c, (char)pem_c_file.eof());
  auto res = VerifyCertificate(pem_c);
  std::cout << res << "\n";
  return 0;
}
```

