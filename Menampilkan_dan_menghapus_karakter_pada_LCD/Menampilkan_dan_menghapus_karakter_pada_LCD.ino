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
  lcd.noDisplay(); //Mematikan Display LCP:
  delay(2000);     //Waktu tunda selama 2 detik
  lcd.display();   //Menghidupkan Display LCP:
  delay(2000);
  lcd.blink();     //Turn on the blinking cursor:
  delay(2000);
  lcd.noBlink();   //Turn off the blinking cursor:
  delay(2000);
  lcd.cursor();    //Turn on the cursor:
  delay(2000);
  lcd.noCursor();  //Turn off the cursor:
  delay(2000);

  lcd.setCursor(0,1);      //Mulai mencetak pada kolom ke 0, baris ke 1
  lcd.print(millis()/1000); //Cetak jumlah detik pada LCD di posisi kolom
                           //dan baris sesuai dengan setCursor
  if (millis()/100 > 25) {  //Jika nilai mills()/100 > 25 maka hapus karakter 
                           //pada LCD kemudian cetak kembali karakter
                           //"Hello World 2".
    lcd.clear();           //Hapus karakter pada LCD
    delay(2000);
    lcd.print("Hello World 2");
  }
}
