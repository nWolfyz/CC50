#include <cs50.h>
#include <stdio.h>

int main()
{
    int anos = 0;
    long pop_inicial, pop_final;
    
    // Solicitar os dois valores
    do
    {
        pop_inicial = get_long("Digite a população inicial (maior que 9): ");
        pop_final = get_long("Digite a população final (igual ou maior que a inicial): ");
    } while (pop_inicial < 9 || pop_final < pop_inicial);

    // loop para calcular o número de anos
    while (pop_inicial < pop_final)
    {
        pop_inicial += (pop_inicial / 3) - (pop_inicial / 4);
        anos++;
    }

    printf("Para a população chegar ao esperado levará %i anos.\n", anos);
}