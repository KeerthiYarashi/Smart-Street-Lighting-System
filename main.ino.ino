const int ldrPin = 35;          // LDR analog pin
const int irSensorPin = 18;    // IR sensor digital pin
const int ledPin = 19;         // LED output pin

void setup() {
  Serial.begin(115200);

  pinMode(ldrPin, INPUT);
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int ldrValue = analogRead(ldrPin);     // Brightness level (0-4095)
  int irStatus = digitalRead(irSensorPin); // IR sensor (0 = object, 1 = no object)

  Serial.print("LDR: ");
  Serial.print(ldrValue);
  Serial.print(" | IR: ");
  Serial.println(irStatus);

  if (ldrValue < 1500) {
    // Case 1: Bright → LED OFF
    analogWrite(ledPin, 0);
    Serial.println("Bright → LED OFF");
  } else if (ldrValue >1600  && irStatus == 1) {
    // Case 2: Dark + No motion → LED DIM
    analogWrite(ledPin, 50); // dim brightness
    Serial.println("Dark + No motion → LED DIM");
  } else if (ldrValue > 1600 && irStatus == 0) {
    // Case 3: Dark + Motion → LED BRIGHT
    analogWrite(ledPin, 255); // full brightness
    Serial.println("Dark + Motion → LED BRIGHT");
  }

  delay(500);
}