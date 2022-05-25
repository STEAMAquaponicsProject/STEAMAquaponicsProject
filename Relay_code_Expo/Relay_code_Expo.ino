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
  digitalWrite(A, LOW); //pump on
  delay(30000); // 30 second delay
  digitalWrite(A, HIGH); //pump off
  delay(30000);
  digitalWrite(B, HIGH); //light off
  delay(60000);
  }
