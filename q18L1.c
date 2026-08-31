#include <stdio.h>

int main() {
    int total_linhas;

    do {
        puts("Digite a quantidade de linhas (4 ou mais):");
        scanf("%d", &total_linhas);

        if (total_linhas < 4)
            puts("Quantidade inválida.");

    } while (total_linhas < 4);

    for (int i = 1; i <= total_linhas; i++) {

        // retangulo
        if (i == 1 || i == total_linhas) {
            for (int n = 1; n <= 8; n++)
                putchar('*');
        }

        else {
            putchar('*');
            for (int n = 1; n <= 6; n++)
                putchar(' ');
            putchar('*');
        }
        printf("    "); // espaço entre as figuras

        // elipse
        int i_elipse = (i <= (total_linhas + 1) / 2) ? i : (total_linhas + 1 - i);

        if (i_elipse == 1) {
            for (int n = 1; n <= 7; n++) {
                if (n == 3 || n == 4 || n == 5)
                    putchar('*');
                else
                    putchar(' ');
            }
        }

        else if (i_elipse == 2) {
            for (int n = 1; n <= 7; n++) {
                if (n == 2 || n == 6)
                    putchar('*');
                else
                    putchar(' ');
            }
        }

        else {
            for (int n = 1; n <= 7; n++) {
                if (n == 1 || n == 7)
                    putchar('*');
                else
                    putchar(' ');
            }
        }
        printf("    "); // espaço entre as figuras

        // seta
        if (i <= 3) {
            for (int n = 1; n <= (3 - i); n++)
                putchar(' ');
            for (int n = 1; n <= 2 * i - 1; n++)
                putchar('*');
            for (int n = 1; n <= (3 - i); n++)
                putchar(' ');
        }

        else {
            for (int n = 1; n <= 5; n++) {
                if (n == 3)
                    putchar('*');
                else
                    putchar(' ');
            }
        }
        printf("    "); // espaço entre as figuras

        // losango
        int i_losango = (i <= (total_linhas + 1) / 2) ? i : (total_linhas + 1 - i);

        for (int n = 1; n <= (total_linhas + 1) / 2 - i_losango; n++)
            putchar(' ');
        putchar('*');

        if (i_losango > 1) {
            for (int n = 1; n <= 2 * i_losango - 3; n++)
                putchar(' ');
            putchar('*');
        }
        putchar('\n'); // pular para a próxima linha
    }

    return 0;
}