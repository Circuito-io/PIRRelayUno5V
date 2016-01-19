#include "Global.h"

void setup() 
{
	Serial.begin(9600);
	Serial.println("start");
  
}

void loop() 
{	
	
	if(pir.read())
	{
		Serial.println("PIR detecting");
		relay.turnOn();
		delay(1000); 
		relay.turnOff();
		delay(3000); //delay time for the pir to stabilize.
	}
		
	delay(200);
  
}
