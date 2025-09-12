#include <stdio.h>

void showMatiz(const int sizeX, const int sizeY, int matriz[sizeX][sizeY]) {
    for(int y = 0; y < sizeY; y++) {
        for(int x = 0; x < sizeX; x++) {
            printf("%d ", matriz[y][x]);
        }
        printf("\n");
    }
}

void preencherMatrzi(const int sizeX, const int sizeY, int matriz[sizeX][sizeY], int value) {
    for(int y = 0; y < sizeY; y++) {
        for(int x = 0; x < sizeX; x++) {
            matriz[y][x] = value;
        }
    }
}

int main() {
    int matriz[20][20];

    preencherMatrzi(20, 20, matriz, 0);

    showMatiz(10, 15, matriz);

    return 0;
}