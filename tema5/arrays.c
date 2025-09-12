#include <stdio.h>

float calcularMedia(float notas[4]) {
    float soma = 0;

    for (int i = 0; i <= 3 ; i++) {
        soma += notas[i];
    }

    return soma / 4;
}

int main() {
    //Arrays - vetores
    float notas[4] = {8.5, 6.5, 7.1, 2.5};
    float media = calcularMedia(notas);

    for (int i = 0; i <= 3; i++) {
        printf("nota %d: %.1f\n", i + 1, notas[i]);
    }
    

    printf("\nA media é: %.1f\n", media);
    
    return 0;
}