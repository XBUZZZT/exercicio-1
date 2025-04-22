#include <stdio.h>

int main() {
  
    int a =10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Note q a divisão de inteiros resulta em um número inteiro
    
    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);

    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; //Divisão de ponto flutuante


    printf("Soma: %.2f\n", soma);
    printf("Diferenca: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("queciente: %.2f\n", quociente);

    return 0;

    }