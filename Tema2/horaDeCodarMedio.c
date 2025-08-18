#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game() {
    
}

int main() {
    int escolhaComputador, escolhaJogador;
    srand(time(0));
    
    printf("+-----------------------------------+\n");
    printf("|                                   |\n");
    printf("|       Pedra, Papel, Tesoura       |\n");
    printf("|               Game                |\n");
    printf("|                                   |\n");
    printf("+-----------------------------------+\n");

    printf("Escolha uma opição:\n");
    printf("[1] Pedra.\n");
    printf("[2] Papel.\n");
    printf("[3] Tesoura.\n");
    scanf("%d", &escolhaJogador);
    printf("\n");
    
    switch (escolhaJogador) {
        case 1:
            printf("Jogador Escolheu: Pedra\n");
            break;
        case 2:
            printf("Jogador Escolheu: Papel\n");
            break;
        case 3:
            printf("Jogador Escolheu: Tesoura\n");
            break;
        default:
            printf("[!] Opição Invalida\n");
            return 0;
            break;
    }
    
    escolhaComputador = (rand() % 3) + 1; // escolha computador

    switch (escolhaComputador) {
        case 1:
            printf("Computador Escolheu: Pedra\n");
            break;
        case 2:
            printf("Computador Escolheu: Papel\n");
            break;
        case 3:
            printf("Computador Escolheu: Tesoura\n");
            break;
    }

    if (escolhaComputador == escolhaJogador) {
        printf("\n### O jogo empatou! ###\n\n");
    } else if (
        (escolhaComputador == 1 && escolhaJogador == 2) ||
        (escolhaComputador == 2 && escolhaJogador == 3) ||
        (escolhaComputador == 3 && escolhaJogador == 1)
    ) {
        printf("\n### Você ganhou! ###\n\n");
    } else {
        printf("\n### O computador ganhou! ###\n\n");
    }

    return 0;
}