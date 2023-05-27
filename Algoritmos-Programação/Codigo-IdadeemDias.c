#include <stdio.h>
#include <math.h>

int main (){
    int  idadedias, anos, meses, dias;

    printf ("digite os dias correspondentes a idade: \n");
    scanf ("%d", &idadedias);

    anos = (idadedias / 365);
    meses = (idadedias % 365)/30;
    dias = (idadedias % 365 % 30);

    printf ("\n %d anos, %d meses, %d dias", anos, meses, dias);


    return 0;
}