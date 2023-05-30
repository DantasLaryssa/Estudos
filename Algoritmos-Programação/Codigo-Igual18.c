
#include <stdio.h>
int main ()
{
	int idade, i, pessoas=0;
	for (i=0; i<10; i++) {
	 	printf (" digite uma idade: ");
	 	scanf ("%d", &idade);
	    if (idade >=18){
	    	pessoas++;
	    }	

	} printf (" pessoas maiores ou iguais a 18: %d", pessoas);
	
	return 0;
}
