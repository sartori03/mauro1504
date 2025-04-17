#include <stdio.h>
#include "igualdade.h"

int recebe() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    return num;
}

int main(void) {
    int n1, n2, n3;
    int x, y;
    n1 = recebe();
    n2 = recebe();
    n3 = recebe();
    
    x = maior(n1, n2);
    y = maior(x, n3);
    
    printf("Maior número digitado: %d", y);
}