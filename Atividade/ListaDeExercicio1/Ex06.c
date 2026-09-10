#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade, anos, meses, dias;

    printf("Digite sua idade: ");
	scanf("%d", &idade);

    anos = idade / 365;
    idade = idade % 365;

    meses = idade / 30;
    dias = idade % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
	
	return 0;
}
