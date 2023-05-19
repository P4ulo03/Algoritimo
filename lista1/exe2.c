#include <stdio.h>

int main()
{
    float num1, num2, media;
    
    printf("digite um numero: ");
    scanf("%f", &num1);

    printf("digite um segundo numero: ");
    scanf("%f", &num2);

    media = (num1 + num2) / 2;
    printf("sua media sera: %.1f", media);

    return 0; 

}