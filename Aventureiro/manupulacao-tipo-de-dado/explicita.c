#include <stdio.h>

int main() {
    int n1 = 10;
    int n2 = 3;

    float floatResult = (float) n1 / n2; // a expressão "(float)" é o casting, quando eu forço que o dado seja armazenado nesse formato, no caso float

    printf("float: %.2f\n", floatResult);

    return 0;
}
