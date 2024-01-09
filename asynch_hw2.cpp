// Define component pins
const int redOut = 13;
const int greenOut = 11;
const int blueOut = 12;

void setup() {
 pinMode(redOut, OUTPUT);
 pinMode(greenOut, OUTPUT);
 pinMode(blueOut, OUTPUT);
}

//Set RGB LED color
void setRGB(int red, int green, int blue) {
  analogWrite(redOut, red);
  analogWrite(greenOut, green);
  analogWrite(blueOut, blue); 
}

//Turn LED on or off (HIGH or LOW)
void LED_status(int STATUS){
  digitalWrite(redOut, STATUS);
  digitalWrite(greenOut, STATUS);
  digitalWrite(blueOut, STATUS);
}

void loop() { 
  
  //Start with RED
  setRGB(255, 0, 0);
  delay(500);
  LED_status(LOW);
  delay(500);
  LED_status(HIGH);
  
  //Continue with GREEN
  setRGB(0, 255, 0);
  delay(500);
  LED_status(LOW);
  delay(500);
  LED_status(HIGH);
  
  //End with BLUE (looks like purple)
  setRGB(0, 0, 255);
  delay(500);
  LED_status(LOW);
  delay(500);
  LED_status(HIGH);
}
