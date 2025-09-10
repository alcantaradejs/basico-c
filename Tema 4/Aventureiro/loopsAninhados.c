#include <stdio.h>

int main() {

    for(int i = 1; i <= 10; i++) {
        printf("\nTabuada de %d\n", i);
        for(int i2 = 1; i2 <= 10; i2++){
            printf("%d x %d = %d\n", i, i2, i * i2);
        }
    }

    return 0;
}