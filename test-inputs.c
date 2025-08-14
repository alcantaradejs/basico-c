#include <stdio.h>

int main () {
    char name[60];
    char letra;

    printf("Digite uma letra: \n");
    scanf(" %c", &name);

    scanf("%c"); // limpar buffer

    printf("Digite seu nome: \n");
    fgets(name, 60, stdin);

    printf("Seu nome é: %s", name);
}