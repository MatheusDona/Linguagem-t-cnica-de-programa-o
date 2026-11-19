#include <stdio.h>

int main() {
    int numero, binario[7];
    int i;

	printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 0; i < 7; i++) {
        binario[i] = numero % 2;
        numero = numero / 2;
    }

    for(i = 6; i >= 0; i--) {
        printf("%d", binario[i]);
    }

    return 0;
}
