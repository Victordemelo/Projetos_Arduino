#define ledverde 2
#define botao 3

void setup() {
  pinMode(ledverde, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(9600);
}

void loop() {

  if(digitalRead(botao) == HIGH ){
    digitalWrite(ledverde, HIGH);
    delay(100);
  }
  else{
    digitalWrite(ledverde, LOW);
    delay(100);
  }

}
