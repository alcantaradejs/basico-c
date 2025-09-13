#include <stdio.h>

const int matrizX = 20;
const int matrizY = 20;

int main() {
    int matriz[matrizY][matrizX];
    int target = 9;
    int some = 1;

    for (int y = 0; y < matrizY; y ++){
        for (int x = 0; x < matrizX; x ++, some++){
            matriz[y][x] = some;
            // printf("%d ", matriz[y][x]);
        }
        // printf("\n");
    }

    for (int y = 0; y < matrizY; y ++){
        for (int x = 0; x < matrizX; x ++, some++){
            if (matriz[y][x] == 140) printf("%d esta no indice (%d, %d)", matriz[y][x], y, x);
        }
    }

    return 0;
}