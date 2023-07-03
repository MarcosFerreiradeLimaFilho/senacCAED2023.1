#include <stdio.h>

void gerarTriangulo(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < 2 * n - 1; j++) {
            if (j >= n - 1 - i && j <= n - 1 + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &n);

    gerarTriangulo(n);

    return 0;
}

