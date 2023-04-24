POTENTIOMETER_PINA0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue=analogRead(POTENTIOMETER_PIN);
  int brightness=map(nalogValue,0,4095,0,25);
  if (brightness>200){
    Serial.println"decrease the volume");
    digitalWrite(buzzer_gpio,HIGH);
    delay(100);
    }
    digitalWrite(buzzer_gpio,LOW);
    Serial.println(brightness);
    delay(30);
}
