#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float aut, t, Vm, d, L;
	
	printf("Digite o tempo gasto na viagem em horas: ");
	scanf("%f", &t);
	
	printf("Digite a velocidade media em (Km/h): ");
	scanf("%f", &Vm);
	
	aut = 12;
	
	d = t * Vm;
	
	L = d / aut;
	
	printf("O total gasto vai ser de %.3fL", L);
	
	return 0;
}
