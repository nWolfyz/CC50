#include <stdio.h>

// Função que recebe dois números inteiros por valor e retorna a soma deles
int soma_por_valor(int a, int b) {
    return a + b;
}

// Função que recebe dois números inteiros por referência (usando ponteiros) e retorna a soma deles
int soma_por_referencia(int *a, int *b) {
    return *a + *b;
}

int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    // Usando a função que passa parâmetros por valor
    int resultado_valor = soma_por_valor(num1, num2);
    printf("Soma por valor: %d\n", resultado_valor);

    // Usando a função que passa parâmetros por referência
    int resultado_referencia = soma_por_referencia(&num1, &num2);
    printf("Soma por referência: %d\n", resultado_referencia);

    return 0;
}