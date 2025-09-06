#include <stdio.h>
#include <string.h>

int main() {
    char command[100];
    int exit = 0; // [Boolean] 1 -> finalizar programa

    while(exit == 0) {
        printf("Command> ");
        scanf("%s", command);

        if (stricmp(command, "exit") == 0) {
            exit = 1 ;
        } else {
            printf("\n[!] Comnado Invalido\n\n");
        }
    } 
    

    return 0;
}