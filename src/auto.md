# `auto`

`auto` bir keyword.  
Derleme zamaninda derleyiciye "bunun turunu sen bul" demek anlamina geliyor. Kesinlikle calisma zamanina hicbir etkisi yok.

Birkac kural:

1. `auto` ile olusturulan ifadelerde **ilk deger vermek zorunlu**:  
`auto speed;` // error

## 1. alistirma: Referanslik dusen durumlar

```c++
#include <iostream>

int main() {
	const int& myRef = 263'791;
	auto myAutoVal = myRef;
	myAutoVal++;

	std::cout << "myAutoVal = " << myAutoVal << std::endl;
	return 0;
}
```

Goruldugu gibi, `auto` bildirimiyle olusturulan degiskeni arttirabiliyorum. Burada **const** degiskenden bagimsiz bir degisken olusturuldugunu anlamamiz onemli.  
Programimizin ciktisi:  
```
myAutoVal = 263792
```

Simdi
`	auto myAutoVal = myRef;`  
satirini asagidaki gibi degistirelim:  
`	auto& myAutoVal = myRef;`

Ve g++ ciktisi:
```
error: increment of read-only reference 'myAutoVal'
```
