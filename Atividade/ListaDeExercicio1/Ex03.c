#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	
	return 0;
}
