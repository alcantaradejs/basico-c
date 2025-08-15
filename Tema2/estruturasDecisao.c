#include <stdio.h>

int main() {
    /*int numero = 3680;

    if ( numero % 2 == 0 ) {
        printf("%d numero é par\n", numero);
    } else {
        printf("%d numero é inpar\n", numero);
    }*/

    float preco1, preco2;

    printf("preço do produto 1: ");
    scanf("%f", &preco1);

    printf("preço do produto 2: ");
    scanf("%f", &preco2);

    if ( preco1 == preco2 ) {
        printf("produto 1 e produto 2 tem o mesmo preço");
    } else if (preco1 < preco2) {
        printf("produto 1 é mais barato que produto 2");
    }else {
        printf("produto 2 é mais barato que produto 1");
    }

    return 0;
}