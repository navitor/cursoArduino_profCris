void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); /*Configuração do pin 13 como saída*/
  pinMode(25, INPUT);  //
  digitalRead(25);     // falando a leitura do nivel lógico do pino 7

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(25)){
    digitalWrite(13, HIGH);      //Ativa o pino 13, acendendo o led
    delay(1000);                //para a execução do programa por 1 segundo
    digitalWrite(13, LOW);     //Ativa o pino 13,acendendo o LED
    delay(1000);              //Para a execução do programa por 1 segundo
    digitalWrite(13, HIGH);      //Ativa o pino 13, acendendo o led
    delay(1000);                //para a execução do programa por 1 segundo
    digitalWrite(13, LOW);     //Ativa o pino 13,acendendo o LED
    delay(1000);              //Para a execução do programa por 1 segundo
  }


}
