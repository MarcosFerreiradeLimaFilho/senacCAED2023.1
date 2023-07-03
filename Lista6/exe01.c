/*
1. Faça um programa em C, que leia um array (vetor) de 8 posições e, em seguida, leia também dois valores X e Y quaisquer 
correspondentes a duas posições no vetor. Ao final seu programa devera escrever a soma dos valores encontrados nas respectivas posições X e Y . 
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
    int array[8];
    int x, y, i;

    printf("Digite os elementos do array:\n");
    
    for (i = 0; i < 8; i++) {
    	
    	printf("Posição %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Digite os valores de X e Y:\n");
    
    printf("x: ");
    scanf("%d", &x);
    
    printf("y: ");
    scanf("%d", &y);

    

	if(x >= 0 && x <8 && y >= 0 && y < 8){
	
		int soma = array[x] + array[y];	
		printf("A soma dos valores nas posições X e Y é: %d\n", soma);
		
	} else {
		
		printf("Posições inválidas.\n");
	}
    

    return 0;
}

