#include <stdio.h>

/* 🎯 Objetivo
    Programa que verifica condições de seguranlça de 1 aramazem

    as condições são:
    - Temperatura
    - Umidade
    - Nivel de Estoque

    Se alguma dessas condições estiver fora de um limite seguro deve ser emitido um alerta
*/

/* piseldo codigo
    Inicio
    declara variaveirs
    
    Se ( não condições estiverem seguras )
        emitir um alerta

    Fim
*/

int main() {
    float temperatura = 10.0; // °C - celsios / deve esta abaixo de 5°c
    float umidade = 10.0; // ??? / deve esta abaixo de 20
    unsigned int estoque = 20; // unidade / deve estar acima de 15 unidades

    /*if (temperatura < 5 && umidade < 20 && estoque > 15) {
        printf("[+] Tudo OK\n");
    } else {
        if (temperatura >= 5) {
            printf("[!] Temperatura muito alta\n");
        }

        if (umidade >= 20) {
            printf("[!] Umidade muito alta\n");
        }
        
        if (estoque <= 15) {
            printf("[!] Estoque muito baixo\n");
        }
    }*/

    if (temperatura >= 5) {
        printf("[!] Temperatura: muito alta\n");
    } else {
        printf("[+] Temperatura: Normal\n");
    }

    if (umidade >= 20) {
        printf("[!] Umidade: muito alta\n");
    } else {
        printf("[+] Umidade: Normal\n");
    }
    
    if (estoque <= 15) {
        printf("[!] Estoque muito baixo\n");
    } else {
        printf("[+] Estoque: Normal\n");
    }
    

    return 0;
}