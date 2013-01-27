/*	CapacitiveSwitch Test
*	
*	When making use of sensor readings from CapacitiveSwitch, 
*	This sketch helps you decide the threshold by showing 
*	capacitive values of different materials. 
*
*	Just touch the objects you're going to experiment with, 
*	take note of the biggest and smallest values. In your 
*	project code, use these values to map to your desired
*	outcome.
*
*	It can also be used for adjusting the threshold when using
*	capacitive sensor as a button.
*
*/

#include <CapacitiveSensor.h>
#include <Castilla.h>

//The sensor is connected between 13 and 12 by default
CapacitiveSwitch me=CapacitiveSwitch(13,12);

void setup(){
  Serial.begin(9600);
}
void loop(){
  //Print out the value of the sensor
  me.test();
  
  delay(30);
}
