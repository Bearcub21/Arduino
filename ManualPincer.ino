int swPin = 5, potenciometerPin = A0; 
int potenciometerVal = 0; 
int swCurrentVal = 0, swLastVal = 0; 

void setup()
{
    pinMode(swPin, INPUT);
    Serial.begin(9600);
    digitalWrite(swPin, HIGH);
}

void loop(){
    potenciometerVal = map(analogRead(potenciometerPin), 0, 1023, 1, 180);
    swCurrentVal = map(digitalRead(swPin), HIGH, LOW, 1, 0);
    delay(100);
    Serial.println(potenciometerVal);
    Serial.println(swCurrentVal);
}