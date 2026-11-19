#include <stdio.h>

void bubbleSort(int vetor[], int tamanho);

void exibirVetor(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("[%d] ", vetor[i]);
    }

    printf("\n");
}

/*-------------------------------------*/
int main(void)
{
    int idades[3] = {21, 24, 18};
    int tamanho = 3;

    exibirVetor(idades, tamanho);
    bubbleSort(idades, tamanho);
    exibirVetor(idades, tamanho);

    /*-------------------------------------*/

    int senhas[5] = {35, 12, 28, 7, 19};
    tamanho = 5;

    printf("Senhas antes: \n");
    exibirVetor(senhas, tamanho);

    printf("Senhas depois da ordenação: \n");
    bubbleSort(senhas, tamanho);
    exibirVetor(senhas, tamanho);

    return 0;
}

void bubbleSort(int vetor[], int tamanho)
{
    int i, j, auxiliar;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - 1 - i; j++)
        {
            if (vetor[j] > vetor[j + 1]) {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

/*-------------------------------------*/