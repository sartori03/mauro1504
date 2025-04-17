#include <stdio.h>

int igual() {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    if (x == y) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int result = igual();
    printf("Os números são iguais? %d", result);
}
