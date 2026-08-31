#include <stdio.h>

int main() {
    int x;

    puts("Escreva um número inteiro:");
    scanf("%d", &x);

    printf("Hexadecimal: %X \nOctal: %o", x, x);

    return 0;
}
