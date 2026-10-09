#include <stdio.h>
#define PI 3.141

float raio,perimetro;
int main(void){
    printf("Digite o raio: ");
    scanf("%f", &raio);
    perimetro = PI * raio * 2;
    printf("Perimetro = %.2f\n", perimetro);
    return 0;
}