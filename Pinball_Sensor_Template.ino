#define sensorPin 2


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Sets the pin on the Arduino Board to be used as a sensor
  pinMode(sensorPin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  //This code runs the hole sensor
  if(!digitalRead(sensorPin)){
    Serial.println("Sensor triggered");
    delay(300);
    }


}
