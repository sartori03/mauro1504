#include <stdio.h>

double area() {
    double raio, a;
    printf("Digite o raio: ");
    scanf("%lf", &raio);

    return a = 3.14 * raio * raio; 
}

int main() {
    double res = area();
    printf("A área é: %lf", res);
    return 0;
}
    
