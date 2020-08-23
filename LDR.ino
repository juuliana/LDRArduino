int LDRvalor = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  LDRvalor = analogRead(A0);
  Serial.println(LDRvalor);
  if (LDRvalor < 550) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  } else {
    if (LDRvalor < 600) {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
    } else {
      if (LDRvalor < 700) {
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, LOW);
        digitalWrite(10, LOW);
      } else {
        if (LDRvalor < 800) {
          digitalWrite(13, HIGH);
          digitalWrite(12, HIGH);
          digitalWrite(11, HIGH);
          digitalWrite(10, LOW);
        } else {
          digitalWrite(13, HIGH);
          digitalWrite(12, HIGH);
          digitalWrite(11, HIGH);
          digitalWrite(10, HIGH);
        }
      }
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}
