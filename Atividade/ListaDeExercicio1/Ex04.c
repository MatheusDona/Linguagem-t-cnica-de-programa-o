#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double salario, vendas, total;

    printf("Digite seu salario: ")
	scanf("%lf", &salario);
    printf("Digite suas vendas: ")
	scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);
	
	return 0;
}
