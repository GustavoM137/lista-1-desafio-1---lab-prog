#include <stdio.h>

int main() {
    int a, b;

    puts("Digite os valores de A e B:");
    scanf("%d %d", &a, &b);

    puts("Antes da troca:");
    printf("A: %d B: %d", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    puts("\nDepois da troca:");
    printf("A: %d B: %d", a, b);

    return 0;
}