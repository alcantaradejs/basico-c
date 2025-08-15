#include <stdio.h>

int main() {
    int numero = 2147483648; // valor limite + 1
    long int numeroL = 2147483648;
    long long int numeroLL = 2147483648;

    printf("\n[+] Modificador long\n");
    printf("int: %d\n", numero);
    printf("long int: %ld\n", numeroL);
    printf("long long int: %lld\n", numeroLL);

    printf("\n[+] Tamanho das variaveis\n");
    printf("int: %u Bytes\n", sizeof(numero));
    printf("long int: %u Bytes\n", sizeof(numeroL));
    printf("long long int: %u Bytes\n", sizeof(numeroLL));

    return 0;
}