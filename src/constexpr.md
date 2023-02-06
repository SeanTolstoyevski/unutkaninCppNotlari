# `constexpr`

bu arac da dile modern c++ ile eklendi.  
ilk version ile yani c++11 ile kisitli bir kullanim alani vardi ancak su an c++20 ile bircok seyi derleyiciye compile time'da islemesi gerektigini bildirebiliyoruz. dilde yeni speclerle beraber kullanim alani ve destegi git gide artiyor.

birkac kural ve unutulmamasi gereken seyler soyle siralanabilir;

- bir `constructor` gereksinimleri karsiladiginda constexpr olabilir,
- __recursive__ bir fonksiyon gereksinimleri karsiladiginda constexpr olabilir,
- constexpr yapilar `goto` ve `try` ifadeleri iceremez,
- `constexpr` degerler __initialize__ edilmelidirler.   
orn. `constexpr int i;` syntaks hatasi,
- `virtual` fonksiyonlar constexpr olamazlar,
- c++20 ile `std::string` gibi siniflar da constexpr olabilme ozelligi kazandilar,
