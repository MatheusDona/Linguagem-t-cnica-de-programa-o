#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float g, r;
    float p = 3.141592;

    printf("Digite o angulo em graus: ");
    scanf("%f", &g);

    r = g * p / 180.0;

    printf("O angulo em radianos é: %.6f\n", r);
	
	return 0;
}
