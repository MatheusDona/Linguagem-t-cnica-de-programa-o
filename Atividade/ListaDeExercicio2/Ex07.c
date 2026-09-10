#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float total = 780000.00;
    float primeiro, segundo, terceiro;

    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - (primeiro + segundo);

    printf("Primeiro ganhador (46%%): R$ %.2f\n", primeiro);
    printf("Segundo ganhador (32%%): R$ %.2f\n", segundo);
    printf("Terceiro ganhador (restante): R$ %.2f\n", terceiro);
	
	return 0;
}
