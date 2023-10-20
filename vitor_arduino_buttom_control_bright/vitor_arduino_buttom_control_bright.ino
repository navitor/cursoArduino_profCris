
int count = 0;

void setup() {
  
  pinMode(13, OUTPUT); /*Configuração do pin 13 como saída*/
  pinMode(25, INPUT);  //
  digitalRead(25);     // falando a leitura do nivel lógico do pino 7
  

}

void loop() {
  
  count = count++ %255;

  analogWrite(13, count);
  delay(100);
  
  

}
