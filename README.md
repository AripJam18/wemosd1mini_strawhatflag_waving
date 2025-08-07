# 🏴‍☠️ Wemos D1 Mini - Bendera Bajak Laut (One Piece) OLED Animation

Animasi bendera bajak laut Topi Jerami (One Piece) berkibar di layar OLED 0.96", dikendalikan oleh Wemos D1 Mini menggunakan library U8g2.

## 📷 Demo
> *(Tambahkan foto atau GIF hasil animasi di sini setelah kamu upload)*

## 🧰 Perangkat Keras
- [x] Wemos D1 Mini (ESP8266)
- [x] OLED 0.96" (I2C, resolusi 128x64)
- [x] Kabel jumper

## 📦 Library yang Digunakan
Library utama:
- [`U8g2`](https://github.com/olikraus/u8g2) — untuk menggambar gambar bitmap di OLED.

### Cara Install `U8g2`:
1. Buka Arduino IDE.
2. Pergi ke menu `Sketch > Include Library > Manage Libraries`.
3. Cari `U8g2`, pilih **oleh olikraus**, lalu klik **Install**.

## 🗂️ Struktur File
Wemos_BenderaBajakLaut/
├── Wemos_BenderaBajakLaut.ino # File utama sketch Arduino
├── onepiece_frame_1.h # Frame animasi 1
├── onepiece_frame_2.h
├── onepiece_frame_3.h
├── onepiece_frame_4.h
├── onepiece_frame_5.h
└── onepiece_frame_6.h # Frame animasi 6

## 🚀 Cara Menjalankan
1. Sambungkan Wemos D1 Mini ke OLED (I2C):
   - SDA → D2 (GPIO4)
   - SCL → D1 (GPIO5)
2. Upload `Wemos_BenderaBajakLaut.ino` ke Wemos D1 Mini menggunakan Arduino IDE.
3. OLED akan menampilkan animasi bendera Topi Jerami yang berkibar!

## ✨ Credits
- Gambar asli: Logo Topi Jerami dari One Piece.
- Animasi waving dihasilkan secara programatik dengan Python.
- Dibuat oleh: [aripjam18]

---

## 📝 License
Proyek ini bebas digunakan untuk keperluan edukasi dan non-komersial. Untuk penggunaan lain, silakan hubungi pembuat.


