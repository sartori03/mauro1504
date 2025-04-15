#include <stdio.h>

double circunferencia() {
    double raio, c;
    printf("Digite o raio: ");
    scanf("%lf", &raio);

    return c = 2 * 3.14 * raio;
}

int main() {
    double res = circunferencia();
    printf("A circunferência é: %lf", res);
    return 0;
}
    
