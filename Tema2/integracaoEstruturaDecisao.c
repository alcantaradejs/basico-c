#include <stdio.h>

int main() {
    int opcao, exit = 0;
    float nota1, nota2, nota3, media;

    printf("\n+-----------------------------------------+\n");
    printf("|                                         |\n");
    printf("|               Notas ALuno               |\n");
    printf("|                                         |\n");
    printf("+-----------------------------------------+\n\n");

    while (exit == 0) {        
        printf("Menu de Gerenciamento de Estudantes\n");
        printf("[1] Cadastrar Notas\n");
        printf("[2] Calcular Média\n");
        printf("[3] Determinar Status\n");
        printf("[4] Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        printf("\n-----------------------------------------------\n\n");

        switch (opcao) {
            case 1:
                printf("Digite a nota1: ");
                scanf("%f", &nota1);

                printf("Digite a nota2: ");
                scanf("%f", &nota2);

                printf("Digite a nota2: ");
                scanf("%f", &nota3);
                break;
            case 2:
                if (nota1 && nota2 && nota3) {
                    media = (nota1 + nota2 + nota3) / 3.0;
                    printf("nota1: %f\n", nota1);
                    printf("nota2: %f\n", nota2);
                    printf("nota3: %f\n", nota3);
                    printf("\nmedia: %f\n", media);
                } else {
                    printf("[!]Cadastre as notas primeiro\n");
                }
                break;
            case 3:
                // Determinar Status
                printf("[!] em desenvolvimento\n");
                break;
            case 4:
                printf("[+] Saindo\n");
                exit = 1;
                break;
            default:
                printf("[!] Opição Invalida\n");
                break;
        }

        printf("\n-----------------------------------------------\n\n");
    }
    
    return 0;
}