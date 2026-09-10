#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
	double numero, A;
    int N;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    N = (int)floor(log10(numero));
    A = numero / pow(10, N);

    printf("%.2lf x 10^%d\n", A, N);

	return 0;
}
