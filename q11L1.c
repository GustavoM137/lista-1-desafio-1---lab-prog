#include <stdio.h>

int main() {
    int a, b;

    puts("Digite dois números:");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Produto: %d\n", a * b);
    printf("Diferença: %d\n", a - b);

    if (b != 0) {
        printf("Quociente: %d\n", a / b);
        printf("Resto da divisão: %d\n", a % b);
    }

    else
        puts("Impossível dividir por 0.");

    return 0;
}
