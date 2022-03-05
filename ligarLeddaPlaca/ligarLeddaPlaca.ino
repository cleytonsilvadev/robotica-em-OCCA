
void setup() {
  // localização do led em qual porta ele esta
  pinMode(LED_BUILTIN, OUTPUT);
}

// comando de repetição 
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // ligar o led
  delay(150);                       // tempo para ficar ligado
  digitalWrite(LED_BUILTIN, LOW);    // led ira desligar
  delay(100);                       // tempo ira ficar apagado
}
