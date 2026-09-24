#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double v0, angulo_graus;
    double PI = 3.141592;
    double angulo_rad;
    double vx, vy;
    double tempo;
    double alcance;
    double altura;
    double g = 9.8;
    double tempo_total;
    
    printf("\n--- EXERCÍCIO 6: OPERAÇÃO ENIAC - TRAJETÓRIA ---\n");
    printf("Digite a velocidade inicial (m/s): ");
    scanf("%lf", &v0);
    
    printf("Digite o ângulo (graus): ");
    scanf("%lf", &angulo_graus);
    
    angulo_rad = angulo_graus * PI / 180.0;
    
    vx = v0 * cos(angulo_rad);
    vy = v0 * sin(angulo_rad);
    
    tempo = 0.0;
    alcance = 0.0;
    altura = 0.0;
    tempo_total = 0.0;
    
    while (altura >= 0.0 && tempo < 100.0) {
        altura = vy * tempo - (0.5 * g * tempo * tempo);
        
        if (altura < 0.0) {
            break;
        }
        
        alcance = vx * tempo;
        tempo_total = tempo;
        tempo = tempo + 0.01;
    }
    
    printf("\n========== RESULTADO ==========\n");
    printf("Velocidade Inicial: %.2f m/s\n", v0);
    printf("Ângulo: %.2f graus\n", angulo_graus);
    printf("Alcance Máximo: %.2f metros\n", alcance);
    printf("Tempo de Voo: %.2f segundos\n", tempo_total);
    
    return 0;
}
