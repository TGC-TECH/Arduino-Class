// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // enter the number of the pushbutton pin
const int ledPin1 =  1;      // enter the number of the LED pin
const int buzzpin = 10; //enter the number of the Buzzer pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
// initialize the buzzer pin as an output:
  pinMode(buzzpin, OUTPUT);
// initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH){
  }
  }



