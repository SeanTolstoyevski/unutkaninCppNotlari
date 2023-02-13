# `std::regex` Örneği 1

Tamam. Şimdiki örnek __büyük / küçük__ harf fark etmeksizin bir eşleşmenin nasıl yapılacağını gösteriyor.

Örneğimizde "jules" kelimesini seçtik. Bu durumda ortaya şöyle bir tablo çıkıyor.
1. `julEs` - eşleşir.
1. `JULES` - eşleşir
1. `jules` - eşleşir.
1. `jUlES` - eşleşir.

***

Peki böyle bir şeyi neden kullanmak isteyelim?

OCR'den geçirilmiş bir romana sahip olduğunuzu düşünün. Ne kadar iyi taranırsa taransın mutlaka yanlış yazılan kelimeler olacaktır. Yukarıdaki örneği düşünecek olursak;  
bütün __jules__ kelimelerinin kombinasyonunu __Jules__ ile değiştirmek istersiniz.  
Gayet makul bir senaryo :) .

```c++
{{ #include ./../codes/std__regex__1.cpp }}
```
