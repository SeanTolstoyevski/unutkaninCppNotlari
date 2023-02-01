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
