void setup() {/*Inicio da função de configuração,
  as linhas de códigos entre as chaves desta função
  executam apenas uma vez*/
  
  pinMode(13, OUTPUT); /*Configuração do pin 13 como saída*/

}/*Fim Função de configuração*/

void loop() {/*Inicio da fumção loop (Laço de repetição),
  as linhas de código entre as chaves desta função
  executam infinitamente enquanto o arduino está ligado*/

  digitalWrite(13, HIGH);//Ativa o pino 13, acendendo o led
  delay(1000); //para a execução do programa por 1 segundo
  digitalWrite(13, LOW);//Ativa o pino 13,acendendo o LED
  delay(1000); //Para a execução do programa por 1 segundo

}/*Fim da Função loop */
