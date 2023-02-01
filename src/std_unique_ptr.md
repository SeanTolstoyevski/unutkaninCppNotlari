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
{{ #include ./../codes/std__unique_ptr_and_openssl_1.cpp }}
```

