#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    unsigned char pc = 0; // 0000 0000
    unsigned char faz_tudo;

    srand(time(NULL));

    do {
        puts("Disponibilidade de armários:");

        for (unsigned char i = 8; i > 0; i--) { // mostra a disponibilidade dos armários
            faz_tudo = i - 1;
            faz_tudo = (pc >> faz_tudo) & 1;
            printf("%hhu  ", faz_tudo);
        }

        puts("\nA7 A6 A5 A4 A3 A2 A1 A0");

        puts("\nEscolha uma das opções");
        puts("1: Ocupar armário.");
        puts("2: Liberar armário.");
        puts("3: Sair.");
        scanf("%hhu", &faz_tudo);

        switch (faz_tudo) {
            case 1:

                if (pc == 255) { // volta pras opções se os armários estiverem cheios
                    puts("\nArmários cheios, tente outra opção.\n");
                    faz_tudo = 0;
                    break;
                }

                do {
                    faz_tudo = rand() % 8;
                    faz_tudo = 1 << faz_tudo;
                } while (pc == (pc | faz_tudo)); // executa até escolher aleatoriamente um armário vazio

                pc = pc | faz_tudo; // ocupa o armário vazio
                faz_tudo = 0;
                break;

            case 2:

                if (pc == 0) { // volta pras opções se os armários estiverem vazios
                    puts("\nTodos os armários estão livres, escolha outra opção.\n");
                    faz_tudo = 0;
                    break;
                }

                do {
                    puts("\nQual armário liberar?\n");
                    scanf("%hhu", &faz_tudo);

                    while (faz_tudo > 7) { // recebe qual armário liberar até ser um valor válido
                        puts("\nArmário inválido, escolha um de 0 a 7.\n");
                        scanf("%hhu", &faz_tudo);
                    }

                    faz_tudo = 1 << faz_tudo;
                    faz_tudo = ~faz_tudo;

                    if (pc == (pc & faz_tudo)) {
                        puts("\nArmário já está livre.\n");
                    }
                } while (pc == (pc & faz_tudo)); // executa até um armário ocupado ficar vazio

                pc = pc & faz_tudo; // desocupa o armário
                faz_tudo = 0;
                break;

            case 3:
                return 0; // encerra o programa

            default:
                puts("\nOpção inválida.\n"); // mensagem de aviso e volta pras opções
                faz_tudo = 0;
        }
    } while (faz_tudo == 0);

    return 0;
}
