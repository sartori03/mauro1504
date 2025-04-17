#include <stdio.h>

int maior() {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);    
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main(void) {
    int result = maior();
    printf("Qual número é maior? %d", result);
}
