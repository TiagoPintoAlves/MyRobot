#include <MyRobot.h>

MyRobot bot;

int AnalogPins[4] = { 0, 1, 2, 3 };

void setup() {
  Serial.begin(9600);
  
  // Initializing basic some stuff:
  bot.servo(10, 11);
  bot.ultra(12, 13);
  bot.analogSensors(AnalogPins, INPUT);
}

void loop() {
  // Using servos:
  bot.goAhead();
  delay(300);
  bot.stopServo();

  // Using Ultrassonic:
  Serial.println( bot.getDistancia() );

  // Using Analog Sensor:
  Serial.println( bot.getAnalogRead(AnalogPins[0]) );
  
}
