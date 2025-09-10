#include <stdio.h>

void loopRecursivo(int n) {
    if (n > 0) {
        printf("%d\n", n);
        loopRecursivo(n - 1);
    }
}

int main() {
    loopRecursivo(10);

    return 0;
}