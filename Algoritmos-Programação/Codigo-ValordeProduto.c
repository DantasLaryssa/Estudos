#include <stdio.h>

int main() {
    int quantidade;
    float preco;

    printf("Digite a quantidade de produtos comprados: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    if (quantidade <= 10) {
        preco = quantidade * 10.0;
    } else {
        preco = quantidade * 8.0;
    }

    printf("Valor total da compra: R$ %.2f\n", preco);

    return 0;
}
