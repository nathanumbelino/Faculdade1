#include <stdio.h>

int main(void) {
    int numero, i;

    printf("Digite o numero da tabuada: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}