/* Home Project #4
EML 4804
6250452 
Steven Rodriguez*/

// include the library
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

float Arguments[3] = {-3.3 , 3.3, 0.1}; // Argument Array
float ResultsArray[3]; // Initialize Results array where the resulting values will be added to in the loop

 /* Create a function of data type float that takes in parameter float 
 called x and plugs it into expression corresponding to panther ID ending in 2. 
 */
float MathExpression(float x){
  return 45 - cos(x * x) / x; 
}


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  
  for( int i = 0 ; i < 3 ; i++){

    lcd.setCursor(0, 0);
    lcd.print("X = ");
    lcd.print(Arguments[i], 2);

    lcd.setCursor(0, 1);
    lcd.print("Result: ");
    float Result = MathExpression(Arguments[i]);
    ResultsArray[i] = Result; 
    lcd.print(Result, 2);

    delay(3000);
  }

  float minValueResult = ResultsArray[0];
  float maxValueResult = ResultsArray[0];

  for(int i = 1; i<3; i++){
    if(ResultsArray[i] < minValueResult ){

      minValueResult = ResultsArray[i];

    }
    if(ResultsArray[i] > maxValueResult){

      maxValueResult = ResultsArray[i];
    }
  }
//Print the Min and Max Result Values
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Min: ");
  lcd.print(minValueResult, 2);

  lcd.setCursor(0, 1);
  lcd.print("Max: ");
  lcd.print(maxValueResult, 2);

  delay(5000);
    
  }

  

