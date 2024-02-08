// Define component pin 
const int speakerPin = 4;

void setup()
{
  pinMode(speakerPin, OUTPUT);
}

// Playing the melody in the loop function
void loop()
{
 tone(speakerPin,659,100);
 delay(150);
 
 tone(speakerPin,659,100);
 delay(300);
  
 tone(speakerPin,659,100);
 delay(300);
  
 tone(speakerPin,523,100);
 delay(100);
  
 tone(speakerPin,659,100);
 delay(300);
  
 tone(speakerPin,734,100);
 delay(550);
 
 tone(speakerPin,392,100);
 delay(2000);
}