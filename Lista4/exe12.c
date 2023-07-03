#include <stdio.h>

int main() {
    int n;
    unsigned long long int fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %llu\n", n, fatorial);

    return 0;
}

