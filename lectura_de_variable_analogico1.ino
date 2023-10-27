const int pinPotenciometro = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorPotenciometro = analogRead(pinPotenciometro);
  Serial.print("Valor del potenciómetro: ");
  Serial.println(valorPotenciometro);

  delay(500);
}