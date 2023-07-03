#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("%d primeiros números naturais ímpares:\n", N);
    int count = 0;
    int i = 1;
    while (count < N) {
        if (i % 2 != 0) {
            printf("%d\n", i);
            count++;
        }
        i++;
    }

    return 0;
}

