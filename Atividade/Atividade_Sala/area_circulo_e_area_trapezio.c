#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	float r, area_circulo;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	
	area_circulo = pi * (r*r);
	
	printf("A area do circulo de raio R %.2f = %.2f", r, area_circulo);
	
	float area_trapezio, base_maior, base_menor, altura;
	
	printf("\nDigite a base maior: ");
	scanf("%f", &base_maior);
	
	printf("Digite a base menor: ");
	scanf("%f", &base_menor);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	area_trapezio = ((base_maior + base_menor) * altura) / 2;
	
	printf("A area do trapezio e = %.2f", area_trapezio);
	
	return 0;
}
