# `if` Gövdesinde Tanımlanabilen Değişkenler

Asagidaki C++ kodu tamamen legal.  
Burada unutulmamasi gereken, `if` govdesinde tanimlanan degisken, distan iceriye dogru butun bloklar kapsaminda erisilebilir durumda oluyor.  
Ornegin `if`li ifadeden sonra yeni bloklar olusturulmus olabilir.  
Ayni sekilde `if`in `else`, `if-else` bloklarinda da degisken erisilebilir oluyor.

Asagidaki kodu inceleyelim:

```c++
int sum(int a, int b)
{
    return a + b * b - a;
}

// .........

int main()
{
int a, int b{};
    std::cin >> a >> b;

    if (auto total = sum(a, b) != 12) {
        total -= a * 5;
    }        else {
            // total burada da gecerli.
            // if blogumuz bitene kadar bu degiskeni kullanabiliriz.
            total++;
        }
        // burada   `total`i kullanamayiz. cunku artik onun skopundan cikmis olduk.
} // function block
```

bir degiskenin skopunu olabildigince daraltarak kodlama hatalarindann kacinabiliriz.
