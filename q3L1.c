#include <stdio.h>

int main() {
    int x;

    puts("Digite um valor inteiro:");
    scanf("%d", &x);

    printf("Triplo: %d // Quadrado: %d // Meio: %.1f\n", 3 * x, x * x, (float)x / 2);
    return 0;
}