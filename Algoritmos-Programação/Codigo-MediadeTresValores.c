#include <stdio.h>
#include <math.h>

int main () {
    int numero1, numero2, numero3;
    float media;
    printf ("digite o primeiro valor: \n");
    scanf ("%d", &numero1);

    printf ("digite o segundo valor: \n");
    scanf ("%d", &numero2); 

    printf ("digite o terceiro valor: \n");
    scanf ("%d", &numero3);

 // calculando a media dos valores:
    media = (numero1 + numero2 + numero3) / 3.0;
    printf ("a media desses valores e: %.2f\n", media);

    return 0;
}