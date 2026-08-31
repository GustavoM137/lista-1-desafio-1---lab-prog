#include <stdio.h>

int main() {
    float valor;

    do {
        puts("Digite o valor da conta de restaurante:");
        scanf("%f", &valor);

        if (valor <= 0)
            puts("Valor inválido.");

    } while (valor <= 0);

    printf("Valor total a ser pago: R$ %.2f\n", valor * 1.1);

    return 0;
}
