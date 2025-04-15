// Online C compiler to run C program online
#include <stdio.h>

int scannumero() {
    int n;
    int n1;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("Digite outro número: ");
    scanf("%d", &n1);
    return n + n1;
}

int main() {
    int r = scannumero();
    printf("Soma: %d", r);
    return 0;
}
    