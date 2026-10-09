#include <stdio.h>
#define PI 3.141

int main() 
{
  float raio, perimetro;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    perimetro = 2 * PI * raio;
    printf("o perimetro = %.2f\n", perimetro);
    return 0;
}
