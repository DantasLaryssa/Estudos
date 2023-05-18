#include <stdio.h>
#include <math.h>

int main(){
    int numerodaconta;
    float saldo, debito, credito, saldoatual;

    printf ("informe o numero da conta do cliente: \n" );
    scanf ("%d", &numerodaconta);

    printf ("saldo: \n" );
    scanf ("%f", &saldo);

    printf ("debito: \n" );
    scanf ("%f", &debito);

    printf ("credito: \n" );
    scanf ("%f", &credito);

    saldoatual = saldo - debito + credito;
    printf ("saldo atual: %.2f \n", saldoatual );

    if (saldoatual >= 0) {
        printf ("saldo positivo");
    } else {
        printf ("saldo negativo");
    }
    return 0;
}