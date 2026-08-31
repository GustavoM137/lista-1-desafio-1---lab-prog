#include <stdio.h>

int main() {
    float h, min, s;

    do {
        puts("Digite a quantidade de horas:");
        scanf("%f", &h);

        if (h < 0)
            puts("Quantidade de horas inválida.");

    } while (h < 0);

    do {
        puts("Digite a quantidade de minutos:");
        scanf("%f", &min);

        if (min < 0)
            puts("Quantidade de minutos inválida.");

    } while (min < 0);

    do {
        puts("Digite a quantidade de segundos:");
        scanf("%f", &s);

        if (s < 0)
            puts("Quantidade de segundos inválida.");

    } while (s < 0);

    printf("Total de segundos: %.2f", h * 60 * 60 + min * 60 + s);

    return 0;
}
