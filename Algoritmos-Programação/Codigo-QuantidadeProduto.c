#include <stdio.h>
#include <math.h>

int main (){
    int quantidadedeproduto;
    float precounitario, total, desconto, totalapagar;

    printf ("quantidade adquirida de um produto: \n" );
    scanf ("%d", &quantidadedeproduto);

    printf ("preco unitario: \n" );
    scanf ("%f", &precounitario);

    total = (quantidadedeproduto * precounitario);
    printf ("total: %.2f \n", total );

    if (quantidadedeproduto <=5 ){
        desconto = (total * 0.02);
        printf ("desconto: %.2f \n", desconto );
    } else if (quantidadedeproduto <=10 ){
        desconto = (total * 0.03);
        printf ("desconto: %.2f \n", desconto );
    } else {
        desconto = (total * 0.05);
        printf ("desconto: %.2f \n", desconto );
    } totalapagar = (total - desconto);
         printf ("total a pagar: %.2f \n", totalapagar );

    return 0;
}