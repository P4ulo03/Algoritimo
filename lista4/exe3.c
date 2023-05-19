#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura); 

    if (imc < 18.5)
    {
        printf("Abaixo do Peso");
    }
    
    else if(18.5 <= imc && imc < 25)
    {
        printf("Peso Ideal");
    }

    else if(25 < imc && imc < 30)
    {
        printf("Sobrepeso");
    }

    else if (30.0 <= imc && imc < 35)
    {
        printf("Obesidade Grau I");
    }
    
    else if (35.0 <= imc && imc < 40)
    {
        printf("Obesidade Grau II");
    }
    
    else
    {
        printf("Obesidade Grau III ");
    }
    

    return 0;
}
