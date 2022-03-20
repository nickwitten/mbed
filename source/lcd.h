#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL lcd(p28, p27, p29);

int main() {
    lcd.circle(64, 64, 10, BLUE);
}
