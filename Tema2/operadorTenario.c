#include <stdio.h>

// condição ? verdadeiro : falso

int main() {
    int n1 = 190, n2 = 100, maior;

    maior = n1 > n2 ? n1 : n2;

    printf("O maior numero é %d\n", maior);
    
    return 0;
}