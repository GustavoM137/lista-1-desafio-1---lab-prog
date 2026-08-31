#include <stdio.h>

int main() {
    float hora_aula, horas_trabalhadas, percentual_INSS;

    do {
        puts("Digite o valor da hora aula em reais:");
        scanf("%f", &hora_aula);

        if (hora_aula <= 0)
            puts("Valor inválido.");

    } while (hora_aula <= 0);

    do {
        puts("Digite o número de horas trabalhadas no mês:");
        scanf("%f", &horas_trabalhadas);

        if (horas_trabalhadas <= 0)
            puts("Número inválido.");

    } while (horas_trabalhadas <= 0);

    do {
        puts("Digite o percentual de desconto do INSS (Ex: 7.5):");
        scanf("%f", &percentual_INSS);

        if (percentual_INSS <= 0 || percentual_INSS >= 100)
            puts("Percentual inválido.");

    } while (percentual_INSS <= 0 || percentual_INSS >= 100);

    float salario_bruto = hora_aula * horas_trabalhadas;
    float salario_liquido = salario_bruto * (100 - percentual_INSS) / 100;

    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}