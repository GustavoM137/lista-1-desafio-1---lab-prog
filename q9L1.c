#include <stdio.h>

int main() {
    float c, l, h;

    do {
        puts("Digite o comprimento da caixa:");
        scanf("%f", &c);

        if (c <= 0)
            puts("Comprimento inválido.");

    } while (c <= 0);

    do {
        puts("Digite a largura da caixa:");
        scanf("%f", &l);

        if (l <= 0)
            puts("Largura inválida.");

    } while (l <= 0);

    do {
        puts("Digite a altura da caixa:");
        scanf("%f", &h);

        if (h <= 0)
            puts("Altura inválida.");

    } while (h <= 0);

    printf("Volume = %.2f u.v.", c * l * h);

    return 0;
}
