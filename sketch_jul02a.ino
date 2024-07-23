// #define OUTPUT_PIN 9  // Change this to the pin you want to output to

// void setup() {
//   pinMode(OUTPUT_PIN, OUTPUT);
// }

// void loop() {
//   tone(OUTPUT_PIN, 40000);  // Generate a 40000Hz square wave
// }




const int trigPin = 9;  // Pin connected to the gate of the MOSFET
const int buttonPin = 2;  // Pin connected to the push button
const int ledPin = 5;  // Pin connected to the status LED
bool signalOn = false;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // Enable internal pull-up resistor for the button pin
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);  // Ensure LED is off initially
}

void loop() {
  // Check if the button is pressed
  if (digitalRead(buttonPin) == LOW) {
    delay(50);  // Debounce delay
    if (digitalRead(buttonPin) == LOW) {
      signalOn = !signalOn;  // Toggle the signal state
      while (digitalRead(buttonPin) == LOW);  // Wait for button release
    }
  }

  if (signalOn) {
    digitalWrite(ledPin, HIGH);  // Turn on LED to indicate signal is active
    // Generate a 40kHz ultrasonic signal
    tone(trigPin, 40000);  // Generate a tone at 40kHz on trigPin
    delay(5);  // Keep the tone on for 5 milliseconds
    noTone(trigPin);  // Stop the tone
    delay(1);  // Keep the tone off for 1 millisecond
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED to indicate signal is inactive
    noTone(trigPin);  // Ensure the tone is off when the signal is not active
  }
}




// for test
// const int trigPin = 9;

// void setup() {
//   pinMode(trigPin, OUTPUT);
// }

// void loop() {
//   digitalWrite(trigPin, LOW);
//   delay(1000);
//   digitalWrite(trigPin, HIGH);
//   // delayMiliseconds(500);
//   delay(1000);
//   digitalWrite(trigPin, LOW);
//   // No delay here
// }