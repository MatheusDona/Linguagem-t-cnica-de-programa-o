#include <stdio.h>
#include <stdlib.h>
#define pi 3.141597

int main(int argc, char *argv[]) {
	float r, area;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	
	area = pi * (r*r);
	
	printf("A area do circulo de raio R %.2f = %.2f", r, area);
	
	return 0;
}
