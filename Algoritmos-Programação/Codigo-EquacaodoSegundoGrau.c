#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    double a, b, c, delta, x1,x2;

    printf (" coloque o valor correspondente a A da equacao de segundo grau: \n");
    scanf ("%lf", &a);

    printf (" coloque o valor correspondente a B da equacao de segundo grau: \n");
    scanf ("%lf", &b);

    printf (" coloque o valor correspondente a C da equacao de segundo grau: \n");
    scanf ("%lf", &c);

    delta = (b*b)-4*a*c;

    printf ("delta %.2lf", delta);

    if (delta >= 0){
        x1 = (((-b)+sqrt(delta))/(2*a));
        x2 = (((-b)-sqrt(delta))/(2*a));
        printf ("\n as raizes da equacao de segundo grau sao: x1: %.2lf e x2: %.2lf", x1, x2);
    } else {
    printf ("nao existem raizes reais");
    }
    return 0;
}