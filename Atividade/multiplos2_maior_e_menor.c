#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a,b;
	
	printf("Escreva 2 numeros: ");
	scanf("%d %d", &a, &b);
	
	
	if(a>0 && b>0) {
		if(a%2 == 0) {
			if(b%2 == 0) {
				printf("Sao multiplos de 2");
			} else {
				printf("Nao sao multiplos de 2");
			}
		}
	} else {
		if(a>b) {
			printf("%d eh maior que &d", a ,b);
		} else {
			printf("%d eh maior que %d", b,a);
		}
	}
	
	return 0;
}
