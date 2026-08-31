#include <stdio.h>

int main() {
    float raio, pi = 3.14159;

    do {
        puts("Digite o raio do círculo:");
        scanf("%f", &raio);

        if (raio <= 0)
            puts("Raio inválido.");

    } while (raio <= 0);

    printf("Diâmetro = %.2f u.c.\n", raio * 2);
    printf("Circunferência = %.2f u.c.\n", 2 * pi * raio);
    printf("Área = %.2f (u.c.)^2\n", pi * raio * raio);

    return 0;
}