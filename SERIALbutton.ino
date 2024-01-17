#define pinSW 2

void setup() {
  pinMode(pinSW, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop() {
  bool statusSW = digitalRead(pinSW);

  if (statusSW) {
    Serial.println("Botao: [Solto]");
  } else {
    Serial.println("Botao: [Apertado]");
  }

  delay(100);  // Adicione um pequeno atraso para evitar leituras rÃ¡pidas
}