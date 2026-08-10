#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float base, altura, area;
	
	printf("Digite o valor da base: ");
	scanf("%f", &base);
	
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	
	area = base * altura / 2;
	
	printf("A area do triangulo: %.2f", area);	
	
	return 0;
}
