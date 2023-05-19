#include <stdio.h>

int main()
{
    int ano, dias;

    printf("digite seu ano de nascimento: ");
    scanf("%i", &ano);

    dias = (2023 - ano)* 365;
    printf("seus dias de vida e aproximadamente: %i", dias);

    return 0;

}