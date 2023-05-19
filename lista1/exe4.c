#include <stdio.h>

int main()
{
    float ano, dias;

    printf("digite seu ano de nascimento: ");
    scanf("%f", &ano);

    dias = (2023 - ano)* 365;
    printf("seus dias de vida e aproximadamente: %f", dias);

    return 0;

}