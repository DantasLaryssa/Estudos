#include <stdio.h>
#include <math.h>

int main (){

float salarioatual, reajuste, novosalario;
printf ("digite o salario mensal atual do funcionario: \n" );
scanf ("%f", &salarioatual);

printf ("digite o percentual de reajuste: \n" );
scanf ("%f", &reajuste);

novosalario = salarioatual + (salarioatual * reajuste / 100);
printf ("o novo salario e: %.2f \n", novosalario);

    return 0;
}