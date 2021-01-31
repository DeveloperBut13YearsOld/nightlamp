#define lightSensor A5
 int led = 4;
 

void setup() {
 Serial.begin (9600);
  pinMode (led, OUTPUT);
   

}

 void loop (){

int lightLevel = analogRead(lightSensor);

Serial.println(lightLevel);

if (lightLevel < 10) {digitalWrite ( led, HIGH) ;}

else {digitalWrite ( led, LOW) ;}





 delay(1000);
 }
