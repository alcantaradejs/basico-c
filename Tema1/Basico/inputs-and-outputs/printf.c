#include <stdio.h>

int main () {
    char name[20] = "Paulo";
    int age = 20;
    float height = 1.80;
    double bankBalance = 2500.68;
    char gender = 'M';


    printf("%s tem %i anos\n", name, age);
    printf("%s tem %f m de altura\n", name, height);
    printf("%s tem um saldo de %.2f", name, bankBalance);
 
    // %d: Imprime um inteiro no formato decimal.
    // %i: Equivalente a %d.
    // %f: Imprime um número de ponto flutuante no formato padrão.
    // %e: Imprime um número de ponto flutuante na notação científica.
    // %c: Imprime um único caractere.
    // %s: Imprime uma cadeia (string) de caracteres.

    return 0;
}