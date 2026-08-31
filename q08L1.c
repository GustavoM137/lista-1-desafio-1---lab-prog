#include <stdio.h>

int main() {
    int n;

    puts("Digite um inteiro:");
    scanf("%d", &n);

    printf("Sucessor de %d: %d\n", n, n + 1);
    printf("Antecessor de %d: %d\n", n, n - 1);

    return 0;
}
