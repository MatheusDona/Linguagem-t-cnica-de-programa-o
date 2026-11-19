#include <stdio.h>
#include <math.h>

int main() {
    double x1[10], y1[10];
    double x2[10], y2[10];
    double distancia;
    int i;

    for(i = 0; i < 10; i++) {
        printf("\nPonto P1 - Digite X: ");
        scanf("%lf", &x1[i]);

        printf("Ponto P1 - Digite Y: ");
        scanf("%lf", &y1[i]);

        printf("Ponto P2 - Digite X: ");
        scanf("%lf", &x2[i]);

        printf("Ponto P2 - Digite Y: ");
        scanf("%lf", &y2[i]);
    }

    for(i = 0; i < 10; i++) {
        distancia = sqrt(
            pow(x2[i] - x1[i], 2) +
            pow(y2[i] - y1[i], 2)
        );

        printf("\nDistancia entre os pontos %d: %.2lf\n",
               i + 1, distancia);
    }

    return 0;
}
