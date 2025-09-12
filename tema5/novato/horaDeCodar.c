#include <stdio.h>

int main() {
    int index;

    char * nomesAlunos[3][3] = {
        {"Aluno 1", "Pt: 30", "Mat: 90"},
        {"Aluno 2", "Pt: 60", "Mat: 60"},
        {"Aluno 3", "Pt: 90", "Mat: 30"}
    };

    printf("\nEscolha o aluno para ver a nota...\n");
    printf("[1] Aluno 1\n");
    printf("[2] Aluno 2\n");
    printf("[3] Aluno 3\n");
    printf("Numero do Aluno: ");
    scanf("%d", &index);

    printf("\n--------------------------------------\n\n");

    if (index > 0 && index <= 3) {
        printf("As notas do %s\n", nomesAlunos[index - 1][0]);
        printf("%s\n", nomesAlunos[index - 1][1]);
        printf("%s\n", nomesAlunos[index - 1][2]);
    } else {
        printf("[!]Aluno N°%d não foi cadastrado", index);
    }

    printf("\n");
    return 0;
}