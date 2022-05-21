#include <LedControl.h>
LedControl lc = LedControl(10, 12, 11, 1);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);
  lc.setDigit (0, 0, 2, false);
  lc.setDigit (0, 1, 0, false);
  lc.setDigit (0, 2, 2, false);
  lc.setDigit (0, 3, 2, false);
}

void loop() {
}
