#include <stdio.h>

int main() {
    float saldo = 100;
    int opition;
    
    printf("Escolha uma opição:\n");
    printf("[1] Verificar Saldo\n");
    printf("[2] Fazer Depósito\n");
    printf("[3] Fazer Saque\n");
    scanf("%d", &opition);

    switch (opition) {
        case 1:
            printf("Seu saldo é de: R$ %.2f", saldo);
            break;
        case 2:
            printf("Fazer depoisot...");
            break;
        case 3:
            printf("Fazer saque...");
            break;
        default:
            break;
    }

    return 0;
}