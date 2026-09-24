#include <stdio.h>
#include <stdlib.h>

double calcular_irpf(double salario_base) {
    double irpf = 0.0;
    
    if (salario_base <= 2259.20) {
        irpf = 0.0;
    } else if (salario_base <= 2826.65) {
        irpf = (salario_base * 0.075) - 169.44;
    } else if (salario_base <= 3751.05) {
        irpf = (salario_base * 0.15) - 381.44;
    } else if (salario_base <= 4664.68) {
        irpf = (salario_base * 0.225) - 662.77;
    } else {
        irpf = (salario_base * 0.275) - 896.00;
    }
    
    return irpf;
}

int main() {
    double salario_base;
    double irpf;
    
    printf("\n--- EXERCÍCIO 8: CÁLCULO DE IRPF ---\n");
    printf("Digite o salário-base (Bruto - INSS): R$ ");
    scanf("%lf", &salario_base);
    
    irpf = calcular_irpf(salario_base);
    
    printf("\n========== RESULTADO ==========\n");
    printf("Salário-Base: R$ %.2f\n", salario_base);
    printf("IRPF: R$ %.2f\n", irpf);
    
    return 0;
}
