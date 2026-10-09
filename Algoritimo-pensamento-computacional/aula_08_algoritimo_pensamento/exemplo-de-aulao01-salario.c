/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int main() {
    float salario[4];
    int i = 0;

 
    for (i = 0; i < 4; i++) {
        printf("Digite o salário do %dº funcionário: ", i + 1);
        scanf("%f", &salario[i]);
    }

  
    for (i = 0; i < 4; i++) {
        printf("O funcionário %d: R$ %.2f\n", i + 1, salario[i]);
    }

    return 0;
}

