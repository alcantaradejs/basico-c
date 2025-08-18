#include <stdio.h>

int main() {
    printf("\n[ Operadores Logicos ]\n");

    // and -> &&
    printf("\n[opaerador AND]\n");
    printf("0 && 0: %d\n", 0 && 0);
    printf("0 && 1: %d\n", 0 && 1);
    printf("1 && 0: %d\n", 1 && 0);
    printf("1 && 1: %d\n", 1 && 1);

    // or -> ||
    printf("\n[opaerador or]\n");
    printf("0 || 0: %d\n", 0 || 0);
    printf("0 || 1: %d\n", 0 || 1);
    printf("1 || 0: %d\n", 1 || 0);
    printf("1 || 1: %d\n", 1 || 1);

    // Not -> !
    printf("\n[opaerador or]\n");
    printf("!0: %d\n", !0);
    printf("!1: %d\n", !1);

    printf("\n---------------------------------\n");

    /*  Tabela de Ordem de orecedencia
    
        () []	                esquerda para a direita
        ! - ++ --	            direita para a esquerda
        * / %	                esquerda para a direita
        + -	                    esquerda para a direita
        < <= > >=	            esquerda para a direita
        == !=	                esquerda para a direita
        &&	                    esquerda para a direita
        ||	                    esquerda para a direita
        = += -= *= /= %=        direita para a esquerda
        ,	                    esquerda para a direita
    */

    return 0;
}