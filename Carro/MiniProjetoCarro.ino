#define pinIN1 10    //Motor 1
#define pinIN2 9     //Motor 1
#define pinIN3 6     //Motor 2
#define pinIN4 5     //Motor 2 

#define VELOCITY 100 //velocidade


#define buttonPin  11    // the number of the pushbutton pin
#define buttonPin2  12

int button1State = 0;         // variable for reading the pushbutton status
int button2State = 0;



void setup() {
  //Initialize the pins
  pinMode(pinIN1, OUTPUT);
  pinMode(pinIN2, OUTPUT);
  pinMode(pinIN3, OUTPUT);
  pinMode(pinIN4, OUTPUT);

  
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
}


void loop() {
    //Read the state of the button
    button1State = digitalRead(buttonPin);
    button2State = digitalRead(buttonPin2);

     //Control motor 1
     if (button1State == LOW) {
        analogWrite(pinIN1, VELOCITY);
        analogWrite(pinIN2, 0);
     }
     else {
        analogWrite(pinIN1, 0);
        analogWrite(pinIN2, 0);
     }

     //Control motor 2
     if(button2State == LOW){
        analogWrite(pinIN3, VELOCITY);
        analogWrite(pinIN4, 0);
     }
     else {
        analogWrite(pinIN3, 0);
        analogWrite(pinIN4, 0);   
     }
}
