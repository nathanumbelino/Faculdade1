#include <stdio.h>

float media, frequencia;

int main(void){
    
    printf("Digite sua frequência: ");
    scanf("%f", &frequencia);
    
    printf("Digite a média: ");
    scanf("%f", &media);
    
    if(frequencia < 75.0){
        printf("Reprovado por falta. \n");
        
    } else {
        if(media >= 6){
            printf("Você foi aprovado :) \n");
        } else {
            printf("Reprovado por media");
        }
    }
    
    return 0;
}