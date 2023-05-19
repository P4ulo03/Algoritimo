#include <stdio.h>

int main()
{
    int valor, n100, n50, n20, n10, n5, n2, n1;
    int resultado;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    n100 = valor % 100;
    printf("%d nota 100", n100);
    


    return 0;
}
