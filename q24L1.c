#include <stdio.h>

int main() {
    int h, min, s;

    do {
        puts("Digite a quantidade total de segundos:");
        scanf("%d", &s);

        if (s < 0)
            puts("Quantidade inválida.");
    } while (s < 0);

    h = s / 3600;
    min = (s - h * 3600) / 60;
    s = s - h * 3600 - min * 60;

    printf("%dh %dmin %ds\n", h, min, s);

    return 0;
}