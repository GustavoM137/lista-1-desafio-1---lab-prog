#include <stdio.h>

int main() {
    int n, mod;

    puts("Digite um número inteiro:");
    scanf("%d", &n);

    mod = -n;

    switch (n > mod) {
        case 1:
            printf("|%d| = %d", n, n);
            break;

        case 0:
            printf("|%d| = %d", n, mod);
            break;
    }

    return 0;
}