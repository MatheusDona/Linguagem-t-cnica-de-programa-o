#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float k, m;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &k);

    m = k / 3.6;

    printf("A velocidade em m/s é: %.2f\n", m);
	
	return 0;
}
