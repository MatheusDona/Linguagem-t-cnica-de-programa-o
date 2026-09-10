#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float reais, cotacao, dolares;

    printf("Digite o valor em reais (R$): ");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    dolares = reais / cotacao;

    printf("O valor correspondente em dolares é: $%.2f\n", dolares);
	
	return 0;
}
