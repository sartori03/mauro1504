#include <stdio.h>

int menor() {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);    
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int main(void) {
    int result = menor();
    printf("Qual número é menor? %d", result);
}
