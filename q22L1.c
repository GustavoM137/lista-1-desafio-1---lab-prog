#include <stdio.h>

int main() {
    unsigned abc, a, b, c;

    do {
        puts("Digite um inteiro positivo de 3 dígitos:");
        scanf("%u", &abc);

        if (abc < 100 || abc > 999)
            puts("Inteiro inválido.");
    } while (abc < 100 || abc > 999);

    a = abc / 100;
    b = (abc / 10) % 10;
    c = abc % 10;

    printf("Número: %u\n", abc);
    printf("Número invertido: %03u\n", 100 * c + 10 * b + a);

    return 0;
}