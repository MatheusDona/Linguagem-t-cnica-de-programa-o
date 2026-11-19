#include <stdio.h>

int main() {
    double numero, mantissa;
    int expoente = 0;

	printf("Digite um numero: ");
    scanf("%lf", &numero);

    mantissa = numero;

    while(mantissa >= 10) {
        mantissa = mantissa / 10;
        expoente++;
    }

    while(mantissa < 1 && mantissa > 0) {
        mantissa = mantissa * 10;
        expoente--;
    }

    printf("%.2lf x 10^%d", mantissa, expoente);

    return 0;
}
