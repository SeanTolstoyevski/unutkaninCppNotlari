# Unutkanın C++ Notları

## Uyarı!

Bu notlar, çeşitli kurslardan, kitaplardan ve kaynaklardan edindiğim bilgi ve düşüncelerin nota dökülmüş halleri. Kesinlikle doğru olması garanti edilmez. Bazı bilgiler / yöntemler, artık modern C++'da kullanılmıyor olabilir, bazı bileşenlerin yanlış anlaşılmış / yanlış öğrenilmiş olması söz konusu olabilir veya dilden tamamen kaldırılmış olabilir.  
Yanlış veya eksik bir şey gördüğünüzde [issues sayfasından](https://github.com/SeanTolstoyevski/unutkaninCppNotlari/issues) yeni bir issue oluşturabilirsiniz. Ya da doğrudan yeni bir pr oluşturup sorunu düzeltebilecek önerilerinizi gönderebilirsiniz :) .

***

Notlar, **mdbook** kullanılarak hazırlanıyor.
Notları okuyabilmek için sisteminizde mdbook kurulu olmalıdır.  
Mdbook, [markdown](https://en.wikipedia.org/wiki/Markdown) tabanlı bir dökümentasyon aracı olarak özetlenebilir. Rust ile yazılmıştır. Oldukça hızlı çalışır, konfigürasyonu basittir, çok fazla öğrenmeniz gereken detay yoktur ve hızlıca üretken olabilirsiniz. Bu yüzden Mdbook tercih ettim :) .

Eğer hali hazırda **cargo** kurulu bir sisteminiz varsa;  
`cargo install mdbook`  
komutuyla mdbook'u kurabilirsiniz.  
Başka bir alternatif, [GitHub Sayfasından](https://github.com/rust-lang/mdBook/releases) mdbook'u indirip sisteminiz için hazır hale getirebilirsiniz.

## Notları Derlemek

1. Projeyi klonlayın veya GitHub üzerinden [zip olarak indirin](https://github.com/SeanTolstoyevski/unutkaninCppNotlari/archive/refs/heads/main.zip).
2. Dosya dizininizde reponun ana dizinine geçin. Örn. `cd unutkaninCppNotlari`.
3. `mdbook build`  
komutu ile projeyi derleyin.
4. Şimdi notlar web sayfası olarak **book** dizininde oluşturulmuş olmalı. __index.html__'i tarayıcınızda açarak okumaya başlayabilirsiniz.

Ekstra olarak, katkıda bulunmak (yanlış bilgi, yazım hatası, yeni bölüm oluşturma) istiyorsanız anlık olarak değişiklikleri izlemek için  
`mdbook serve`  
de kullanabilirsiniz. Sayfa varsayılan olarak `localhost:3000`'de aktif olacaktır.  
Bu komut, notlar klasörünü aktif olarak izler, herhangi bir değişiklikte sayfayı tekrar derler.

