#include <stdio.h>

int main(){
    int rgm;
    float nota1, nota2, media;
    printf("digite o rgm: ");
    scanf("%d", &rgm);
    printf("digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) /2;
    printf("o estudante de rgm %d tem a media de %.2f\n", rgm, media);
    return 0;
}

