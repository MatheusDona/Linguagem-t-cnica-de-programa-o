#include <stdio.h>
#include <stdlib.h>

int main() {
    double temperatura;
    double resultado;
    int tipo;
    
    printf("\n--- EXERCÍCIO 2: CONVERSOR DINÂMICO DE TEMPERATURA ---\n");
    printf("Digite a temperatura: ");
    scanf("%lf", &temperatura);
    
    printf("Tipo: (1) Celsius para Fahrenheit ou (2) Fahrenheit para Celsius: ");
    scanf("%d", &tipo);
    
    if (tipo == 1) {
        resultado = (temperatura * 9.0 / 5.0) + 32.0;
        printf("%.2f°C = %.2f°F\n", temperatura, resultado);
    } else if (tipo == 2) {
        resultado = (temperatura - 32.0) * 5.0 / 9.0;
        printf("%.2f°F = %.2f°C\n", temperatura, resultado);
    }
    
    return 0;
}
