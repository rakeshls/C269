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
  matrix.begin();
  matrix.displayClear();

}

void loop() {
  // put your main code here, to run repeatedly:
  //matrix.setPoint(7,1,true);
  matrix.setTextAlignment(PA_CENTER);
  matrix.print("hello");
  delay(1000);
  matrix.print("NIYATI");
  delay(1000);
}
