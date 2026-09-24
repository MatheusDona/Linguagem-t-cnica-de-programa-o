#include <stdio.h>
#include <stdlib.h>

double calcular_inss(double salario_bruto) {
    double inss = 0.0;
    
    if (salario_bruto <= 1412.0) {
        inss = salario_bruto * 0.075;
    } else if (salario_bruto <= 2666.68) {
        inss = salario_bruto * 0.09;
    } else if (salario_bruto <= 4000.03) {
        inss = salario_bruto * 0.12;
    } else {
        inss = salario_bruto * 0.14;
    }
    
    return inss;
}

int main() {
    double salario_bruto;
    double inss;
    
    printf("\n--- EXERCÍCIO 7: CÁLCULO DE INSS ---\n");
    printf("Digite o salário bruto: R$ ");
    scanf("%lf", &salario_bruto);
    
    inss = calcular_inss(salario_bruto);
    
    printf("\n========== RESULTADO ==========\n");
    printf("Salário Bruto: R$ %.2f\n", salario_bruto);
    printf("INSS: R$ %.2f\n", inss);
    
    return 0;
}
