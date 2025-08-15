#include <stdio.h>

int main() {
    int n1 = 10;
    float n2 = 1.5;

    float floatResult = n1 / n2;
    int intResult = n1 / n2;

    float floatIntResult = intResult; // intResult no formato de floar ( para demonstrar a perda de dados )

    printf("%i / %.2f\nfloat: %.2f\nint: %.2f", n1, n2, floatResult, floatIntResult);

    return 0;
}
