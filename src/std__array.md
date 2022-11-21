# `std::array` : `<array>` c++11'den beri

- `std::array`, dile gomulu olan `array`'dan farkli degildir. Sadece daha guvenli olarak sarmalanmis bir versiyonudur.
- `std::array` kullanimi herhangi bir zaman / performans sorunu uretmez.
- `std::array`'in boyutu derleme zamaninda bilinmelidir.
  `size` kesinlikle optional degildir.
- `size` sabit bir ifade olmalidir.
- `size` pozitif olmalidir. **0** hata.
- baslaticidaki oge sayisi `size`'den kucuk veya `size`'a esit olmali.
- dildeki yerlesik array turunun aksine, beklenmedik **pointer donusumlerine** izin vermez.
- kopyalanabilir.
