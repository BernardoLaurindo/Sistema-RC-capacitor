#define RC_PIN   A0

void setup() {
  Serial.begin(9600);
  Serial.println("Sistema RC - Medindo tensões");
}

void loop() {
  unsigned long tempo = millis();
  int valorLido = analogRead(RC_PIN);

  float tensaoResistor = valorLido * (5.0 / 1023.0);   
  float tensaoCapacitor = 5.0 - tensaoResistor;        

  Serial.print(tempo);
  Serial.print(" ms VR = ");
  Serial.print(tensaoResistor, 2);
  Serial.print("V VC = ");
  Serial.print(tensaoCapacitor, 2);
  Serial.println("V");

  delay(400);
}
