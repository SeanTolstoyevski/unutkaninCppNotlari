# `std::istream_iterator` ile Dosya Icerigini Vector'e kopyalamak

C++'da i/o isleri cok cok karmasik olsa da basitlestirmek icin cesitli araclar kullanima sunulmus.  
`std::istream_iterator` bunlardan biri.

## ornek

```c++
{{ #include ./../../codes/ifstream_and_read_to_vector.cpp }}
```

### neden `std::noskipws`

iterator'un varsayilan davranisi **white space** karakterlerini atlamak. bu durum `std::ifstream::binary` set edildiginde de gecerli.
