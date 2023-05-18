#include <stdio.h>
#include <math.h>

int main (){

    int estoqueatual, estoquemaximo, estoqueminimo, mediaestoque;

    printf ("quantidade atual em estoque: \n" );
    scanf ("%d", &estoqueatual);

    printf ("quantidade maxima em estoque: \n" );
    scanf ("%d", &estoquemaximo);

    printf ("quantidade minima em estoque: \n" );
    scanf ("%d", &estoqueminimo);

    mediaestoque = ((estoquemaximo + estoqueminimo)/2);

    printf ("quantidade media de estoque: %.2d \n", mediaestoque );

    if (estoqueatual >= mediaestoque) {
    printf ("nao efetuar compra \n");} else{
       printf ("efetuar compra \n");
    }


    return 0;
}