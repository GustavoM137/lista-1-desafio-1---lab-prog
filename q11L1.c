#include <stdio.h>

int main() {
    int a, b;

    puts("Digite dois números:");
    scanf("%d %d", &a, &b);

    printf("Soma: %d", a + b);
    printf("Produto: %d", a * b);
    printf("Diferença: %d", a - b);

    if (b != 0) {
        printf("Quociente: %d", a / b);
        printf("Resto da divisão: %d", a % b);
    }

    else
        puts("Impossível dividir por 0.");

    return 0;
}