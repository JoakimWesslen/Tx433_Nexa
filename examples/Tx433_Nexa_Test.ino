/*
  Example of using the Tx433_Nexa lib to control Nexa Home Automation power outlet sockets
*/

#include <tx433_Nexa.h>

// Replace this string with appropriate code/pattern for your device
String tx_nexa = "1111111111111111111111111111111111111111111111111111";

String ch_nexa="1010";

Tx433_Nexa Nexa(11, tx_nexa, ch_nexa);


void setup() {
}

void loop() {
  Nexa.Device_On(0);
  delay(700);
  Nexa.Device_Off(0);
  delay(150);
}
