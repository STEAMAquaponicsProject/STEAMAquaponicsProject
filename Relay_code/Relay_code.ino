int in1 = 7;
int A = 2; //PUMP 1
int B = 4; //LIGHTS
int C = 6;
int i;
//int Y;

//HIGH means off, LOW means on

void setup() {
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  digitalWrite(A, HIGH);
  pinMode(B, OUTPUT);
  digitalWrite(B, HIGH);
  pinMode(C, OUTPUT);
  digitalWrite(C, HIGH);
}

void loop() {

  digitalWrite(B, LOW); //lights on

  for (i = 0; i <= 15; i++) { // ligts  is on for 16 hours
  digitalWrite(A, LOW); //pump on
  delay(300000); //5 minute delay
  digitalWrite(A, HIGH); //pump off
  delay(3300000); //55 minute delay
  }

  digitalWrite(B, HIGH); //lights off
  
  for (i = 0; i <= 7; i++) { // lights is off for 8 hours
  digitalWrite(A, LOW); //pump on
  delay(300000); //5 minute delay
  digitalWrite(A, LOW); //pump off
  delay(3300000); //55 minute delay
  }
  }
