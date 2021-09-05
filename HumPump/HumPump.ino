int pinRelay = 13;
int humidity = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Micro Projects TH");

  pinMode(pinRelay, OUTPUT);
}

void loop() {
  humidity = analogRead(A0);
  Serial.print("humidity : "); Serial.println(humidity);

  if (humidity > 700) {
    digitalWrite(pinRelay, LOW);
  }
  else if (humidity <= 700) {

    digitalWrite(pinRelay, HIGH);
  }

  delay(1000);
}
