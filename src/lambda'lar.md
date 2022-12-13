# Lambda İfadeleri

Lambda ifadeleri C++11 ile dile eklendi.  
Genellikle is yapan bir bilesene arguman olarak gecirilir.  
Ornegin filtreleme yapan bir fonksiyonumuz olabilir. Callback olarak bir `lambda` ifadesini gecebiliriz. Lambda, bizim filtreleme kurallarini uygulayabilir ve bunu temiz bir formatta, global alani kirletmeden ve daha fazla karmasa olusturmadan birkac satir icinde yapabilir.

Lambda'larin birkac kurali var:

1. `[]` (lambda-introducer) ile baslamalidirlar. Bu kisim opsiyonel degil.
2. Parametre listesi (opsiyonel): `()` veya `(....)` (lambda declarator)
3. `mutable` (opsiyonel)
4. `exception specification` (opsiyonel). Ornegin `noexcept`, `throw()`.
5. return type (opsiyonel). Ornegin `-> std::vector<std::string>`
6. Lambda govdesi (zorunlu)

Ornek bir lambda asagidaki gibi tanimlanabilir.  
Asagidaki durumda derleyici return type'ini kendisi belirleyip yazacaktir:

```c++
    auto myfilter = [](const std::string& brand, int cap) {
        if (brand == "c++" && cap >= 500'500'500) {
            return 38491;
        }
        return 5104;
    };
```

Ya da ayni kod icin return type'i kendimiz yazabiliriz:

```c++
    auto myfilter = [](const std::string& brand, int cap) -> std::uint16_t {
        if (brand == "c++" && cap >= 500'500'500) {
            return 38491;
        }
        return 5104;
    };
```

Derleyiciye kod hakkinda daha fazla bilgi vererek olasi optimizasyonlari daha da iyilestirebiliriz. Ornegin `noexcept` ile derleyiciye herhangi bir exception uretilmeyecegine dair garanti verebiliriz:

```c++
    auto myfilter = [](const std::string& brand, int cap) noexcept {
        if (brand == "c++" && cap >= 500'500'500) {
            return 38491;
        }
        return 5104;
    };
```
## Lambda'lar Hakkinda Onemli Notlar

Lambda'lar aslinda dildeki siniflar gibi davranan ogeler.

Derleyici, lambda ifadesini bir class'a ceviriyor ve lambda'nin yurutulmesini clas'in __operator fonksiyonuna__ bagliyor.

Lambda'larin da kendilerine ait tipki siniflar gibi bir scope'lari oluyor. Kendi kapsamlarinin disindaki ogelere erismek icin onlari yakalamasi (capture etmesi) gerekiyor.
