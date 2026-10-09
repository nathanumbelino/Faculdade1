/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    long long int cpf;
    float preco, total_compra = 0.0;

    // 1. Leitura do CPF (apenas numeros)
    printf("Digite o CPF do cliente (apenas numeros): ");
    scanf("%lld", &cpf);

    printf("\n--- Registro de Produtos (Digite 0 para encerrar) ---\n");

    // 2. Loop de entrada dos produtos
    do {
        printf("Digite o valor do produto: R$ ");
        scanf("%f", &preco);

        if (preco > 0) {
            total_compra += preco;
        } else if (preco < 0) {
            printf("Valor invalido! O preco nao pode ser negativo.\n");
        }
        
    } while (preco != 0); // Encerra quando o valor for 0

    // 3. Apresentacao do resultado final
    printf("\n===================================\n");
    printf("Compra encerrada com sucesso!\n");
    printf("CPF do Cliente: %lld\n", cpf);
    printf("Valor Total da Compra: R$ %.2f\n", total_compra);
    printf("===================================\n");

    return 0;
}
