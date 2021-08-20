#define NOTE_A3 220
#define NOTE_B3 246
#define NOTE_C4 261
#define NOTE_D4 293
#define NOTE_E4 329
#define NOTE_F4 349
#define NOTE_G4 391
#define NOTE_A4 440
#define NOTE_B4 493
#define NOTE_C5 523
#define NOTE_D5 587
#define NOTE_E5 658
#define NOTE_F5 693
void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if (analogRead(A0) < 50) {
    tone(4, NOTE_A3 , 220);
  } else {
    digitalWrite(4, LOW);
  }


  
  if (analogRead(A1) < 50) {
    tone(4, NOTE_B3 , 246);
  } else {
    digitalWrite(4, LOW);
  }


  
  if (analogRead(A2) < 50) {
    tone(4, NOTE_C4 , 261);
  } else {
    digitalWrite(4, LOW);
  }

  
  if (analogRead(A3) < 50) {
    tone(4, NOTE_D4 , 293);
  } else {
    digitalWrite(4, LOW);
  }


  if (analogRead(A4) < 50) {
    tone(4, NOTE_E4 , 329);
  } else {
    digitalWrite(4, LOW);
  }


  if (analogRead(A5) < 50) {
    tone(4, NOTE_F4 , 349);
  } else {
    digitalWrite(4, LOW);
  }


  if (analogRead(A6) < 50) {
    tone(4, NOTE_G4 , 391);
  } else {
    digitalWrite(4, LOW);
  }


  if (analogRead(A7) < 50) {
    tone(4, NOTE_A4 , 440);
  } else {
    digitalWrite(4, LOW);
  }


  if (analogRead(A8) < 50) {
    tone(4, NOTE_B4 , 493);
  } else {
    digitalWrite(4, LOW);
  }


  if (analogRead(A9) < 50) {
    tone(4, NOTE_C5 , 523);
  } else {
    digitalWrite(4, LOW);
  }


  if (analogRead(A10) < 50) {
    tone(4, NOTE_D5 , 587);
  } else {
    digitalWrite(4, LOW);
  }


  if (analogRead(A11) < 50) {
    tone(4, NOTE_E5 , 658);
  } else {
    digitalWrite(4, LOW);
  }


  if (analogRead(A12) < 50) {
    tone(4, NOTE_F5 , 693);
  } else {
    digitalWrite(4, LOW);
  }
}
