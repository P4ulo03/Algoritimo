#include <stdio.h>

int main ()
{
	float num1, num2, num3, media;

	printf("digite um numero inteiro: ");
	scanf("%f", &num1);

	printf("digite outro numero: ");
	scanf("%f", &num2);

	printf("digite outro numero(esse e o ultimo eu juro): ");
	scanf("%f", &num3);

	media = (num1 + num2 + num3) / 3;
	printf("media:%.1f", media);

return 0;

}