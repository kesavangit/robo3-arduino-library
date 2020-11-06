/*
 * this example for voice controlled robot.
 * components: Arduino UNO,L29n motor driver,two motor and wheels, HC05 or HC06 bluetooth module and battery.
 * 
 * in your smartphone  type "arduino bluetooth voice" in playstore and download any app in the list. pair the mobile and bluetooth module.
 * speak forward,back,backward,go,turnleft,left,turnright,right these words can control the robot.
 * 
 * connection: the bluetooth module Tx pin connected to the Rx pin of the arduino and Rx pin of the bluetooth module is connected to the Tx pin of the arduino.
 *            the pin 8 of the Arduino connected to IN1 of the L29n motor driver,the pin 10 connected to the IN2 of the L29n motor driver like that pin 12 to the IN3 and pin 13 to the IN4,
 *            the pin 9 connected to the ENA of the L29n motor driver and pin 11 connected to the pin ENB of the motor driver.
 *            the right wheel motor connected to OUT1 and OUT2 of the L29n motor driver(+ve or red colour wire of the motor to OUT1 and -ve or black wire to OUT2),
 *            the wheel left motor connected to the OUT3 and OUT4  of the L29n motor driver(+ve or red colour wire of the motor to OUT3 and -ve or black wire to OUT4).
 *            the power supply given to the +12v and ground of the of the L29n motor driver.to power up the arduino use +5v and ground to the battery.
 *             
*/
#include <robo3.h>

void setup() {
  // put your setup code here, to run once:

}

void loop() {
voice_controlled_robot();

}
