/* Home Project #6
EML 4804
6250452
Steven Rodriguez*/

#define sensorPin A0
#define ledPin 3

int voltLevel;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  voltLevel = analogRead(sensorPin);

  // Convert the analog reading to a voltage value
  float voltage = (float)voltLevel / 1023.0 * 5.0; // Assuming 5V reference voltage

  Serial.print("Voltage is: ");
  Serial.println(voltage, 2); // Display voltage with two decimal places

  if (voltage >= 0.0 && voltage < 1.0) {
    analogWrite(ledPin, 0); // Set LED intensity to 20% (51/255)
  } else if (voltage >= 1.0 && voltage < 2.0) {
    analogWrite(ledPin, 102); // Set LED intensity to 40% (102/255)
  } else if (voltage >= 2.0 && voltage < 3.0) {
    analogWrite(ledPin, 153); // Set LED intensity to 60% (153/255)
  } else if (voltage >= 3.0 && voltage < 4.0) {
    analogWrite(ledPin, 204); // Set LED intensity to 80% (204/255)
  } else if (voltage >= 4.0 && voltage <= 5.0) {
    analogWrite(ledPin, 255); // Set LED intensity to 100% (255/255)
  }

  delay(3000); 
}

