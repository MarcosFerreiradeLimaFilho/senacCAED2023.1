/*
4. Crie um programa em C, que receba do usu�rio 6 valores inteiros que ser�o armazenados em um array(vetor) e, em seguida, mostre na tela os valores lidos na ordem inversa.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
    int array[6];
    int i;

    printf("Digite os elementos do array:\n");
    
    for (i = 0; i < 6; i++) {
    	
    	printf("Posi��o %d:", i+1);
        scanf("%d", &array[i]);
        
    }
    
    for (i = 5; i >= 0; i--){

        printf("%d ", array[i]);
    }


    return 0;
}

