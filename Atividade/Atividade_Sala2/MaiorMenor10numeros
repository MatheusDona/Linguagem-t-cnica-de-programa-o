#include <stdio.h>

int comparar(int a, int b) {
	if(a < b)return b;
	else return a;
}

int compararMenor(int a, int b) {
	if(a < b)return a;
	else return b;
}

int main() {
	int i, maior, menor;
	int valores[10];
	
	printf("Vamos ler 10 valores: \n");
	
	for(i=0;i<10; i++) {
		scanf("%d", &valores[i]);
	}
	printf("\n");
	
	maior = valores[0];
	for(i=1; i<5; i+=2) {
		int maior_temp = comparar(valores[i], valores[i+1]);
		maior = comparar(maior_temp, maior);
	}
	
	menor = valores[5];
	for(i=6; i<9 ; i+=2) {
		int maior_temp = compararMenor(valores[i], valores[i+1]);
		menor = compararMenor(maior_temp, menor);
	}
	
	printf("\n");
	printf("Maior |%d|", maior);
	
	printf("\n");
	printf("Menor |%d|", menor);

	return 0;
}
