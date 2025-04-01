#include <stdio.h>

int main() {
    int N;
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);
    printf("Números pares entre 1 e %d:\n", N);
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

