#include <stdio.h>

void Triangulo(const int size) {
    const int limitY = 3 * size, limitX = 5 * size;
    char matriz[limitY][limitX];    
    
    printf("\n");
    
    int initLine = limitX / 2;
    int lineSize = 1;

    for (int y = 0; y < limitY ; y++) {
        // printf ("\ny: %d  initLine: %d  lineSize: %d\n", y, initLine, lineSize);
        for (int x = 0; x < limitX ; x++) {
            if (x >= initLine && x < (initLine + lineSize) && lineSize <= limitX) {
                printf("%c ", '@');
            } else {
                printf("%c ", '.');
            }
        }
        printf("\n");

        initLine--;
        lineSize += 2; 
    }

    printf("\n");
}

void cruz(const int size) {
    const int limitY = 3 * size, limitX = 5 * size;
    char matriz[limitY][limitX];    
    
    printf("\n");
    
    int initLine = limitX / 2;
    int lineSize = 1;

    // printf ("\ninitLine: %d  finalLine: %d\n", ((limitY / 2) - (size / 2)), ((limitY / 2) + (size / 2)));

    for (int y = 0; y < limitY ; y++) {
        if (y >= ((limitY / 2) - (size / 2)) && y <= ((limitY / 2) + (size / 2))) { 
            initLine = (limitX / 2) - ((5 * size) / 2);
            lineSize = 5 * size; 
        } else { 
            initLine = (limitX / 2) - (size / 2);
            lineSize = size; 
        }

        // printf ("\ny: %d  initLine: %d  lineSize: %d\n", y, initLine, lineSize);
        for (int x = 0; x < limitX ; x++) {
            if (x >= initLine && x < (initLine + lineSize) && lineSize <= limitX) {
                printf("%c ", '@');
            } else {
                printf("%c ", '.');
            }
        }
        printf("\n");
    }

    printf("\n");
}

void octaedro(const int size) {
    const int limitY = 3 * size, limitX = 5 * size;
    char matriz[limitY][limitX];    
    
    printf("\n");
    
    int initLine = limitX / 2;
    int lineSize = 1;

    for (int y = 0; y < limitY ; y++) {
        // printf ("\ny: %d  initLine: %d  lineSize: %d\n", y, initLine, lineSize);
        for (int x = 0; x < limitX ; x++) {
            if (x >= initLine && x < (initLine + lineSize) && lineSize <= limitX) {
                printf("%c ", '@');
            } else {
                printf("%c ", '.');
            }
        }
        printf("\n");

        if (y < limitY / 2) { 
            initLine--;
            lineSize += 2; 
        } else { 
            initLine++;
            lineSize -= 2; 
        }
    }

    printf("\n");
}

int main() {
    Triangulo(1);
    cruz(1);
    octaedro(1);

    return 0;
}