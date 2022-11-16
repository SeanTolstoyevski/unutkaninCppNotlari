# `decltype`


## Not 1

```c++
decltype(var) x;
```

yukaridaki kod eger var bir referans turu ise referans olacaktir.

simdi asagidaki koda bakalim:

```c++
int myvar = 34918;
decltype((var)) x = myVar;
// not cift parantez kullaniyoruz!
```

bu durumda x her zaman bir referans turu olacaktir.  
cift parantez burada onem kazaniyor.