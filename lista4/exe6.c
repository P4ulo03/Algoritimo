#include <stdio.h>

int main()
{
    float num1, num2,operacao, resultado;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    printf("Digite agora uma operacao (1 para adicao, 2 para subtracao, 3 para multiplicacao, 4 para divisao): ");
    scanf("%f", &operacao);

    if (operacao == 1){
        resultado = num1 + num2;
    }
        else{
         if (operacao == 2){
            resultado = num1 - num2;
            }
                if (operacao == 3){
                resultado = num1 * num2;
                }
                    if (operacao = 4){
                    resultado = num1 / num2;
                    }
        }
                printf("O valor da conta foi: %.1f", resultado);
                    else
                    {
                        printf("Foi informada uma operacao invalida, tente novamente");
                    }

    return 0;
}
