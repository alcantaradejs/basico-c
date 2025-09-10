#include <stdio.h>

int main() {
 
    // for (int i = 0, j = 10; i <= j; i++, j--) {
    //     printf("i = %d, j = %d\n", i, j);
    // }

    // //mostra apenas os numeros impares de 1 a 100
    // for (int i = 1; i < 100; i += (i % 2 == 0 ? 1 : 2)) {
    //     printf("%d\n", i);
    // }

    for (int i = 0; i < 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        printf("%d ", i);
    }
    

    return 0;
}