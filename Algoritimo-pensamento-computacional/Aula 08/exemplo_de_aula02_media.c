/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main() {
	float valores[8];
	float soma = 0.0f, media;
	int acimaMedia = 0;
	int i = 0;

	for (i = 0; i < 8; i++) {
		printf("Digite o valor do %dº: ", i + 1);
		scanf("%f", &valores[i]);
		soma += valores[i];
	}

	media = soma / 8;

	for (i = 0; i < 8; i++) {
		if (valores[i] > media) {
			acimaMedia++;
		}
	}

	printf("\nSoma: %.2f\n", soma);
	printf("Média: %.2f\n", media);
	printf("Valores acima da média: %d\n", acimaMedia);

	return 0;
}
