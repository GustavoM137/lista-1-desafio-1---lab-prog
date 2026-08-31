#include <stdio.h>

int main() {
    float altura;
    char sexo;

    do {
        puts("Digite a altura em metros:");
        scanf("%f", &altura);

        if (altura <= 0)
            puts("Altura inválida.");

    } while (altura <= 0);
    getchar();

    do {
        puts("Digite o sexo (H para homem e M para mulher):");
        scanf("%c", &sexo);

        if (sexo != 'H' && sexo != 'h' && sexo != 'M' && sexo != 'm') {
            getchar();
            puts("Sexo inváido.");
        }

    } while (sexo != 'H' && sexo != 'h' && sexo != 'M' && sexo != 'm');

    switch (sexo) {

        case 'H':
        case 'h':
            printf("Peso ideal: %.2fkg", 72.7 * altura - 58);
            break;

        case 'M':
        case 'm':
            printf("Peso ideal: %.2fkg", 62.1 * altura - 44.7);
            break;
    }

    return 0;
}
