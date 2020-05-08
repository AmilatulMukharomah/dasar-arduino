/*LiquidCrystal Library
 * Sintak ini akan menampilkan tulisan "Hello World!" pada LCD.
 * Rangkaian:
 * pin RS LCD ke pin digital 12
 * pin Enable LCD ke pin digital 11
 * pin D4 LCD ke pin digital 5
 * pin D5 LCD ke pin digital 4
 * pin D6 LCD ke pin digital 3
 * pin D7 LCD ke pin digital 2
 * pin R/W LCD ke ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin3)
 */
 //Memanggil Library LiquidCrystal:
 #include <LiquidCrystal.h>

 // Inisialisasi pin Arduino yang terhubung ke LCD.
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup() {
  // Pendefinisian jumlah kolom dan baris LCD yang digunakan:
  lcd.begin(16, 2);
  // Perintah menuliskan karakter pada LCD.
  lcd.print("Hello, World!");
}

void loop() {

  // Geser ke kiri sebanyak 13 kali (sesuai panjang karakter yang ada)
  // Sampai batas display LCD sebelah kiri 
  
  for(int positionCounter = 0; positionCounter < 13; positionCounter++){
    lcd.scrollDisplayLeft();
    delay(150)
  }

  // Geser ke kanan sebanyak 29 kali (panjang karakter + panjang display LCD/kolom)
  for(int positionCounter = 0; positionCounter < 29; positionCounter++){
    lcd.scrollDisplayRight();
    delay(150)   // Tunggu 0.15 detik: 
  }

  // Geser ke kiri sebanyak 16 kali (panjang karakter + panjang display LCD/kolom) 
  // sampai karakter kembali ke ujung kiri LCD 
  for (int positionCounter = 0; positionCounter < 16; positionCounter++){
    lcd.scrollDisplayLeft(); 
    delay(150); // Tunggu 0.15 detik:
  }
  
    delay(1000); // Tunggu 1 detik sebelum kembali ke looping awal 
}
