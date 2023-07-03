#include <stdio.h>

int main() {
    printf("Usando for:\n");
    for (int i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }

    return 0;
}

#include <stdio.h>

int main() {
    printf("Usando while:\n");
    int i = 0;
    while (i <= 100) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

#include <stdio.h>

int main() {
    printf("Usando do-while:\n");
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 100);

    return 0;
}

/*
a estrutura de repetição "for" é a mais adequada pois permite definir facilmente a condição de parada e o incremento em uma única linha.
*/
