// Define component pins

// RGB LED pins
int redOut = 13;
int greenOut = 11;
int blueOut = 12;

// Speaker pin
const int speakerPin = 3;

// Pushbutton pins
const int button1 = 4;
const int button2 = 5;
const int button3 = 6;
const int button4 = 7;
const int button5 = 8;
const int button6 = 9;
const int button7 = 10;

void setup() {
  // Declaring the RGB LED pins
  pinMode(redOut, OUTPUT);
  pinMode(greenOut, OUTPUT);
  pinMode(blueOut, OUTPUT);
  
  // Declaring the speaker 
  pinMode(speakerPin, OUTPUT);
  
  // Declaring the pushbuttons
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
  pinMode(button7, INPUT);
  
}

// Function used within the if conditions to change RGB LED color
void setRGB(int red, int green, int blue) {
  analogWrite(redOut, red);
  analogWrite(greenOut, green);
  analogWrite(blueOut, blue); 
}

/*
	This loop is used for:
    Determining the tone played
    Determining the RGB LED color 
*/
void loop() {
  noTone(speakerPin);
  
  if (digitalRead(button1) == HIGH) {
    tone(speakerPin, 392); // G4
    setRGB(255, 0, 0); 
  }
  if (digitalRead(button2) == HIGH) {
    tone(speakerPin, 440); // A4
    setRGB(0, 255, 0);
  }
  if (digitalRead(button3) == HIGH) {
    tone(speakerPin, 494); // B4
    setRGB(0, 0, 255);
  }
  if (digitalRead(button4) == HIGH) {
    tone(speakerPin, 523); // C5
    setRGB(255, 128, 0);
  }
  if (digitalRead(button5) == HIGH) {
    tone(speakerPin, 587); // D5
    setRGB(255, 255, 0);
  }
  if (digitalRead(button6) == HIGH) {
    tone(speakerPin, 659); // E5
    setRGB(0, 255, 255);
  }
  if (digitalRead(button7) == HIGH) {
    tone(speakerPin, 740); // F#5
    setRGB(128, 128, 128);
  }
  
  delay(100);
}

