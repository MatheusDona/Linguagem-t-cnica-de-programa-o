#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior(int a, int b) {
	return (a + b + abs(a - b)) / 2;
}

int main(int argc, char *argv[]) {
	int num[10], i, maior_valor;
	
	for(i=0; i<10; i++) {
		printf("Digite o numero %d: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0, maior_valor = num[i]; i<10; i++) {
		maior_valor = maior(maior_valor, num[i]);
	}
	
	printf("%d eh o maior", maior_valor);
	return 0;
}
