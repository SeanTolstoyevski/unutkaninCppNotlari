# Scoped Enum'lar (Kapsandırılmış Numaralandırma Turleri)

Bu arac modern c++ ile dile eklendi.
Her numaralandırma türünün kendine ait bir **skop**u var.  
Farklı numaralandırma türleriyle çakışmalar bu şekilde olabildiğince engellenmiş oluyor.  

## Onemli birkac nokta

1. `scoped enum`'lardan diger integral turlere otomatik donusum yok.
2. integral turlerden `scoped enum`'lara da otomatik donusum yok.
3. C'de olan enum'lardan farkli olarak, enum'un **turunu belirtebiliyoruz**.
4. eger hicbir tur belirtmemissek derleyici enum'un turlerine bakarak otomatik olarak bir tur secebiliyor. C'de enum'lar `signed int`. yani == `sizeof(signed int)`.

tur belirterek bir enum su sekilde tanimlanabilir:

```c++
// ...........

enum class colour : std::uint16_t {
    brown,
    red,
    black,
    magenta,
    blue,
    yellow,
    aquablue,
};
```

 **not 1**: enum skopunun  bittigini belirten kume parantezinden (}) sonra noktali virgul (;) konulmasi opsiyonel degil, mecburi.  
 sik sik unutulan bir sey.

Burada turun **opsionel** oldugunu hatirlamak onemli. Ayni enum asagidaki gibi de bildirilebilir:

```c++
// ...........

enum class colour {
    brown,
    red,
    black,
    magenta,
    blue,
    yellow,
    aquablue,
};
```

Bu durumda enum'un turunu derleyici tesbit edecektir.
