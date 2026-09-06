#include <stdio.h>

#define FILAS 5
#define LUGARES 9

void resetarmapa (char mapa[][LUGARES]);
void exibirmapa (char mapa[][LUGARES]);

int main(void) {
    char mapa[FILAS][LUGARES];

    resetarmapa(mapa);
    exibirmapa(mapa);

	return 0;
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

    printf("===== T E L A ======\n   ");

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
