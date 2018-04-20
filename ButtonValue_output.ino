void setup(){
  Serial.begin(9600);
  pinMode(4, INPUT);
}
 
void loop(){
  int sensorVal = digitalRead(4);
  Serial.println(sensorVal);

}
