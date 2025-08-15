#include <stdio.h>

/*
    Pseudo Codigo

    Inicio
        solicitar as notas do aluno (nota1, ..., nota4)
        calcular a media das notas
        exxibir a media para o usuario
    Fim
*/

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("\n+--------------------+\n|  Calculo de meida  |\n+--------------------+\n\n");// Banner

    // solicitar as notas
    printf("Insira nota 1: ");
    scanf("%f", &nota1);

    printf("Insira nota 2: ");
    scanf("%f", &nota2);

    printf("Insira nota 3: ");
    scanf("%f", &nota3);

    printf("Insira nota 4: ");
    scanf("%f", &nota4);

    //calcular a media
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    //exibir media para o usuario
    printf("\nA media é: %.1f", media);
}