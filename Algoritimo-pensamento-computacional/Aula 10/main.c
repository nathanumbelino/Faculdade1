/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void exibirNotas(float notas[], int tamanho) {
    int i;

    
    for (i = 0; i < tamanho; i++) {
        printf("%.1f ", notas[i]);
    }

    printf("\n");
}

void ordenarNotas(float notas[], int tamanho) {
    int i, j;
    float aux;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {

            if (notas[j] < notas[j + 1]) {
                aux = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = aux;
            }

        }
    }
}

int main() {
    float notas[5] = {6.5, 9.0, 7.5, 5.0, 8.0};

    printf("Notas na ordem original:\n");
    exibirNotas(notas, 5);

    ordenarNotas(notas, 5);

    printf("\nNotas em ordem decrescente:\n");
    exibirNotas(notas, 5);

    return 0;
}