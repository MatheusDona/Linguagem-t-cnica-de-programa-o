#include <stdio.h>
#include <stdlib.h>

int main() {
    double valor;
    int notas_100, notas_50, notas_10, notas_5, notas_2, notas_1;
    double restante;
    
    printf("\n--- EXERCÍCIO 5: TERMINAL INFINITY CASH ---\n");
    printf("Digite o valor a sacar: R$ ");
    scanf("%lf", &valor);
    
    notas_100 = (int)valor / 100;
    restante = valor - (notas_100 * 100);
    
    notas_50 = (int)restante / 50;
    restante = restante - (notas_50 * 50);
    
    notas_10 = (int)restante / 10;
    restante = restante - (notas_10 * 10);
    
    notas_5 = (int)restante / 5;
    restante = restante - (notas_5 * 5);
    
    notas_2 = (int)restante / 2;
    restante = restante - (notas_2 * 2);
    
    notas_1 = (int)restante;
    
    printf("\n========== RESUMO DO SAQUE ==========\n");
    printf("Notas de 100: %d\n", notas_100);
    printf("Notas de 50: %d\n", notas_50);
    printf("Notas de 10: %d\n", notas_10);
    printf("Notas de 5: %d\n", notas_5);
    printf("Notas de 2: %d\n", notas_2);
    printf("Notas de 1: %d\n", notas_1);
    printf("Total: R$ %.2f\n", valor);
    
    return 0;
}
