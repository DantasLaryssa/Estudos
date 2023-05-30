#include <stdio.h>
int main ()
{
	char letra;
	printf("digite uma letra:");
	scanf( " %c" ,&letra);
	
	if ( letra == 'a'|| letra =='e' ||letra == 'i' ||letra == 'o'|| letra =='u'){
		printf(" %c e uma vogal", letra);
	}else {
		printf(" %c e uma cosoante", letra);
	}
	
	return 0;
}
