#include <stdio.h>

int main() {
    float n1, n2, n3, M;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    M = (n1 + n2 + n3) / 3;
    printf("Média: %.2f\n", M);

    if (M >= 7) {
        printf("Aprovado\n");
    } else if (M >= 5 && M < 7) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}