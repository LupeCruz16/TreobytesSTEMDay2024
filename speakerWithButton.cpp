#define NOTE_C4  262
#define NOTE_C4  262
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262

// Define component pins
const int buttonPin = 12;
const int speakerPin = 8;

// Notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// Note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  pinMode(buttonPin, OUTPUT);

}

void loop() {
  if(digitalRead(buttonPin) == HIGH) {
   for (int thisNote = 0; thisNote < 8; thisNote++) {

      // To calculate the note duration, take one second
      // Divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(speakerPin, melody[thisNote], noteDuration);

      // To distinguish the notes, set a minimum time between them.
      // The note's duration + 30%:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
     
      // Stop the tone playing:
      noTone(speakerPin);
    }
    delay(1500); 
  
  }
}