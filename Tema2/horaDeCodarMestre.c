#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    /* Maior Menor ou Igual

        - o jogadore deve escolher um jogo e adivinhar se esse numero é maior, menor ou igual ao que o compudador escolher
        - o computador deve gerar um numero aleatorio entre 1 e 100
        - 
    */

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    srand(time(0));
    numeroComputador = (rand() % 100) + 1;

    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n\n");
    printf("Você deve escolher um número e o tipo de comparação. \n");
    printf("[M] Maior\n");
    printf("[N] Menor\n");
    printf("[I] Igual\n\n");

    printf("Escolha a comparção: ");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    
    printf("\n-----------------------------------\n\n");
    
    if (numeroJogador <= 100 && numeroJogador >= 0) {
        printf("O número do computador é: %d\n", numeroComputador);
        printf("O seu numero é: %d\n", numeroJogador);

        switch (tipoComparacao) {
        case 'M':
        case 'm':
            resultado = numeroJogador > numeroComputador;
            printf("%s escoheu a opição maior", resultado ? "Você":"O computador");
            printf(", %s\n", resultado ? "Você venceu!":"Você perdeu :(");
            break; 
        case 'N':
        case 'n':
            resultado = numeroJogador < numeroComputador;
            printf("%s escoheu a opição menor", resultado ? "Você":"O computador");
            printf(", %s\n", resultado ? "Você venceu!":"Você perdeu :(");
            break; 
        case 'I':
        case 'i':
            resultado = numeroJogador == numeroComputador;
            printf("%s", resultado ? "Você escolheu igual ao computador":"Você escolheu diferente do computador");
            printf(", %s\n", resultado ? "Você venceu!":"Você perdeu :(");
            break; 
        default:
            printf("[!] Opição de comparação invalida!\n");
            break;
        }
    } else {
        printf("[!] O numro que você escolheu esta fora do limite!\n\n");
    }

    return 0;
}