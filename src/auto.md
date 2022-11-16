# `auto`

`auto` bir keyword.  
Derleme zamaninda derleyiciye "bunun turunu sen bul" demek anlamina geliyor. Kesinlikle calisma zamanina hicbir etkisi yok.

Birkac kural:

1. `auto` ile olusturulan ifadelerde **ilk deger vermek zorunlu**:  
`auto speed;` // error

## 1. alistirma: Referanslik dusen durumlar

```c++
// with c++17

#include <typeinfo>
#include <iostream>

int main() {
    const int& myRef = 263'791;
    auto myAutoVal = myRef;

    std::cout << "myAutoVal = " << typeid(myAutoVal).name() << std::endl;
    return 0;
}
```

