#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {0, 1, 2},
        {1, 2, 3},
        {2, 3, 4}
    };
    
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            printf("%d ", matriz[y][x]);   
        }
        printf("\n");
    }

    return 0;
}