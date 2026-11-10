#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int notas[10];
    int i, num;

    printf("Cadastre as notas dos alunos:\n");

    for(i = 0; i < 10; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    printf("\nQual nota deseja ver? (Numero do aluno): ");
    scanf("%d", &num);

    if(num >= 1 && num <= 10) {
        printf("Nota do aluno %d: %d\n", num, notas[num - 1]);
    } else {
        printf("Numero de aluno invalido!\n");
    }

    return 0;
}
