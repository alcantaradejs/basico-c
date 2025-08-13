#include <stdio.h>

int main () {
    char name[20];
    int age;
    char gender;

    printf("Cadastro de Usuario\n---------------------------------------\n");

    printf("Nome: ");
    scanf("%s", &name);

    printf("idade: ");
    scanf("%i", &age);

    printf("Genero[M/F]:");
    scanf(" %c", &gender);

    printf("Ola %s! Você tem %i anos e seu genero é %c", name, age, gender);

    return 0;
}