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
    char nome_func[50];
    double valor_hora;
    double horas_mes;
    double salario_bruto;
    double inss;
    double salario_base;
    double irpf;
    double salario_liquido;
    
    printf("\n--- EXERCÍCIO 9: EMISSÃO DE CONTRA-CHEQUE ---\n");
    printf("Digite o nome do funcionário: ");
    scanf("%s", nome_func);
    
    printf("Digite o valor da hora trabalhada: R$ ");
    scanf("%lf", &valor_hora);
    
    printf("Digite a quantidade de horas no mês: ");
    scanf("%lf", &horas_mes);
    
    salario_bruto = valor_hora * horas_mes;
    inss = calcular_inss(salario_bruto);
    salario_base = salario_bruto - inss;
    irpf = calcular_irpf(salario_base);
    salario_liquido = salario_base - irpf;
    
    printf("\n");
    printf("========================================\n");
    printf("           CONTRA-CHEQUE MENSAL\n");
    printf("========================================\n");
    printf("Funcionário: %s\n", nome_func);
    printf("Valor/Hora: R$ %.2f\n", valor_hora);
    printf("Horas/Mês: %.2f\n", horas_mes);
    printf("----------------------------------------\n");
    printf("PROVENTOS\n");
    printf("Salário Bruto: R$ %.2f\n", salario_bruto);
    printf("----------------------------------------\n");
    printf("DESCONTOS\n");
    printf("INSS: R$ %.2f\n", inss);
    printf("IRPF: R$ %.2f\n", irpf);
    printf("----------------------------------------\n");
    printf("RESULTADO\n");
    printf("Salário Líquido: R$ %.2f\n", salario_liquido);
    printf("========================================\n");
    
    return 0;
}
