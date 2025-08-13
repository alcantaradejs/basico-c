#include <stdio.h>

int main() {
    /*
        soma -> +
        subitração -> -
        Multiplicação -> *
        Divisão -> /
    */

    int num1 = 10;
    int num2 = 5;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    int soma, subtracao, multiplicacao, divisao;

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("\n[+] Resultados\n\n");
    printf("soma: %i\n", soma);
    printf("subitracao: %i\n", subtracao);
    printf("multiplicacao: %i\n", multiplicacao);
    printf("divisao: %i\n", divisao);
}