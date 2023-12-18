int redOut = 13;
int greenOut = 11;
int blueOut = 12;

void setup() {
 pinMode(redOut, OUTPUT);
 pinMode(greenOut, OUTPUT);
 pinMode(blueOut, OUTPUT);
}

void setRGB(int red, int green, int blue) {
  analogWrite(redOut, red);
  analogWrite(greenOut, green);
  analogWrite(blueOut, blue); 
}

void loop() {
  
  int red = 255;
  int green = 0;
  int blue = 0;
  
  setRGB(red, green, blue);
}