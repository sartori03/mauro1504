#include <stdio.h>

double diametro() {
    double raio, d;
    printf("Digite o raio: ");
    scanf("%lf", &raio);

    return d = 2*raio;

}

int main() {
    int res = diametro();
    printf("O diâmetro é: %d", res);
    return 0;
}
    
