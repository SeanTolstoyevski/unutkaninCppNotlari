# `now`

`Poco::Data::Keywords` isim alaninda bildiriliyor. inline bir fonksiyon:  

```c++
inline void now( Statement & statement );
```

`now`, yazilan ifadelerin hemen yurutulmesini zorluyor.  
Asagidaki kodu inceleyelim:

```c++
	Statement insert();
insert <<
		"INSERT INTO student(?, ?, ?)",
		use(a), use(b), use(c), now;
```

`now`'u kaldirdigimizda ifadeyi kendimiz yurutmeliyiz.  
Baska bir degisle, yukaridaki davranisin aynisini yakalamamiz icin asagidaki gibi bir kod yazilmasi gerekir:  
```c++
	Statement insert();
insert <<
		"INSERT INTO student(?, ?, ?)",
		use(a), use(b), use(c);

		// ......

	insert.execute();
```

