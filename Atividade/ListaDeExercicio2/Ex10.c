#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c, maior, maior_temp;
	
	printf("Digite tes valores para identificar o maior: ");
	scanf("%d %d %d", &a, &b, &c);
	
	maior_temp = ( (a + b + abs(a - b) ) / 2 );
	
	maior = ( (maior_temp + c + abs(maior_temp - c) ) / 2 );
	
	printf("O maior numero dentre %d, %d, %d e = %d", a, b , c, maior);
	
	return 0;
}
