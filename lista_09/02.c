/*
2. Escreva uma função que retorne um ponteiro para uma área de memória
contendo uma lista de números inteiros. A função recebe como parâmetros
um inteiro e um ponteiro para inteiro e deve calcular os divisores do número
passado. A quantidade de divisores ela armazena no endereço apontado
pelo parâmetro ponteiro (int * quantidade) e os divisores ela deve colocar
numa área de memória alocada para tal. Segue abaixo a assinatura da
função:
int * divisores(int numero, int * quantidade);
*/

#include <stdio.h>
#include <stdlib.h>

int *divisores(int numero, int *quantidade) {
	int d = 0, i;
	int *divisors;

		divisors = (int*) malloc(sizeof(int)*((numero/2) + 1));
	 	
	 	for(i = 1; i <= numero; i++) {
	 		if (numero%i == 0) {
	 			divisors[d] = i;
	 			d++;
 	 		}
	 	}

 	*quantidade = d;

	return divisors;
}

int main(int argc, char **argv) {
	int numero, i;
	int *quantidade, *divisors;
	
	quantidade = (int*) malloc(sizeof(int));

	printf("Digite um número\n");
	scanf("%d", &numero);

	divisors = divisores(numero, quantidade);

 		
 	if (numero == 0) {
 		printf("0 tem infinitos divisores.\n");
 	}
 	else {
		printf("%d tem %d divisores:\n", numero, *quantidade);
		for (i = 0; i < *quantidade; i++) {
			printf("%d\n", divisors[i]);
		}
 	}

	free(quantidade);
	free(divisors);

	return 0;
}

