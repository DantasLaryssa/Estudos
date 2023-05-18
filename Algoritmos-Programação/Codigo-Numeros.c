#include <stdio.h>
#include <math.h>

int main (){
    int i, numero, soma;
    soma=0;
    i=0;

    while (i <10){
        printf ("insira um numero: \n" );
        scanf ("%d", &numero);
        if (numero <40){
            soma+= numero; 
        }
         i++;
    } 
printf ("valor da soma final: %d\n", soma);

    return 0;
}