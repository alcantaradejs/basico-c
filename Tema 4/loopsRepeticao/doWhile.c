#include <stdio.h>
#include <string.h>

int main() {
    char command[100];

    do {
        printf("Command> ");
        scanf("%s", command);

        if (!strcmp(command, "hello")) {
            printf("Olá!\n");
        } else if (stricmp(command, "exit")) {
            printf("[!] Comnado Invalido\n");
        }
    } while(stricmp(command, "exit"));
    

    return 0;
}