# Referanslar

## Pointer Vs. Referans

* Pointer'lar default init edilebiliyorlar:  
`int* myPtr;` tamamen legal
* referanslar default init edilemiyorlar:  
`int& myRef;` syntaks hatasi.


* Pointer'lar kendileri **const** olmadigi surece hayatlari boyunca baska nesneleri refere edebilirler.
* referanslar hayatlari boyunca ayni nesneye baglidirlar. Yani tekrar baska bir nesneye baglanamazlar.

* `NULL` / `nullptr` mumkun.
* `NULL` / `nullptr` diye bir referans mumkun degil.

