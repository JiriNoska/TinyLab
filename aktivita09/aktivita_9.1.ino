#include <Wire.h>
#include <LiquidTWI2.h>
LiquidTWI2 lcd(0x20); //tady má být adresa
String jmeno = "Jmeno";
String prijmeni = "Prijmeni";
void setup() {
  lcd.setMCPType(LTI_TYPE_MCP23008);
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH);
}
void loop() {
  lcd.setCursor(0, 0);
  lcd.print(jmeno);
  lcd.scrollDisplayRight();
  lcd.setCursor(0, 1);
  lcd.print(prijmeni);
  delay(300);
}
