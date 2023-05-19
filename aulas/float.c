#include <stdio.h>

int main (){
   
   float num1, num2, soma;
   
   printf("Digite um numero qualquer:");
   scanf("%f", &num1);
  
   printf("Digite um numero gostoso agr:");
   scanf("%f", &num2);
  
   soma = num1 + num2;
   printf("\n %f + %f = %f", num1, num2, soma);
   printf("\n %.1f + %.1f = %.1f", num1, num2, soma); // %.1f é uma casa decimal, %.2 duas casas decimal 
   printf("\n %.2f + %.2f = %.2f", num1, num2, soma);
   printf("\n %.3f + %.3f = %.3f", num1, num2, soma);
   printf("\n parabens! esse e a porcentagem de quanto o Felipe e broxa");
   
   
	return 0;
}