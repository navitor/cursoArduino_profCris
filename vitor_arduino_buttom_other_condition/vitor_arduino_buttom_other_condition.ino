void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); /*Configuração do pin 13 como saída*/
  pinMode(25, INPUT);  //
  digitalRead(25);     // falando a leitura do nivel lógico do pino 7

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(25)){
    delay(50);                //para a execução do programa por 1 segundo
    digitalWrite(13, !digitalRead(13));      //Ativa o pino 13, acendendo o led
    while(digitalRead(25));
  }


}
