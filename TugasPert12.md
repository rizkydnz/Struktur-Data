# 1. Menyelesaikan Jalur Terpendek dari A ke K pada Graf

Untuk menemukan jalur terpendek dari titik A ke K pada graf yang diberikan, 
kita bisa menggunakan algoritma Dijkstra. kita akan fokus pada jalur A-C-E-H-J-K. 
Berikut adalah penjelasan yang lebih rinci:

#### Langkah 1: Mulai dari A

- *Pilih titik awal A*.
- Dari titik A, ada dua jalur langsung:
  - A ke B dengan bobot 14
  - A ke C dengan bobot 15
  - A ke D dengan bobot 10

#### Langkah 2: Pilih C dari A

- *Pilih jalur A ke C* karena kita fokus pada jalur A-C-E-H-J-K.
- *Bobot dari A ke C* adalah 15.

#### Langkah 3: Dari C ke E

- *Dari C, kita memilih jalur ke E*.
- *Bobot dari C ke E* adalah 7.
- Total bobot saat ini: 15 (A ke C) + 7 (C ke E) = 22.

#### Langkah 4: Dari E ke H

- *Dari E, kita memilih jalur ke H*.
- *Bobot dari E ke H* adalah 12.
- Total bobot saat ini: 22 + 12 = 34.

#### Langkah 5: Dari H ke J

- *Dari H, kita memilih jalur ke J*.
- *Bobot dari H ke J* adalah 3.
- Total bobot saat ini: 34 + 3 = 37.

#### Langkah 6: Dari J ke K

- *Dari J, kita memilih jalur ke K*.
- *Bobot dari J ke K* adalah 7.
- Total bobot saat ini: 37 + 7 = 44.

### Rekapitulasi Jalur dan Bobot

- *A ke C*: 15
- *C ke E*: 7
- *E ke H*: 12
- *H ke J*: 3
- *J ke K*: 7

Total bobot untuk jalur A-C-E-H-J-K adalah 44.

# 2. Menuliskan Edge Edge yang terhubung berdasarkan Directed Graph

## Edge yang Terhubung = <A,C> <B,A> <B,C> <C,H> <C,G> <E,C> <F,H> <H,I> <I,G> <I,J> <J,K> <K,H> <K,F>
