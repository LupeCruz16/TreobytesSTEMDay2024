// Define the frequencies for the notes of the crossing melody
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494

//Defining component pins
const int ledR = 2;
const int ledY = 3;
const int ledG = 4;
const int speakerPin = 5;
const int pushbuttonPin = 6;

// Define a simple crossing melody
int melody[] = {
  NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4, NOTE_G4
};

// Define the duration of each note
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 4, 4
};

void setup(){

  //Set up components

}

void playTune() {
  for (int thisNote = 0; thisNote < 9; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(speakerPin, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(speakerPin);
  }
}

/*
A traffic light has one light on at a time
Considering this how would the loop be structured?

Consider the loop order: green, yellow and red.

TIP: 
Use the delay() function to pause between changing colors.
*/
void loop(){
  
  // Loop to check button state more frequently
  for (int i = 0; i < 3; i++) {
    
    // Check if the button is pressed
    if(digitalRead(pushbuttonPin) == HIGH){
      
      // Only have light red on while crossing
      digitalWrite(ledG, LOW);
      digitalWrite(ledY, LOW);
      digitalWrite(ledR, HIGH);
      
      // Play the crossing tune
      playTune();
      
      delay(500); // Debounce delay
      return; // Exit loop to start over (optional)
    }

    // Traffic light sequence: G (0), Y (1), R (2)
    if (i == 0) {

      //Change color

    } else if (i == 1) {

      //Change color

    } else if (i == 2) {

      //Change color
      
    }
    
    delay(1000); // Small delay
  }
}