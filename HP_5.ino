/* Home Project #5
EML 4804
6250452 
Steven Rodriguez*/

#include <LiquidCrystal.h>


int analogPin = A5; 
int value = 0; 
int buttonA = 52; 

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void SwitchState() {
  if (digitalRead(buttonA) == HIGH) {
    lcd.print("OFF");
  } else {
    lcd.print("ON");
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2); 
  pinMode(buttonA , INPUT_PULLUP);
  
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Switch: ");
  SwitchState();
    
  value = analogRead(analogPin);
  Serial.println(value); 
  
  float voltValue =  0.0049 * value;

  lcd.setCursor(0,1);
  lcd.print("V=");
  lcd.print(voltValue);
  lcd.print(" Volts ");

//delay(500);// optional delay

}
