/*
3. Fa�a um programa em C, que receba do usu�rio os valores de um array (vetor) com 10 posi��es. Em seguida dever� ser impresso o maior e o menor elemento do array.
*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
    int array[10];
    int maiorElemento, menorElemento, i;

    printf("Digite os elementos do array:\n");
    
    for (i = 0; i < 10; i++) {
    	
    	printf("Posi��o %d: ", i+1);
        scanf("%d", &array[i]);
        
    }
    
    maiorElemento = INT_MIN;
    menorElemento = INT_MAX;
    
    for(i = 0; i < 10; i++){
    	
    	if (array[i] > maiorElemento) {
    		
            maiorElemento = array[i];
        }
        if (array[i] < menorElemento) {
        	
                menorElemento = array[i];

        }
	}

    printf("O maior elemento do array �: %d\n", maiorElemento);
    printf("O menor elemento do array �: %d\n", menorElemento);

    return 0;
}

