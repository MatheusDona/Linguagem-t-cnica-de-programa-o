#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num[100], i, j, temp;
	
	for(i=0; i<100;i++) {
		printf("Digite o numero %d: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("\nOrden inversa\n");
	
	for(i=99; i>=0; i--) {
		printf("\nNumero %d: %d",i+1, num[i]);
	}
	
	for(i=0; i<100; i++) {
		for(j=i; j<100; j++) {
			if(num[i] < num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	printf("\nOrdem descrecente\n");
	
	for(i=0; i<100; i++) {
		printf("\nNumero %d: %d", i+1, num[i]);
	}
	
	return 0;
}
