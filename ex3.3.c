#include <stdio.h>
#include "util.h"

int main(void) {
    double raio;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    double dia = diametro(raio);
    printf("Diametro: %.2lf\n", dia);

    double circ = circunferencia(raio);
    printf("Circunferencia: %.2lf\n", circ);

    double ar = area(raio);
    printf("Area: %.2lf\n", ar);

    return 0;
}
