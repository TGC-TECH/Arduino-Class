// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2; // enter the number of the pushbutton pin
const int buttonOffPin = 3; // enter the number of the off button pin
const int ledPin13 = 13; // enter the number of the LED pin
const int buzzPin = 10; // enter the number of the Buzzer pin

// variables will change:
int buttonState = 0; // variable for reading the pushbutton status
int buttonOffState = 0; // variable for reading the off button status
int alarm = 0; // variable for reading whether the alarm should be on

void setup() {
pinMode(ledPin13, OUTPUT); // initialize the LED pin as an output
pinMode(buzzPin, OUTPUT); // initialize the buzzer pin as an output
pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input
pinMode(buttonOffPin, INPUT); // initialize the off button pin as an input
} 

void loop() {
// read the state of the pushbutton value:
buttonState = digitalRead(buttonPin);
if (buttonState == HIGH) { alarm = HIGH; }
buttonOffState = digitalRead(buttonOffPin);
if (buttonOffState == HIGH) { alarm = LOW; }

if (alarm == HIGH) {
digitalWrite(ledPin13, HIGH);
digitalWrite(buzzPin, HIGH);
} else {
digitalWrite(ledPin13, LOW);
digitalWrite(buzzPin, LOW);
}

delay(100);
digitalWrite(ledPin13, LOW);
}
