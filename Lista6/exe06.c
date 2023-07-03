/*
6. Crie um programa em C,  que  leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrize lidas.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
    int matriz1[4][4];
    int matriz2[4][4];
    int matrizMaior[4][4];
    int i, j;

    printf("Digite os elementos da primeira matriz:\n");
    for ( i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
        	printf("Posição %d %d: ", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
        	printf("Posição %d %d: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            matrizMaior[i][j] = matriz1[i][j] > matriz2[i][j] ? matriz1[i][j] : matriz2[i][j];
        }
    }

    printf("A terceira matriz com os maiores valores de cada posição é:\n");
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            printf("%d ", matrizMaior[i][j]);
        }
        printf("\n");
    }

    return 0;
}

