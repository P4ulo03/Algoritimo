#include <stdio.h>

int main()
{
    float num1;
  
    printf("digite uma valor inteiro: ");
    scanf("%f", &num1);

    if (num1 >= 0)
    {
        printf("nao negativo");
    }
    else
    {
        printf("negativo");
    }
    
   

    return 0;
}
