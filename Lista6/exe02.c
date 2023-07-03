/*
2. Faça um programa em C, que receba do usuário os valores de um array (vetor) de 10 posições. Contar e escrever quantos valores pares ele possui. 
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
    int array[10];
    int i, qtdPares = 0;

    printf("Digite os elementos do array:\n");
    
    for (i = 0; i < 10; i++) {
    	
    	printf("Posição %d:", i+1);
        scanf("%d", &array[i]);
        
    }
    
    for (i = 0; i < 10; i++) {
        
        if (array[i] % 2 == 0) {
            qtdPares = qtdPares+1;
        }
    }

    printf("O array possui %d valores pares.\n", qtdPares);

    return 0;
}

