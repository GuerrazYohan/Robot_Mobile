#define VCC 4             // Cette broche est définie comme Vcc
#define TRIG 5            // Broche de déclenchement du capteur à ultrasons
#define ECHO 6          // Broche d'écho du capteur à ultrasons
#define GND 7            // Cette broche est définie comme GND
#define MOTOR 3       // Broche moteur

const int dist = 15;     // Desired distance in cm

float duration, distance;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  pinMode(VCC, OUTPUT);
  pinMode(GND, OUTPUT);

  digitalWrite(VCC, HIGH);
  digitalWrite(GND, LOW);
  delay(5000);
}

void loop() {
//  This section is related to Ultrasonics sensor
/*
 digitalWrite(TRIG, LOW);
 delayMicroseconds(2);
 digitalWrite(TRIG, HIGH);
 delayMicroseconds(10);
 digitalWrite(TRIG, LOW);
 duration = pulseIn(ECHO, HIGH);
 distance = (duration * .0343) / 2;
  if (distance < dist)
    analogWrite(MOTOR, 200);
  else
    analogWrite(MOTOR, 0);
  delay(50);
*/

  analogWrite(MOTOR, 200);
}
