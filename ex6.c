#include <stdio.h>

int recebe() {
    int n[0];
    printf("Digite um número: ");
    scanf("%d", &n[0]);
    return n[0];
}

int main(void) {
    int n = recebe();
    printf("Número digitado: %d", n);
}