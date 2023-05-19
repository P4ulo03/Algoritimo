/*
codigo de formatação do printf
 %i - int, é substituido pelo valor dps da ,
*/  

#include <stdio.h>

int main (){
    printf("soma 4 + 4 = 8");
    printf("\nsoma 4 + 4 = %i", 4+4);
    printf("\n%i * %i = %i", 7,3,7 * 3);
    
	return 0;
}