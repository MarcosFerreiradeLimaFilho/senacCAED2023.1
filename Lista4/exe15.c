#include <stdio.h>

int main() {
    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    printf("M�ltiplos de 3 e 5 no intervalo de 1 a %d:\n", num);

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

