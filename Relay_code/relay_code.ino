/* 2022-2023 version
code was changed due to rewiring*/

int in1 = 7;
int A = 5; //PUMP 1
int B = 4; //LIGHTS
int C = 13; // has no use curently was there for pump 2
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
  delay(30000); // 30 second delay
  digitalWrite(A, HIGH); //pump off
  delay(1800000); //30 minute delay
  }

  digitalWrite(B, HIGH); //lights off
  
  for (i = 0; i <= 7; i++) { // lights is off for 8 hours
  digitalWrite(A, LOW); //pump on
  delay(30000); //30 second delay
  digitalWrite(A, LOW); //pump off
  delay(1800000); //30 minute delay
  }
  }
