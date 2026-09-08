#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
	int soma, resto, digito1, digito2;
	
	printf("Digite seu cpf(sem pontos): ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
	
	soma = n1 * 10 + n2 * 9 + n3 * 8 + n4 * 7 + n5 * 6 + n6 * 5 + n7 * 4 + n8 * 3 + n9 * 2;
	resto = soma % 11;
	
	if(resto < 2) {
		digito1 = 0;
	} else{
		digito1 = 11 - resto;
	}
	
	soma = n1 * 11 + n2 * 10 + n3 * 9 + n4 * 8 + n5 * 7 + n6 * 6 + n7 * 5 + n8 * 4 + n9 * 3 + digito1 * 2;
	resto = soma % 11;
	
	if(resto < 2) {
		digito2 = 0;
	} else{
		digito2 = 11 - resto;
	}
	
	if(digito1 == n10 && digito2 == n11) {
		printf("CPF valido");
	} else {
		printf("CPF invalido");
	}
	
	return 0;
}
