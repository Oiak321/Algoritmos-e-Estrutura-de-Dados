#include <stdio.h>

int main() {
    float n1, n2, R;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); 
    switch (operador) {
        case '+':
            R = n1 + n2;
            printf("Resultado: %.2f\n", R);
            break;
        case '-':
            R = n1 - n2;
            printf("Resultado: %.2f\n", R);
            break;
        case '*':
            R = n1 * n2;
            printf("Resultado: %.2f\n", R);
            break;
        case '/':
            if (n2 != 0) {
                R = n1 / n2;
                printf("Resultado: %.2f\n", R);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}