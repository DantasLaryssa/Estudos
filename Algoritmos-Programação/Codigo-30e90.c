#include <stdio.h>
int main ()
{
	int contador = 0;
	int numero;
	int soma = 0;
	
	
	while (contador < 10) {
		printf("numero:");
		scanf("%d" ,&numero);
		
	
	    if (numero >=30 && numero <=90) {
		soma +=numero;

	    }
	    contador++;
	
    }
	printf("a soma e: %d", soma);
	return 0;
}
