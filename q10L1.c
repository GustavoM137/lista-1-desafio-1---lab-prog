#include <stdio.h>

int main() {
    float real, cotacao;

    do {
        puts("Digite a quantidade de reais para converter em dólar:");
        scanf("%f", &real);

        if (real <= 0)
            puts("Quantidade inválida.");

    } while (real <= 0);

    do {
        puts("Digite a cotação do dólar:");
        scanf("%f", &cotacao);

        if (cotacao <= 0)
            puts("Cotação inválida.");

    } while (cotacao <= 0);

    printf("R$ %.2f = $ %.2f", real, real / cotacao);

    return 0;
}
