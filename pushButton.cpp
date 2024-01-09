//const means constants, these won't change
//const is used to set pin numbers

const int buttonPin = 2;	//the number of pushbutton pin
const int ledPin = 13;		//the number of the LED pin

//this vairable does not have const, meaning it can change

int buttonState = 0;	//variable for reading the pushbutton state

//below we have our two primary functions 
void setup()
{
  pinMode(ledPin, OUTPUT);		//initialize the LED pin as an output
  pinMode(buttonPin, INPUT);	//intialize the pushbuttton pin as input
  
}

void loop()
{
  //buttonState is used to read the state of the pushbutton value
  buttonState = digitalRead(buttonPin);
  
  //we use an if condition to check if the pushbutton has been pressed
  if(buttonState == HIGH){ 		//if pressed, then...
	digitalWrite(ledPin, HIGH);	//turn LED on
  } else{						//if not pressed, then...
   	digitalWrite(ledPin, LOW);	//turn LED off
  }
}