#include <stdio.h>

int main() {
    int a, b;

    puts("Digite dois inteiros:");
    scanf("%d %d", &a, &b);

    switch (b) {
        case 0:
            puts("Nenhum número além de 0 é múltiplo de zero.");
            break;

        default:
            switch (a % b) {
                case 0:
                    printf("%d é múltiplo de %d.\n", a, b);
                    break;

                default:
                    printf("%d não é múltiplo de %d.\n", a, b);
            }
    }

    return 0;
}