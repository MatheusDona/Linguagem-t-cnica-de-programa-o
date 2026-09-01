#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, ant, suc;
	printf("Digite o valor n: ");
	scanf("%d", &n);
	suc = n+1;
	ant = n-1;
	printf("o numero %d, seu antecesor %d e seu sucessor %d", n, ant, suc);
	
	return 0;
}
