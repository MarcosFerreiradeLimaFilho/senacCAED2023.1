/*
7. Faça um programa em C, para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, 
gere estes dados de modo a não ter números repetidos dentro da cartela. O programa deve exibir na tela a cartela gerada.
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int a[5][5], cont, i, j, c, l;

  srand(time(NULL));


    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            do{   
                cont=0;
                a[i][j]=rand()%99;

                for (l=0;l<5;l++){
                    for (c=0;c<5;c++){
                      if (a[i][j]==a[l][c] && (i!=l && j!=c)){
                      cont++;
                      }
                    }
                }
             } while(cont!=0);
        }
    }

                for (l=0;l<5;l++)
                {
                    for (c=0;c<5;c++)
                    {
                       printf(" \t %d ", a[l][c]);
                    }
                    printf("\n");
                }
    return 0;
}
