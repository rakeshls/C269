#include <MD_MAX72xx.h>
#include <SPI.h>
#include <MD_Parola.h>
// serial periphefral interface
const byte clock_pin = 13;
const byte data_pin  = 11;
const byte chip_select_pin = 10;
const byte max_devices = 4;
MD_Parola matrix =
MD_Parola(MD_MAX72XX::PAROLA_HW, chip_select_pin, max_devices);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("What to display");
  matrix.begin();
  matrix.displayClear();
  matrix.displayText("Niyati",PA_CENTER,50,2000,PA_SCROLL_LEFT,PA_WIPE_CURSOR);

}

void loop() {
  // put your main code here, to run repeatedly:
  //matrix.setPoint(7,1,true);
 if(matrix.displayAnimate()){
  matrix.displayReset();
 }
}
