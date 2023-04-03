const int switchPin = 2;
const int led = 12;

long startTime;
long duration;
long longpress = 2000;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if(digitalRead(switchPin) == LOW)
  {
    startTime = millis();
    while(digitalRead(switchPin) == LOW);
    long duration = millis() - startTime;
    Serial.println(duration);
    if (duration > longpress){
      digitalWrite(led, HIGH);
    }
    else 
    {
      digitalWrite(led, LOW);
    }
  }
  // put your main code here, to run repeatedly:

}
