#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Comprimentar e alertar sobre o uso de . e ,
    printf("Bom dia, tudo bem? gostaria de pedir que inserisse todos os valores usando . ao invés de ,\n");
    //Perguntar valor da compra
    float compra = get_float("Quanto ficou o total da sua compra? ");

    //Checar valor negativo
    if (compra < 0)
    {
        printf("Sua compra não tem como dar valor negativo, o mercado não vai ficar devendo você!\n");
        return 1;
    }

    //Perguntar quantia a ser paga
    float pago = get_float("Quanto será pago? ");

    //Verificar se foi pago mais do que gasto
    if (compra > pago)
    {
        printf("Foi pago um valor menor do que o quanto foi gasto, por favor, pague um valor maior ou igual a quanto foi gasto.\n");
        return 1;
    }

    //Definir troco
    float troco_exibido = pago - compra;
    int troco = round(troco_exibido * 100);

    //Criar contador
    int nota_200 = 0;
    int nota_100 = 0;
    int nota_50 = 0;
    int nota_20 = 0;
    int nota_10 = 0;
    int nota_5 = 0;
    int nota_2 = 0;
    int moeda_1_real = 0;
    int moeda_50_cents = 0;
    int moeda_25_cents = 0;
    int moeda_10_cents = 0;
    int moeda_5_cents = 0;
    int moeda_1_cent = 0;

    //loop para 200 reais
    while (troco >= 20000)
    {
        troco -= 20000;
        nota_200++;
    }

    //loop para 100 reais
    while (troco >= 10000)
    {
        troco -= 10000;
        nota_100++;
    }

    //loop para 50 reais
    while (troco >= 5000)
    {
        troco -= 5000;
        nota_50++;
    }

    //loop para 20 reais
    while (troco >= 2000)
    {
        troco -= 2000;
        nota_20++;
    }

    //loop para 10 reais
    while (troco >= 1000)
    {
        troco -= 1000;
        nota_10++;
    }

    //loop para 5 reais
    while (troco >= 500)
    {
        troco -= 500;
        nota_5++;
    }

    //loop para 2 reais
    while (troco >= 200)
    {
        troco -= 200;
        nota_2++;
    }

    //loop para 1 real
    while (troco >= 100)
    {
        troco -= 100;
        moeda_1_real++;
    }

    //loop para 50 centavos
    while (troco >= 50)
    {
        troco -= 50;
        moeda_50_cents++;
    }

    //loop para 25 centavos
    while (troco >= 25)
    {
        troco -= 25;
        moeda_25_cents++;
    }
    
    //loop para 10 centavos
    while (troco >= 10)
    {
        troco -= 10;
        moeda_10_cents++;
    }
    
    //loop para 5 centavos
    while (troco >= 5)
    {
        troco -= 5;
        moeda_5_cents++;
    }

    //loop para 1 centavo
    while (troco >= 1)
    {
        troco -= 1;
        moeda_1_cent++;
    }

    //Exibir valor do troco
    printf("O troco será de %.2f reais\n", troco_exibido);
    printf("Vou te entregar ele com:\n");

    //Exibir construção do troco
    if (nota_200 > 0)
    {
        printf("%i nota(s) de 200\n", nota_200);
    }

    if (nota_100 > 0)
    {
        printf("%i nota(s) de 100\n", nota_100);
    }

    if (nota_50 > 0)
    {
        printf("%i nota(s) de 50\n", nota_50);
    }

    if (nota_20 > 0)
    {
        printf("%i nota(s) de 20\n", nota_20);
    }

    if (nota_10 > 0)
    {
        printf("%i nota(s) de 10\n", nota_10);
    }

    if (nota_5 > 0)
    {
        printf("%i nota(s) de 5\n", nota_5);
    }

    if (nota_2 > 0)
    {
        printf("%i nota(s) de 2\n", nota_2);
    }

    if (moeda_1_real > 0)
    {
        printf("%i moeda(s) de 1 real\n", moeda_1_real);
    }
    
    if (moeda_50_cents > 0)
    {
        printf("%i moeda(s) de 50 centavos\n", moeda_50_cents);
    }

    if (moeda_25_cents > 0)
    {
        printf("%i moeda(s) de 25 centavos\n", moeda_25_cents);
    }

    if (moeda_10_cents > 0)
    {
        printf("%i moeda(s) de 10 centavos\n", moeda_10_cents);
    }

    if (moeda_5_cents > 0)
    {
        printf("%i moeda(s) de 5 centavos\n", moeda_5_cents);
    }

    if (moeda_1_cent > 0)
    {
        printf("%i moeda(s) de 1 centavo\n", moeda_1_cent);
    }

    return 0;
}