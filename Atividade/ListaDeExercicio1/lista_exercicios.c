#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolha;
    
    printf("\n=== LISTA DE EXERCICIOS 01 ===\n");
    printf("1 - Dois números em ordem inversa\n");
    printf("2 - Notação científica\n");
    printf("3 - Conversão para binário\n");
    printf("4 - Cálculo de comissão\n");
    printf("5 - Soma, média e produtório\n");
    printf("6 - Conversão de dias\n");
    printf("7 - Volume da esfera\n");
    printf("8 - Distância euclidiana\n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &escolha);
    
    switch (escolha) {
        
        case 1: {
            printf("\n--- EXERCÍCIO 1 ---\n");
            int num1, num2;
            
            printf("Digite o primeiro número inteiro: ");
            scanf("%d", &num1);
            
            printf("Digite o segundo número inteiro: ");
            scanf("%d", &num2);
            
            printf("\nNúmeros em ordem inversa:\n");
            printf("%d\n", num2);
            printf("%d\n", num1);
            break;
        }
        
        case 2: {
            printf("\n--- EXERCÍCIO 2 ---\n");
            double valor;
            int expoente;
            double mantissa;
            
            printf("Digite um valor do tipo double: ");
            scanf("%lf", &valor);
            
            expoente = 0;
            mantissa = valor;
            
            if (valor >= 10.0) {
                if (valor >= 100.0) {
                    if (valor >= 1000.0) {
                        if (valor >= 10000.0) {
                            mantissa = valor / 10000.0;
                            expoente = 4;
                        } else {
                            mantissa = valor / 1000.0;
                            expoente = 3;
                        }
                    } else {
                        mantissa = valor / 100.0;
                        expoente = 2;
                    }
                } else {
                    mantissa = valor / 10.0;
                    expoente = 1;
                }
            } else if (valor < 1.0) {
                if (valor < 0.1) {
                    if (valor < 0.01) {
                        mantissa = valor * 100.0;
                        expoente = -2;
                    } else {
                        mantissa = valor * 10.0;
                        expoente = -1;
                    }
                }
            }
            
            printf("Notação científica: %.1f x 10^%d\n", mantissa, expoente);
            break;
        }
        
        case 3: {
            printf("\n--- EXERCÍCIO 3 ---\n");
            int n;
            
            printf("Digite um número n (0 <= n <= 64): ");
            scanf("%d", &n);
            
            if (n > 64) {
                printf("Erro: O número deve ser menor ou igual a 64\n");
            } else {
                printf("Valor em base binária: ");
                
                int b64 = (n >= 32) ? 1 : 0;
                if (b64) printf("1");
                
                int n32 = n - (b64 * 32);
                int b32 = (n32 >= 16) ? 1 : 0;
                printf("%d", b32);
                
                int n16 = n32 - (b32 * 16);
                int b16 = (n16 >= 8) ? 1 : 0;
                printf("%d", b16);
                
                int n8 = n16 - (b16 * 8);
                int b8 = (n8 >= 4) ? 1 : 0;
                printf("%d", b8);
                
                int n4 = n8 - (b8 * 4);
                int b4 = (n4 >= 2) ? 1 : 0;
                printf("%d", b4);
                
                int n2 = n4 - (b4 * 2);
                int b2 = (n2 >= 1) ? 1 : 0;
                printf("%d", b2);
                
                printf("\n");
            }
            break;
        }
        
        case 4: {
            printf("\n--- EXERCÍCIO 4 ---\n");
            double salario, vendas;
            double comissao, total;
            
            printf("Digite o salário fixo: R$ ");
            scanf("%lf", &salario);
            
            printf("Digite o valor total em vendas: R$ ");
            scanf("%lf", &vendas);
            
            comissao = vendas * 0.15;
            total = salario + comissao;
            
            printf("\nSalário fixo: R$ %.2f\n", salario);
            printf("Comissão (15%%): R$ %.2f\n", comissao);
            printf("Total a receber: R$ %.2f\n", total);
            break;
        }
        
        case 5: {
            printf("\n--- EXERCÍCIO 5 ---\n");
            double v1, v2, v3, v4;
            double soma, media, produtorio;
            
            printf("Digite o 1º valor: ");
            scanf("%lf", &v1);
            
            printf("Digite o 2º valor: ");
            scanf("%lf", &v2);
            
            printf("Digite o 3º valor: ");
            scanf("%lf", &v3);
            
            printf("Digite o 4º valor: ");
            scanf("%lf", &v4);
            
            soma = v1 + v2 + v3 + v4;
            media = soma / 4.0;
            produtorio = v1 * v2 * v3 * v4;
            
            printf("\n--- RESULTADOS ---\n");
            printf("Soma: %.2f\n", soma);
            printf("Média: %.2f\n", media);
            printf("Produtório: %.2f\n", produtorio);
            break;
        }
        
        case 6: {
            printf("\n--- EXERCÍCIO 6 ---\n");
            int dias;
            int anos, meses, dias_finais;
            int dias_restantes;
            
            printf("Digite a idade em dias: ");
            scanf("%d", &dias);
            
            anos = dias / 365;
            dias_restantes = dias - (anos * 365);
            meses = dias_restantes / 30;
            dias_finais = dias_restantes - (meses * 30);
            
            printf("\nIdade convertida:\n");
            printf("%d ano(s)\n", anos);
            printf("%d mês(es)\n", meses);
            printf("%d dia(s)\n", dias_finais);
            break;
        }
        
        case 7: {
            printf("\n--- EXERCÍCIO 7 ---\n");
            double raio;
            double raio_quad, raio_cubo;
            double volume;
            double PI = 3.14159;
            
            printf("Digite o raio da esfera (R): ");
            scanf("%lf", &raio);
            
            raio_quad = raio * raio;
            raio_cubo = raio_quad * raio;
            volume = (4.0 / 3.0) * PI * raio_cubo;
            
            printf("\nRaio: %.2f\n", raio);
            printf("Volume da esfera: %.2f\n", volume);
            break;
        }
        
        case 8: {
            printf("\n--- EXERCÍCIO 8 ---\n");
            double x1, y1, x2, y2;
            double dx, dy, dx_quad, dy_quad;
            double soma_quad;
            double distancia;
            
            printf("Digite as coordenadas do primeiro ponto p1(x1, y1):\n");
            printf("x1: ");
            scanf("%lf", &x1);
            printf("y1: ");
            scanf("%lf", &y1);
            
            printf("\nDigite as coordenadas do segundo ponto p2(x2, y2):\n");
            printf("x2: ");
            scanf("%lf", &x2);
            printf("y2: ");
            scanf("%lf", &y2);
            
            dx = x2 - x1;
            dy = y2 - y1;
            
            if (dx < 0) dx = dx * (-1);
            if (dy < 0) dy = dy * (-1);
            
            dx_quad = dx * dx;
            dy_quad = dy * dy;
            soma_quad = dx_quad + dy_quad;
            
            distancia = soma_quad;
            if (distancia > 0) {
                double aprox = distancia / 2.0;
                aprox = (aprox + distancia / aprox) / 2.0;
                aprox = (aprox + distancia / aprox) / 2.0;
                distancia = aprox;
            }
            
            printf("\nPonto 1: (%.2f, %.2f)\n", x1, y1);
            printf("Ponto 2: (%.2f, %.2f)\n", x2, y2);
            printf("Distância euclidiana: %.2f\n", distancia);
            break;
        }
        
        default: {
            printf("\nOpção inválida! Digite um número entre 1 e 8.\n");
        }
    }
    
    return 0;
}
