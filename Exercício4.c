#include <stdio.h>

int main() {
    int X;
    printf("Digite um número inteiro: ");
    scanf("%d", &X);
    printf("Tabuada do %d:\n", X);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", X, i, X * i);
    }

    return 0;
}