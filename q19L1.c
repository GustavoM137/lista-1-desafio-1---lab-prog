#include <stdio.h>

int main() {
    int n;

    puts("Digite um inteiro:");
    scanf("%d", &n);

    switch (n & 1) {
        case 1:
            printf("%d é ímpar.", n);
            break;

        case 0:
            printf("%d é par.", n);
            break;
    }

    return 0;
}