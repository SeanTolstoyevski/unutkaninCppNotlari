# C++ ve C'deki Bazı farklılıklar

## `void` parametreli fonksiyonlar

Asagidaki C kodunu inceleyelim:
```c
// parantezler arasinda void yok, onemli!
void something()
{
    // logic
}

// parantezler arasinda void  var, onemli!
void anothersomething(void)
{
    // logic
}
```

yukaridaki C kodundaki iki fonksiyon da farkli anlamlara sahip.  
C++'da ise bu iki fonksiyon da **parametresiz** anlamina geliyor. Yani `(void)` yazmak ya da  `()` (parametresiz) yazmak arasinda herhangi bir fark yok.

