# UAS-AP_kelompokBugBungters
Anggota:

1. M.Ariel Afriza (241401073)
2. Nabilah Putri Ayli(241401091)
3. Nazwa Tri Mifthah (241401106)
4. M.Haqi Rasya Arazy (241401109)
5. David Jonathan S. (241401121)


# Deskripsi
Code ini adalah implementasi game konsol berbasis C++ yang meniru konsep minesweeper dengan tema "judi lotre" yang dikemas dalam bahasa gaul Indonesia. Game ini menghadirkan pengalaman bermain yang menegangkan dimana pemain harus menebak kotak-kotak dalam grid berukuran 4x5 (total 20 kotak) sambil menghindari 2 "bom" yang ditempatkan secara acak di papan permainan.

Konsep permainan sangat mirip dengan minesweeper klasik, namun disederhanakan dengan jumlah bom yang lebih sedikit dan grid yang lebih kecil. Pemain akan berinteraksi melalui konsol dengan memasukkan koordinat baris dan kolom untuk membuka kotak. Setiap kotak yang dibuka akan menampilkan simbol 'O' jika aman atau 'X' jika merupakan bom. Tantangan utama adalah membuka semua 18 kotak aman tanpa menyentuh kedua bom untuk meraih kemenangan "JACKPOT".
# Komponen Utama
Class Judol
 Atribut privat:
1. Grid 4x5 untuk papan permainan, status kotak (dibuka/belum), dan data bom
2. Flag untuk status game berakhir
   
Fungsi utama:
1. buat_papan_permainan(): Menginisialisasi grid dan menempatkan 2 bom secara random
2. tampilkan_papan_permainan(): Menampilkan grid dengan simbol * (tertutup), O (aman), X (bom)
3. tebak(): Memproses input pemain untuk membuka kotak tertentu
4. permainan_berakhir(): Mengecek kondisi menang (buka 18 kotak aman) atau kalah (kena bom)

# Alur Permainan

1. Player memilih koordinat baris (1-4) dan kolom (1-5)
2. Sistem membuka kotak yang dipilih
3. Jika kena bom (X) → game over, tawarkan main lagi
4. Jika aman (O) → lanjut bermain
5. Menang jika berhasil membuka 18 kotak aman (total 20 - 2 bom)

Link hasil program: https://drive.google.com/drive/folders/1XdceKvdpNFGNucVjxAzzEf1ALRtcRk3d?usp=sharing

Link Vidio Youtube:
