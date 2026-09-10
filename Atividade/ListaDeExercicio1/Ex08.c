#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double x1, y1, x2, y2;
    double distancia;

    printf("Digite o (x1 y1): ");
	scanf("%lf %lf", &x1, &y1);
	printf("Digite o (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(
        (x2 - x1) * (x2 - x1) +
        (y2 - y1) * (y2 - y1)
    );

    printf("%.4lf\n", distancia);
	return 0;
}
