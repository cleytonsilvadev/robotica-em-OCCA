int contador=0;
void setup() {
  // localização do led em qual porta ele esta
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  
}

// comando de repetição 
void loop() {
  
  
  
  
  
  digitalWrite(LED_BUILTIN, HIGH);   // ligar o led
  
  contador = contador+1;
  if(contador>=6)
  contador=0;
  Serial.println(contador);
  Serial.println("vezes que o led piscou" );
  delay(800);                       // tempo para ficar ligado
  
  digitalWrite(LED_BUILTIN, LOW);    // led ira desligar
  delay(800);                       // tempo ira ficar apagado
}
