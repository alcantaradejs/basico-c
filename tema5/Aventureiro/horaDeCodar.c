#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];

    int soma = 0;

    for (int i = 0, soma = 0; i < LINHAS; i++, soma++) {
        for (int j = 0, soma2 = 0; j < COLUNAS; j++, soma2++) {
            matriz[i][j] = soma + soma2;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}