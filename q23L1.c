#include <stdio.h>

int main() {
    unsigned x, n;

    puts("Digite dois números inteiros:");
    scanf("%u %u", &x, &n);

    printf("%u * 2^%u = %u", x, n, x << n);

    return 0;
}