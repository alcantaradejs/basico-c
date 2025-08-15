#include <stdio.h>

int main() {
    int numero = 1000000; // valor limite + 1
    short int numeroS = 1000000;

    printf("\n[+] Modificador short\n");
    printf("int: %d\n", numero);
    printf("short int: %ld\n", numeroS);

    printf("\n[+] Tamanho das variaveis\n");
    printf("int: %u Bytes\n", sizeof(numero));
    printf("shor int: %u Bytes\n", sizeof(numeroS));

    return 0;
}