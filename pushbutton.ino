int pushButton = 7;
int ledPin = 13;

void setup(){

	Serial.begin(9600);
	pinMode(ledPin, OUTPUT);
	pinMode(pushButton,INPUT);
  
}

void loop(){

	Serial.println( );

	if(digitalRead(pushButton) == HIGH) {
      
	  	Serial.println("Button 1");
	    digitalWrite(ledPin, LOW);
      
	} else {

		Serial.println("Button 0");
		digitalWrite(ledPin, HIGH);
      
	} 
  
  delay(200);

}
