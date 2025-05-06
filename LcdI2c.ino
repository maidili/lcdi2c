#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Alamat I2C (pastikan sesuai, biasanya 0x27 atau 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

// Wire.begin(21, 22); // SDA = GPIO 21, SCL = GPIO 22  uncomment jika menggunakan esp32

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Hello, World!");
  delay(1000);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Tes Display");
  lcd.setCursor(0, 1);
  lcd.print("Dengan I2C");
  delay(1000); // Tambahkan delay agar tidak flicker terlalu cepat
}
