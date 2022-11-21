# `std::is_signed` : `<type_traits>` - c++11'den beri

## tanim

```c++
template< class T >
struct is_signed;
```

- **boolean** turler icin `false`
- **unsigned** turler icin `false`
- **float** degerler icin `true`

uretir.

basit tasarimi / pseudo kodu su sekilde olabilir:  
```c++
    if (T(-1) < T(0)) {
        value = true;
        return;
    }
    value = false;
```

## Ornek 1:

```c++
{{ #include ./../codes/is_signed.cpp }}
```

