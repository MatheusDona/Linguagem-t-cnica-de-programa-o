#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade, anoAtual, anoNascimento, anoNascimentoProx;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;
    anoNascimentoProx = anoAtual - idade - 1;

    printf("Seu ano de nascimento : %d ou : %d", anoNascimento, anoNascimentoProx);
	return 0;
}
