#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int n, resto;
	int bit64, bit32, bit16, bit8, bit4, bit2, bit1;
	
	printf("Digite n: ");
	scanf("%d", &n);
	
	bit64 = n % 2;
	resto = n / 2;
	bit32 = resto % 2;
	resto = resto / 2;
	bit16 = resto % 2;
	resto = resto / 2;
	bit8 = resto % 2;
	resto = resto / 2;
	bit4 = resto % 2;
	resto = resto / 2;
	bit2 = resto % 2;
	resto = resto / 2;
	bit1 = resto % 2;
	resto = resto / 2;
	
	printf("o Numero %d e em binario = %d %d %d %d %d %d %d", n, bit1, bit2, bit4, bit8, bit16, bit32, bit64);
	
	int d, x1,x2,y1,y2, cat1, cat2;
	printf("\nEscreva os valores de p1(x1,y1)\n");
	
	printf("x1: ");
	scanf("%d", &x1);
	
	printf("y1: ");
	scanf("%d", &y1);
	
	printf("\nEscreva os valores de p2(x2,y2)\n");
	
	printf("x2: ");
	scanf("%d", &x2);
	
	printf("y2: ");
	scanf("%d", &y2);
	
	printf("Leitura: (%d, %d)", x1, y1);
	printf("Leitura: (%d, %d)", x2, y2);
	
	cat1 = pow(x2-x1, 2);
	cat2 = pow(y2-y1, 2);
	
	d = sqrt(cat1 + cat2);
	
	printf("\no resultado e %d", d);
	
	return 0;
}
