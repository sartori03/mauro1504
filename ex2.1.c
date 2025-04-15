// Online C compiler to run C program online
#include <stdio.h>

int scannumero() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int n = scannumero();
    printf("Número digitado: %d", n);
    return 0;
}
    