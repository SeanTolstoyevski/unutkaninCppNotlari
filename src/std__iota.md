# `std::iota` => c++11

`std::iota`, iteratörler aracılığıyla bir değerden başlayarak ardışık değerler üreten bir algoritma.  
iteratörler aracılığıyla değerleri kaba yerleştiriyor.

## minik bir örnek

```c++
    std::vector<int> data(5);
    std::iota(data.begin(), data.end(), 42);
```

**not 1**: c++20 ile bu algoritma da `constexpr` desteği kazandı.
