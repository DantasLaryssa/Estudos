#include <stdio.h>
#include <math.h>

int main (){
    float salario, novosalario, reajuste;
    int percentual;

    printf ("coloque o salario do funcionario:");
    scanf ("%f", &salario);

    //calculo de reajuste de salario
    if (salario <=400.00){
        percentual = 15;
        } else if (salario<=800.00){
        percentual = 12;
        } else if (salario<=1200.00){
        percentual = 10;
        } else if (salario<=2000.00){
        percentual = 7;
        } else {
        percentual = 4;
        } 
        reajuste = salario * percentual/100;
        novosalario = salario + reajuste;
        printf ("\nnovo salario: %.2f", novosalario);
        printf ("\nreajuste: %.2f", reajuste);
        printf ("\npercentual: %d", percentual);
        
    return 0;
}