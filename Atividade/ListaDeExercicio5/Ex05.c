#include <stdio.h>

int paridade(int numero) {
    if(numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int primo(int numero) {
    int i;

    if(numero < 2) {
        return 0;
    }

    for(i = 2; i < numero; i++) {
        if(numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int numeros[100];
    int i;

    for(i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 100; i++) {
        printf("\nNumero %d: ", numeros[i]);

        if(paridade(numeros[i])) {
            printf("Par");
        } else {
            printf("Impar");
        }

        if(primo(numeros[i])) {
            printf(" e Primo");
        } else {
            printf(" e Nao primo");
        }
    }

    return 0;
}
