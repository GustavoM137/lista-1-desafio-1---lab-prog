#include <stdio.h>

int main() {
    float c;

    do {
        puts("Digite a temperatura em graus Celsius:");
        scanf("%f", &c);

        if (c < 273.15)
            puts("Temperatura inválida:");

    } while (c < 273.15);

    printf("Temperatura em fahrenheint: %.2f", (9 * c + 160) / 5);

    return 0;
}