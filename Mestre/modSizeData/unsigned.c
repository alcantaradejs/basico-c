#include <stdio.h>

int main() {
    int numeroSinal = 3000000000; // int com sinal ( + || - ) so pode ter valores entre ( -2,147,483,648 a 2,147,483,647 )
    unsigned int numeroSemSinal = 3000000000; // int sem sinal ( + || - ) so pode ter valores entre ( 0 a 4,294,967,295 )

    printf("[+] Modificador unsigned\n");
    printf("com sinal: %d\n", numeroSinal);
    printf("sem sinal: %u\n", numeroSemSinal);

    /*
        O mesmo acontece para chars
        char => -128 a 127
        unsigned char => 0 a 255
    */

    return 0;
}