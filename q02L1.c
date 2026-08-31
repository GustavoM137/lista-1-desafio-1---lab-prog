#include <stdio.h>

int main() {
    float n;
    puts("Digite um número real:");
    scanf("%f", &n);

    puts("Número com apenas uma casa deicmal:");
    printf("%.1f", n);

    return 0;
}
