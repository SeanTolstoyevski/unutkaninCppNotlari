# Constructor'lar

Constructor (ctor),
* bir sınıfın hayata gelmesinde cagrilan
* herhangi bir donus turu bilgisine sahip  olmayan,
* sınıf adıyla aynı olmak zorunda olan,
* sınıfın `public`, `private` veya `protected` modifierlerinin birinde olabilecek bir nevi özel fonksiyonlar.

`ctor` public degilse api'ı kullanmak isteyen herhangi bir bileşen ctor'a ulaşamayacaktır.

ctor'lar için aşağıda basitçe birkaç önemli bilgi listeleniyor:

1. **Ctor**'lar sınıf adıyla aynı adda olmalılar.
2. Herhangi bir dönüş türü bilgisine sahip değiller. **Not**: `void` de bunlara dahil. Hiçbir return type bildirmiyoruz.
3. Fonksiyonlarda olduğu gibi ctor'lar için de **overload** yazılabilir.
4. Eğer >= 1'den fazla parametreli bir ctor varsa, derleyici bu durumda **default ctor** yazmayacaktir.
5. Non-static (statik olmayan) fonksiyonlardir.
6. Global fonksiyon olamazlar.

## Ctor'larin Gorevi

Ctor, siniflarin fieldlerine ilk deger verebilir, bir class hayata gelirken bazi kaynaklara erismek zorunda olabilir ve ctor bunlari edinebilir.  
yani ctor'lar bir sinifi kullanilabilir hale getiriyor diyebiliriz.

Ayni sekilde **dtor**'lar da nesnenin omru bittiginde tetiklenen fonksiyonlardir.
