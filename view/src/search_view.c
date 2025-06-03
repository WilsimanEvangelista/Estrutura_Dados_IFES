#ifndef SEARCH_VIEW                        // Diretiva para evitar múltiplas inclusões do mesmo arquivo
#define SEARCH_VIEW

#include <stdio.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 255
#endif

int scan_choice1() {
    int choice;

    printf("Deseja consultar por:\n\t(1) - CPF;\n\t(2) - Nome;\n\t(-1) - Voltar para o menu inicial;\nDIGITE A SUA ESCOLHA: ");
    scanf("%d", &choice);

    if(choice == -1) {
        return -1;
    }    

    if (choice <= 0) {
        printf("A ESCOLHA DEVE SER UM NUMERO POSITIVO!\n\n--------------------------------------------------\n\n");
        return scan_choice1();
    }

    if (choice > 2) {
        printf("A ESCOLHA DEVE SER MENOR OU IGUAL A 2!\n\n--------------------------------------------------\n\n");
        return scan_choice1();
    }

    return choice;
}


void scan_choice1_input(char* msg, char* dest) {
    char fstring[BUFFER_SIZE];

    snprintf(fstring, BUFFER_SIZE - 1, "%%%ds", BUFFER_SIZE);

    printf(msg);
    scanf(fstring, dest);
}

#endif  // Fim da diretiva de inclusão condicional
