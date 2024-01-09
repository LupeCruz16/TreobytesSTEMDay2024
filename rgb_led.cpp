// Define consting component pins
const int redOut = 13;
const int greenOut = 11;
const int blueOut = 12;

void setup() {
 pinMode(redOut, OUTPUT);
 pinMode(greenOut, OUTPUT);
 pinMode(blueOut, OUTPUT);
}

// Utility function used to change the rgb led's color
void setRGB(int red, int green, int blue) {
  analogWrite(redOut, red);
  analogWrite(greenOut, green);
  analogWrite(blueOut, blue); 
}

void loop() {
  
  // Define variables and their hue mixture
  int red = 255;
  int green = 0;
  int blue = 0;
  
  // Use the variables to set the rgb led color
  setRGB(red, green, blue);
}