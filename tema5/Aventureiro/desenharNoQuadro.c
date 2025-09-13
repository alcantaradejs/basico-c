#include <stdio.h>

const int DEV_MODE = 0;
const int BOARD_SIZE_X = 5 * 10;
const int BOARD_SIZE_Y = 3 * 10; 
const char SIMBOLO_FUNDO = '.';

void createBoard(int board[BOARD_SIZE_Y][BOARD_SIZE_X]) {
    for (int y = 0; y < BOARD_SIZE_Y; y++) {
        for (int x = 0; x < BOARD_SIZE_X; x++) {
            board[y][x] = SIMBOLO_FUNDO;
        }
    }
}

void showBoard(int board[BOARD_SIZE_Y][BOARD_SIZE_X], char * separator) {
    for (int y = 0; y < BOARD_SIZE_Y; y++) {
        for (int x = 0; x < BOARD_SIZE_X; x++) {
            printf("%c%s", board[y][x], separator);
        }
        printf("\n");
    }
}

void drawTriangle(int board[BOARD_SIZE_Y][BOARD_SIZE_X], int initYpos, int initXpos, int size, char Simbol) {
    const int limitY = (3 * size) + initYpos, limitX = (5 * size) + initXpos;

    int initLine = (((size * 5) / 2) + initXpos) - 1;
    int endLine = ((size * 5) / 2) + initXpos + 1;

    for (int y = initYpos; y < limitY && y < BOARD_SIZE_Y ; y++) {
        if (DEV_MODE) printf ("\n[DEV MODE]\n y: %d  initLine: %d  lineSize: %d\n", y, initLine, endLine);

        for (int x = initXpos; x < limitX && x < BOARD_SIZE_X ; x++) {
            if (x > initLine && x < endLine) {
                board[y][x] = Simbol;
            }
            if (DEV_MODE) printf("%c ", board[y][x]);
        }
        if (DEV_MODE) printf("\n"); 

        initLine--;
        endLine++; 
    }
}

int main() {
    int board[BOARD_SIZE_Y][BOARD_SIZE_X];
    createBoard(board);

    drawTriangle(board, 1, 1, 3, '#');

    showBoard(board, " ");
    return 0;
}