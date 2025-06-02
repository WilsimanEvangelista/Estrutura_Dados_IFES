#ifndef DIV_VIEW         // Verifica se DIV_VIEW ainda não foi definido (evita inclusão múltipla)
#define DIV_VIEW         // Define a macro DIV_VIEW

#include <stdlib.h>      // Inclui biblioteca necessária para uso da função system()

// Função responsável por limpar a tela do terminal
void print_div() {
    system("clear");     // Executa o comando "clear" do sistema, que limpa o terminal (funciona em sistemas Unix/Linux)
}

#endif                  // Fim da diretiva de inclusão condicional