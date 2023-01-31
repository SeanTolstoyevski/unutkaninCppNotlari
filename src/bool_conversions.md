# `bool`'a dönüşüm kuralları

C++17 standardından

> 7.14 Boolean conversions

> A prvalue of arithmetic, unscoped enumeration, pointer, or pointer to member type can be converted to a prvalue of type bool. A zero value, null pointer value, or null member pointer value is converted to false; any other value is converted to true. For direct-initialization, a prvalue of type std​::​nullptr_­t can be converted to a prvalue of type bool; the resulting value is false.

***

Asagidaki kodu inceleyelim:

```c++
#include <iostream>

int main()
{
	int a{-3};
	bool v{static_cast<bool>(a)};
	std::cout << v << std::endl;
	return 0;
}
```

cikti:

```bash
1
```

Diger dillerin aksine negatif degerler de `true` olarak degerlendiriliyor.
