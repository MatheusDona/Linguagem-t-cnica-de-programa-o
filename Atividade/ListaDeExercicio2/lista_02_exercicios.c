#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolha;
    
    printf("\n=== EXERCÍCIOS DE FIXAÇÃO II - ENTRADA E SAÍDA ===\n");
    printf("1 - Ano de nascimento\n");
    printf("2 - Conversão de km/h para m/s\n");
    printf("3 - Conversão de reais para dólares\n");
    printf("4 - Conversão de Celsius para Fahrenheit\n");
    printf("5 - Conversão de graus para radianos\n");
    printf("6 - Antecessor e sucessor\n");
    printf("7 - Divisão de prêmio\n");
    printf("8 - Conversão de segundos para horas:minutos:segundos\n");
    printf("9 - Cálculo de combustível gasto\n");
    printf("10 - Maior de três valores\n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &escolha);
    
    switch (escolha) {
        
        case 1: {
            printf("\n--- EXERCÍCIO 1 ---\n");
            int idade, ano_atual;
            int ano_nascimento;
            
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            
            printf("Digite o ano atual: ");
            scanf("%d", &ano_atual);
            
            ano_nascimento = ano_atual - idade;
            
            printf("Ano de nascimento: %d\n", ano_nascimento);
            break;
        }
        

        case 2: {
            printf("\n--- EXERCÍCIO 2 ---\n");
            double velocidade_kmh;
            double velocidade_ms;
            
            printf("Digite a velocidade em km/h: ");
            scanf("%lf", &velocidade_kmh);
            
            velocidade_ms = velocidade_kmh / 36.0;
            
            printf("Velocidade em m/s: %.2f\n", velocidade_ms);
            break;
        }
        

        case 3: {
            printf("\n--- EXERCÍCIO 3 ---\n");
            double reais;
            double cotacao_dolar;
            double dolares;
            
            printf("Digite o valor em reais: R$ ");
            scanf("%lf", &reais);
            
            printf("Digite a cotação do dólar: ");
            scanf("%lf", &cotacao_dolar);
            
            dolares = reais / cotacao_dolar;
            
            printf("Valor em dólares: $ %.2f\n", dolares);
            break;
        }
        

        case 4: {
            printf("\n--- EXERCÍCIO 4 ---\n");
            double celsius;
            double fahrenheit;
            
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &celsius);
            
            fahrenheit = celsius * (9.0 / 5.0) + 32.0;
            
            printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
            break;
        }
        

        case 5: {
            printf("\n--- EXERCÍCIO 5 ---\n");
            double graus;
            double radianos;
            double PI = 3.141592;
            
            printf("Digite o ângulo em graus: ");
            scanf("%lf", &graus);
            
            radianos = graus * PI / 180.0;
            
            printf("Ângulo em radianos: %.6f\n", radianos);
            break;
        }
        

        case 6: {
            printf("\n--- EXERCÍCIO 6 ---\n");
            int numero;
            int antecessor, sucessor;
            
            printf("Digite um número inteiro: ");
            scanf("%d", &numero);
            
            antecessor = numero - 1;
            sucessor = numero + 1;
            
            printf("Antecessor: %d\n", antecessor);
            printf("Número: %d\n", numero);
            printf("Sucessor: %d\n", sucessor);
            break;
        }
        

        case 7: {
            printf("\n--- EXERCÍCIO 7 ---\n");
            double total = 780000.0;
            double primeiro, segundo, terceiro;
            
            primeiro = total * 0.46;
            segundo = total * 0.32;
            terceiro = total - primeiro - segundo;
            
            printf("Prêmio total: R$ %.2f\n", total);
            printf("Primeiro ganhador (46%%): R$ %.2f\n", primeiro);
            printf("Segundo ganhador (32%%): R$ %.2f\n", segundo);
            printf("Terceiro ganhador (restante): R$ %.2f\n", terceiro);
            break;
        }
        

        case 8: {
            printf("\n--- EXERCÍCIO 8 ---\n");
            int segundos_total;
            int horas, minutos, segundos;
            
            printf("Digite o tempo em segundos: ");
            scanf("%d", &segundos_total);
            
            horas = segundos_total / 3600;
            minutos = (segundos_total % 3600) / 60;
            segundos = segundos_total % 60;
            
            printf("Tempo: %d:%d:%d\n", horas, minutos, segundos);
            break;
        }
        

        case 9: {
            printf("\n--- EXERCÍCIO 9 ---\n");
            double tempo_horas;
            double velocidade_kmh;
            double distancia;
            double combustivel;
            double consumo = 12.0;
            
            printf("Digite o tempo gasto na viagem (em horas): ");
            scanf("%lf", &tempo_horas);
            
            printf("Digite a velocidade média (em km/h): ");
            scanf("%lf", &velocidade_kmh);
            
            distancia = tempo_horas * velocidade_kmh;
            combustivel = distancia / consumo;
            
            printf("Distância percorrida: %.2f km\n", distancia);
            printf("Combustível gasto: %.3f litros\n", combustivel);
            break;
        }
        

        case 10: {
            printf("\n--- EXERCÍCIO 10 ---\n");
            double a, b, c;
            double maior_ab, maior_final;
            
            printf("Digite o primeiro valor: ");
            scanf("%lf", &a);
            
            printf("Digite o segundo valor: ");
            scanf("%lf", &b);
            
            printf("Digite o terceiro valor: ");
            scanf("%lf", &c);
            
            if (a >= b) {
                maior_ab = a - b;
            } else {
                maior_ab = b - a;
            }
            
            if (a >= b) {
                maior_ab = a;
            } else {
                maior_ab = b;
            }
            
            if (maior_ab >= c) {
                maior_final = maior_ab;
            } else {
                maior_final = c;
            }
            
            printf("%lf eh o maior\n", maior_final);
            break;
        }
        
        default: {
            printf("\nOpção inválida! Digite um número entre 1 e 10.\n");
        }
    }
    
    return 0;
}
