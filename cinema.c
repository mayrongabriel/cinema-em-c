#include <stdio.h>

#define FILAS 5
#define LUGARES 9

int menu(void);
void resetarmapa (char mapa[][LUGARES]);
void exibirmapa (char mapa[][LUGARES]);

int main(void) {
    char mapa[FILAS][LUGARES];
    int opcao;
    resetarmapa(mapa);

    do {
        opcao = menu();

        switch (opcao) {
			case 1:
				exibirmapa(mapa);
				printf("\n");
				break;
			case 2:
				printf("\nEM DESENVOLVIMENTO\n\n");
				break;
			case 3:
				printf("\nEM DESENVOLVIMENTO\n\n");
				break;
			case 4:
				printf("\nEM DESENVOLVIMENTO\n\n");
				break;
			case 5:
				printf("\nEM DESENVOLVIMENTO\n\n");
				break;
			case 6:
				printf("\nEM DESENVOLVIMENTO\n\n");
				break;
			case 7:
				printf("\nEM DESENVOLVIMENTO\n\n");
				break;
			default:
				printf("\nESCOLHA INVALIDA. TENTE NOVAMENTE.\n\n");
		}
	} while (opcao != 0);

	return 0;
}

int menu(void) {
    int escolha;

    printf("1. Exibir mapa da sala\n");
    printf("2. Vender poltrona escolhida\n");
    printf("3. Venda rapida (primeira poltrona livre)\n");
    printf("4. Cancelar venda\n");
    printf("5. Marcar / liberar manutencao\n");
    printf("6. Relatorio\n");
    printf("7. Registrar final\n");
    printf("0. Sair\n");

    scanf("%d", &escolha);

    return escolha;
}

void resetarmapa (char mapa[][LUGARES]) {
    int i, j;

	for (i = 0; i < FILAS; i++) {
        for (j = 0; j < LUGARES; j++) {
            mapa[i][j] = 'L';
        }
    }

    mapa[0][6] = 'M';
    mapa[2][1] = 'M';
    mapa[4][7] = 'M';
}

void exibirmapa (char mapa[][LUGARES]) {
	int i, j;

    printf("\n===== T E L A ======\n   ");

    for (i = 0; i < LUGARES; i++){
        printf("%d ", i + 1);
    }
	printf("\n");

    for (i = 0; i < FILAS; i++) {
        printf("%c: ", 'A' + i);
        for (j = 0; j < LUGARES; j++) {
            printf("%c ", mapa[i][j]);
        }
    printf("\n");
    }
    printf("\nL = Livre\nX = Ocupado\nM = Manuntencao\n====================\n");
}