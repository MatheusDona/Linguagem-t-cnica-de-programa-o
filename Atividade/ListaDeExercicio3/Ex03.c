#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    double nota1, nota2, nota3;
    double media;
    double falta_para_dez;
    
    printf("\n--- EXERCÍCIO 3: MÉDIA ESCOLAR ---\n");
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    
    printf("Digite a 1ª nota: ");
    scanf("%lf", &nota1);
    
    printf("Digite a 2ª nota: ");
    scanf("%lf", &nota2);
    
    printf("Digite a 3ª nota: ");
    scanf("%lf", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3.0;
    
    printf("\n========== RESULTADO ==========\n");
    printf("Aluno: %s\n", nome);
    printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Média: %.2f\n", media);
    
    if (media >= 7.0) {
        printf("Status: APROVADO\n");
    } else if (media >= 4.0) {
        falta_para_dez = 10.0 - media;
        printf("Status: EXAME\n");
        printf("Falta para atingir 10: %.2f\n", falta_para_dez);
    } else {
        printf("Status: REPROVADO\n");
    }
    
    return 0;
}
