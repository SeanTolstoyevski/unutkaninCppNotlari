# Storage class

## **Automatic storage**

- fonksiyonlarda tanimlanan (fonksiyon parametreleri de dahil), degiskenler bu kapsamda degerlendirilir.
- bu ogeler, fonksiyonun kapsami bittiginde yok edilirler / gecersiz hale gelirler.
- `static` olarak bildirilenler  bu kapsama dahil degil.

**not**: kendi kendini cagiran fonksiyonlar icin, her cagrida ogelerin yeniden bellege yerlestirilmesi gerekir.  
her fonksiyon cagrisi icin ayri bir kopya uretilecektir.

## **Static storage**

- **global** alanda ve **namespace** kapsaminda bildirilen degiskenler bu sinifta degerlendirilir.
- bu objeler `main`'den once hayata gelirler ve `main`'den sonra yok edilirler.

### Static storage : Ornek 1

```c++
{{ #include ./../codes/static_storage_ex_1.cpp }}
```

Programin ciktisi:  
```bash
i am constructed
main basliyor
main bitiyor
i am destructed
```
