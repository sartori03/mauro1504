#include <stdio.h>
#include "igualdade.h"

int main(void) {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    
    int i = igual(x, y);   
    printf("Iguais: %d\n", i);

    int ma = maior(x, y);
    printf("Maior: %d\n", ma);

    int me = menor(x, y);
    printf("Menor: %d\n", me);

    return 0;
}
