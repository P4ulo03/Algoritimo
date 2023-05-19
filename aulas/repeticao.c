#include <stdint.h>

int main(){
	int i=1;

	//A primeira parte do for
	//É executada uma vez
	//A terceira parte do for
	//É executado todas as vezes que o for termina
	//A segunda parte do for
	//É executada dps da terceira parte termina
	//A segunda parte é o teste de repetição

    for ( i = 0 ; i <= 10 ; i++ )
    {
    	printf("%i ", i); 
    }
    printf("\n");
    for ( i = 3 ; i <= 10 ; i=i+2 )
    {
    	printf("%i ", i); 
    }
    
    printf("\n%i", i);
    
    return 0;

}
