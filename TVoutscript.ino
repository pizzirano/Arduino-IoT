#include <TVout.h>
#include <video_gen.h>

TVout TV;

void setup() {
  Serial.begin(9600);
  TV.begin(NTSC, 120, 96);  // Certifique-se de que as configuraÃ§Ãµes sÃ£o adequadas Ã  sua TV
  Serial.println("InicializaÃ§Ã£o concluÃ­da");
}

void loop() {
  Serial.println("Loop executado");

  // Adicione instruÃ§Ãµes de depuraÃ§Ã£o para verificar o estado do programa
  Serial.println("Limpando a tela");
  TV.clear_screen();  // Limpa a tela
  
  Serial.println("Adicionando mensagem Ã  tela");
  TV.print("Teste de Mensagem na Tela");  // Adiciona a mensagem Ã  tela

  Serial.println("Aguardando 20 segundos");
  delay(20000);  // Aguarda por 20 segundos
}