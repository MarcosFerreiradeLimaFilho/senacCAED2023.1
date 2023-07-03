/*
1. Fa�a um programa em C, que leia um array (vetor) de 8 posi��es e, em seguida, leia tamb�m dois valores X e Y quaisquer 
correspondentes a duas posi��es no vetor. Ao final seu programa devera escrever a soma dos valores encontrados nas respectivas posi��es X e Y . 
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
    int array[8];
    int x, y, i;

    printf("Digite os elementos do array:\n");
    
    for (i = 0; i < 8; i++) {
    	
    	printf("Posi��o %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Digite os valores de X e Y:\n");
    
    printf("x: ");
    scanf("%d", &x);
    
    printf("y: ");
    scanf("%d", &y);

    

	if(x >= 0 && x <8 && y >= 0 && y < 8){
	
		int soma = array[x] + array[y];	
		printf("A soma dos valores nas posi��es X e Y �: %d\n", soma);
		
	} else {
		
		printf("Posi��es inv�lidas.\n");
	}
    

    return 0;
}

