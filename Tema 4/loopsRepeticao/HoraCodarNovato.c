#include <stdio.h>

// loop while
// int main() {
//     int i = 1;

//     while(i <= 20) {
//         if(i % 2 != 0) {
//             printf("%d é impar\n", i);
//         }

//         i++;
//     }

//     return 0;
// }

// loop do while
// int main() {
//     int numero;

//     do {
//         printf("Digite um numero par para sair do programa: ");
//         scanf("%d", &numero);

//         if (numero % 2 != 0) {
//             printf("\no numero %d é impar!\n\n", numero);
//         }
//     } while (numero % 2 != 0);

//     printf("\nVocê digitou um numero par, saindo do programa\n\n");

//     return 0;
// }

// loop for
int main() {
    int i = 1;
    int num;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &num);

    for (; i <= 10; i++) {
        printf("%d x %d = %d\n", i, num, i * num);
    }

    return 0;
}