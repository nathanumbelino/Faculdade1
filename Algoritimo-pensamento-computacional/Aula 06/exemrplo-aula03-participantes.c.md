#include <stdio.h>

int main(void){
    int participantes; 
    
    do{
       printf("Digite o numero de participantes: ");
       scanf("%d", &participantes);
    }while(participantes < 1 || participantes > 3);
    
    printf("Equipe registrada com %d participantes. \n", participantes);
    
    return 0;
}