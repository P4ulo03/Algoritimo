#include <stdio.h>

int main()
{
    float grana, troco;

    printf("digite o valor que a patroa mandou de grana: ");
    scanf("%f", &grana);

	if(money >= 30){
        printf("UUUHUUULL, eu vou ver panico!!! ");
    troco = grana - 30; 

	    if(money >=60){
            printf("\nOPA, da pra comer a little popcorn e tomar um tang");
            troco = grana - 60;
	    }
	    
        else{
            if(money >= 40){
             printf("\nAH, vou comprar um chocolate com amendoim");  
                troco = grana - 40;
            }

        }
        
    }
    else{
        printf("VAI FICAR EM CASA SEU BETA!!!");
    }
    
            printf("\ntroco: %.1f", troco);
	
    return 0;
}
