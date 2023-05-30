#include <stdio.h>
int main ()
{
	float  fahrenheit, celsius;
    
	printf ("digite uma temperatura em Fahrenheit : ");
	scanf ("%f", &fahrenheit);
	 	
	celsius = ( fahrenheit - 32)*5/9;	
	printf ("celsius: %.2f", celsius);
	
	return 0;
}
