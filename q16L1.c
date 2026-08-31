#include <stdio.h>

int main() {
    int n;

    puts("Digite um número inteiro:");
    scanf("%d", &n);

    switch (n > -n) {
        case 1:
            printf("|%d| = %d", n, n);
            break;

        case 0:
            printf("|%d| = %d", n, -n);
            break;
    }

    return 0;
}