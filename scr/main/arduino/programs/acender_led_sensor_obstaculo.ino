#define vermelho_01 3
#define verde_01 4
#define sensor_01 13

void setup() {
  pinMode(vermelho_01, OUTPUT);
  pinMode(verde_01, OUTPUT);

  pinMode(sensor_01, INPUT);

}

void loop() {

  digitalWrite(verde_01, HIGH);

  if(digitalRead(sensor_01) == 0) {
    digitalWrite(verde_01, LOW);
    digitalWrite(vermelho_01, HIGH);
    delay(200);
  }
    else{
      digitalWrite(vermelho_01, LOW);
    }
}
