#include <stdio.h>

int main() 
{
    int cafe;
    float preco, total;
    
    printf("quantos cafes voce deseja? ");
    scanf("%d", &cafe);
    printf("digite o valor do cafe: ");
    scanf("%f", &preco);
    total = preco*cafe;
    printf("o valor total da conta é R$%.2f.", total);
    return 0;
}
