/* 
 * this example for linefollowing robot.
 * components: Arduino UNO,L29n motor driver,two motor and wheels, two IR sensors and battery.
 * 
 * the sensor must plecad in the front left and right side of the robot ensure that the sensors IR bulb's facing the surface.the gap between the surface and sensor bulb must be minimum(1cm).
 * between the two sensor gab stick the black coloured tape or something on the surface,this is the followable line.the surface must be othe then the black colour. 
 * 
 * connection: left IR sensor connected to the A0 and right IR sensor connected to the A1 of the Arduino.
 *            the pin 8 of the ARduino connected to IN1 of the L29n motor driver,the pin 10 connected to the IN2 of the L29n motor driver like that pin 12 to the IN3 and pin 13 to the IN4,
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
linefollower();

}
