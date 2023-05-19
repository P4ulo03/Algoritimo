#include <stdio.h>

int main()
{
    float num1, num2, num3, maior;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    printf("Digite um numero (esse e o ultimo eu prometo): ");
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3){
        maior = num1;  
    }
    else{
        if (num2 >= num3){
            maior = num2;
        } 
        else{
                maior = num3;
        }  
    }
    printf("O maior numero e: %.1f", maior);

    return 0;
}
