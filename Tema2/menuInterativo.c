#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game() {
    srand(time(0));
    int secretNumber = rand() % 10;
    int userNunber;

    printf("Digite um numero de 0 a 9: ");
    scanf("%d", &userNunber);

    if ( userNunber == secretNumber ) {
        printf("Você acertou! :D\n");
    } else {
        printf("Você Errou :( \n");
        printf("O numero correto era: %d\n", secretNumber);
    }
}

int main() {
    int option;
    int exit = 0; // true or false

    while (exit == 0)  { // game loop
        printf("Escolha uma opição:\n");
        printf("[1] Iniciar Jogo.\n");
        printf("[2] Ver as regras.\n");
        printf("[3] Sair do Jogo.\n");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                game();
                break;
            case 2:
                printf("Regras...\n");
                break;
            case 3:
                exit = 1;
                break;
            default:
                printf("[!] Opição Invalida\n");
                break;
        }
    }

    return 0;
}