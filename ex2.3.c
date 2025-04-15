#include <stdio.h>

void ResultSoma(int soma) {
    printf("O resultado da soma é: %d\n", soma);
}

int main() {
    int num;
    printf("Digite um valor de soma: ");
    scanf("%d", &num);
    ResultSoma(num);
    return 0;
}