#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double R, V;
    double pi = 3.14159;

    printf("Digite o raio: ");
	scanf("%lf", &R);

    V = (4.0 / 3.0) * pi * R * R * R;

    printf("VOLUME = %.3lf\n", V);

	return 0;
}
