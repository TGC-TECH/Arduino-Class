// constants won't change. They're used here to
// set pin numbers:
const int buttonPin1 = 1;     // enter the number of the pushbutton pin
const int buttonPin0 = 0;
const int ledPin1 =  2;      // enter the number of the LED pin
const int ledPinR =  3;
const int ledPinG =  4;
const int buzzpin = 10; //enter the number of the Buzzer pin

// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int ALARM = 0;
int buttonState0 = 0;
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
// initialize the buzzer pin as an output:
  pinMode(buzzpin, OUTPUT);
// initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin0, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState0 = digitalRead(buttonPin0);
  digitalWrite(ledPinG, HIGH);

  if (buttonState1 == HIGH){
    ALARM = 1; }
  if (buttonState0 == HIGH){
    ALARM = 0; }
  
  if (ALARM == 1){
    digitalWrite(ledPinG, LOW);
    digitalWrite(ledPinR, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite (buzzpin, LOW);
    delay(100);
    digitalWrite (ledPin1, LOW);
    digitalWrite (buzzpin, HIGH);
    delay(100);
   }
  }



