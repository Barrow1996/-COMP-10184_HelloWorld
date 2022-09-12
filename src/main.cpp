/* I Shawn Barrow, 000332631 certify that this material is my original work and none
other person's work has been used without due acknowledgement. 2022-09-12 **/
#include <Arduino.h>

void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n\nShawn Barrow, 000332631");

  Serial.println("\n\nESP8266 Chip ID: ");
  Serial.println(ESP.getChipId());
  
  Serial.println("Flash Chip Chip ID:  ");
  Serial.println(ESP.getFlashChipId());
}
void loop() {
  int time = millis();
  delay(2000);
  Serial.printf("It has been %d ms since the program started.\n",time);
}