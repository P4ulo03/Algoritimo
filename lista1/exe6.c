#include <stdio.h>

int main()
{
    float num1, num2, area; 
    printf("digite um valor para a base: ");
    scanf("%f", &num1);

    printf("digite um valor para a altura: ");
    scanf("%f", &num2);

    area = (num1 * num2) / 2;
    printf("a area do triangulo sera: %.1f", area); 

    return 0;

}