#define NOTE_C4  262
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_F3  175
#define NOTE_E3  165
#define NOTE_D3  147

// Define component pins
const int speakerPin = 8;
const int buttonPin = 9;
const int rgbRedPin = 10;
const int rgbGreenPin = 11;
const int rgbBluePin = 12;

// Notes in the melody of Twinkle, Twinkle, Little Star:
int melody[] = {
  NOTE_C4, NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3,
  NOTE_F3, NOTE_F3, NOTE_E3, NOTE_E3, NOTE_D3, NOTE_D3, NOTE_C4
};

// Note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2
};

void setup() {
  pinMode(speakerPin, OUTPUT);
  pinMode(buttonPin, OUTPUT);
  pinMode(rgbRedPin, OUTPUT);
  pinMode(rgbGreenPin, OUTPUT);
  pinMode(rgbBluePin, OUTPUT);
}

void loop() {
  //if pusbutton is pressed
  if (digitalRead(buttonPin) == HIGH) {
    //play all notes within the melody[]
    for (int thisNote = 0; thisNote < 14; thisNote++) {
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(speakerPin, melody[thisNote], noteDuration);

      // Set RGB LED color based on the note
      setRGBColor(melody[thisNote]);

      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      noTone(speakerPin);
    }
    delay(1500);

    // Turn off RGB LED after the melody is done playing
    digitalWrite(rgbRedPin, LOW);
    digitalWrite(rgbGreenPin, LOW);
    digitalWrite(rgbBluePin, LOW);
  }
}


void setRGBColor(int note) {
  switch (note) {
    case NOTE_C4:
      // Red for C4
      digitalWrite(rgbRedPin, HIGH);
      digitalWrite(rgbGreenPin, LOW);
      digitalWrite(rgbBluePin, LOW);
      break;
    case NOTE_G3:
      // Green for G3
      digitalWrite(rgbRedPin, LOW);
      digitalWrite(rgbGreenPin, HIGH);
      digitalWrite(rgbBluePin, LOW);
      break;
    case NOTE_A3:
      // Blue for A3
      digitalWrite(rgbRedPin, LOW);
      digitalWrite(rgbGreenPin, LOW);
      digitalWrite(rgbBluePin, HIGH);
      break;
    case NOTE_F3:
      // Yellow for F3 (red + green)
      digitalWrite(rgbRedPin, HIGH);
      digitalWrite(rgbGreenPin, HIGH);
      digitalWrite(rgbBluePin, LOW);
      break;
    case NOTE_E3:
      // Magenta for E3 (red + blue)
      digitalWrite(rgbRedPin, HIGH);
      digitalWrite(rgbGreenPin, LOW);
      digitalWrite(rgbBluePin, HIGH);
      break;
    case NOTE_D3:
      // Cyan for D3 (green + blue)
      digitalWrite(rgbRedPin, LOW);
      digitalWrite(rgbGreenPin, HIGH);
      digitalWrite(rgbBluePin, HIGH);
      break;
    default:
      // Turn off the LED
      digitalWrite(rgbRedPin, LOW);
      digitalWrite(rgbGreenPin, LOW);
      digitalWrite(rgbBluePin, LOW);
  }
}
