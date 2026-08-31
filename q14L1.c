#include <stdio.h>

int main() {
    int dias;
    float salario_bruto;

    do {
        puts("Digite o número de dias trabalhados:");
        scanf("%d", &dias);

        if (dias <= 0)
            puts("Número inválido.");

    } while (dias <= 0);

    if (dias <= 10)
        salario_bruto = dias * 50.25;

    else if (dias <= 20)
        salario_bruto = dias * 50.25 * 1.2;

    else
        salario_bruto = dias * 50.25 * 1.3;

    printf("Valor líquido a ser pago: R$ %.2f", salario_bruto * 0.9);

    return 0;
}