/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    int idade[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor da posição %d: ", i); 
        scanf("%d", &idade[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("O valor da posição %d: %d\n", i, idade[i]); 
    }

    return 0;
}


 
