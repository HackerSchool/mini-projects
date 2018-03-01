/* Correspondence of the ports of arduino */
int buttonA = 7;
int buttonB = 6;
int LedGame = 5; // led that controls the game

// Leds that decide which gamer won
int LedA = 4;
int LedB = 3;

/* waitLed is a randomly generated number of seconds between Led blinking */
int waitLed = 0;

/* state of the pushed buttons */
int stateA = -1;
int stateB = -1;

unsigned long previousMillis = 0;
unsigned long currentMillis = 0;

/* 1 is the A side, 0 is the B side */

void setup() {
  // put your setup code here, to run once:
  pinMode(LedGame, OUTPUT);
  pinMode(LedA, OUTPUT);
  pinMode(LedB, OUTPUT);
  pinMode(buttonA, INPUT);
  pinMode(buttonB, INPUT);

  // use analog noise to create a random seed
  randomSeed(analogRead(0)); // randomize

  // initialization animation
  for (int i = 0; i < 3; i++) {
    digitalWrite(LedGame, HIGH);
    delay(500);
    digitalWrite(LedGame, LOW);
  }

  // chooses the first timing
  RandomGenerator();
}

void loop() {
  // gets the time since the program started
  currentMillis = millis();

  // reads if a button was pushed
  stateA = digitalRead(buttonA);
  stateB = digitalRead(buttonB);

  // if the button was pressed at the correct time interval
  if (currentMillis - previousMillis >= waitLed) {

    // lights up LED
    digitalWrite(LedGame, HIGH);

    // if player A pushes the button first
    if (stateA == HIGH) {
      /* Lights the led correspondent to the A button */
      digitalWrite(LedA, HIGH);

      // generates a new time
      RandomGenerator();
      // if player B pushes the button first
    } else if (stateB == HIGH) {
      /* Lights the led correspondent to the B button */
      digitalWrite(LedB, HIGH);

      // generates a new time
      RandomGenerator();
    }
    // if the button was pressed before the correct time interval
  } else if (currentMillis - previousMillis < waitLed) {

    // if player B pushes the button first
    if (stateB == HIGH) {
      /* Lights the led correspondent to the A button */
      digitalWrite(LedA, HIGH);

      // generates a new time
      RandomGenerator();
      // if player A pushes the button first
    } else if (stateA == HIGH) {
      /* Lights the led correspondent to the B button */
      digitalWrite(LedB, HIGH);

      // generates a new time
      RandomGenerator();
    }
  }
}

//
void RandomGenerator() {

  delay(2000);
  // turns off leds
  digitalWrite(LedA, LOW);
  digitalWrite(LedB, LOW);
  digitalWrite(LedGame, LOW);
  delay(2000);

  previousMillis = currentMillis;
  /* the waiting time is between 3sec and 10sec */
  waitLed = random(3000, 10000);
}
