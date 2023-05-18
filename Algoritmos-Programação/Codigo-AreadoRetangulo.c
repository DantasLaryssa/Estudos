#include <stdio.h>
#include <math.h>
 int main (){
    float base, altura, area;

    printf ("digite a base do retangulo: \n" );
    scanf ("%f", &base);
    
    printf ("digite a altura do retangulo: \n" );
    scanf ("%f", &altura);

    area = base * altura;
    printf ("a area do retangulo e: %2.f\n" , area);

  
    return 0;
 }