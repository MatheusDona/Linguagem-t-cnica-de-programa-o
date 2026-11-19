#include <stdio.h>

int main() {
    int numeros[100];
    int i, encontrou = 0;

    for(i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros consecutivos encontrados:\n");

    for(i = 0; i < 99; i++) {
        if(numeros[i] + 1 == numeros[i + 1]) {
            printf("%d e %d\n", numeros[i], numeros[i + 1]);
            encontrou = 1;
        } else if(numeros[i] - 1 == numeros[i + 1]) {
            printf("%d e %d\n", numeros[i], numeros[i + 1]);
            encontrou = 1;
        }
    }

    if(encontrou == 0) {
        printf("Nenhum numero consecutivo encontrado");
    }

    return 0;
}
