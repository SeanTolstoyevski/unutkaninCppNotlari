# ofstream

1. `ofstream` default init edilebilir. Bu durumda hicbir dosyayi yonetmeyen bir nesne olusturmus oluruz.
2. `ofstream` kopyalanamaz ama tasinabilir.

`ofstream`, yalnizca yazma yapmamiz durumunda bize interface saglayan bir arac.

### default mod

`ofstream`'in default modu `out | trunc`

ofstream'in default modu; ofstream ile bir dosyayi acmaya calistigimizda, eger dosya yoksa o dosyanin olusturulacagi anlamina geliyor.

asagidaki kod durumu daha iyi ozetleyecektir:

```c++
int main()
{
    ofstream myOf("myfile.dat");
    // ile
    ofstream otherOff("anotherfile.dat", ofstream::out | ofstream::trunc);
    // ayni anlama geliyor.
}
```

## `app` modu

default modda oldugu gibi dosya yoksa olusturulacak.  
eger dosya varsa dosyanin sonundan ekleme yaparak yazma modunda acmis olacagiz.

## dosyalari kapatmak

iki farkli yontem kullanilabilir.

1. stream nesnesinin **dtor**u cagrilir ve dosya kapatilir. Orn nesnenin omru bitiyor olabilir.
2. manuel olarak `stream.close()` gibi bir ifadeyle dosya kapatilabilir.

## dosyalari acmak

iki farkli yontem kullanilabilir.

1. `ctor`'a dosya path'i ve modu gecilebilir: `ofstream myof("dosya.txt", mods)`
2. stream nesnesi olusturulduktan sonra `stream.open` ctor'd'a oldugu gibi cagrilabilir.

