/*
scanf("") faz o usuario digitar o valor da variavel
*/


#include <stdio.h>

int main (){
   
   int num1, num2, soma;
   
   printf("Digite um valor sem virgula:");
   scanf("%i", &num1);
  
   printf("Digite um numero gostoso agr:");
   scanf("%i", &num2);
  
   soma = num1 + num2;
   printf("\n %i + %i = %i", num1, num2, soma);
   printf("\n parabens! esse e a porcentagem de quanto o Felipe e broxa");
   
   
	return 0;
}