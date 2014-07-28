/*
3. Escreva uma função que receba um número inteiro e retorne um array com
todos os número primos menores que o número passado como parâmetro. É
de responsabilidade da função criar o novo array. Segue a assinatura da
função:
	int * primos(int numero, int * quantidade);
*/

#include <stdio.h>
#include <stdlib.h>

int *primos(int numero, int *quantidade) {
	int i, j, d = 0, q = 0;
	int *p;

	p = (int*) malloc(sizeof(int)*((numero/2) + 1));

	for (i = 1; i < numero; i++) {
		d = 0;
		/*Se o número não for divisível por nenhum número diferente de 1 até a parte inteira de sua raiz, ele é primo*/
		for (j = 1; j <= ((i^(1/2)) + 1); j++) {
			if (i%j == 0) {
				d++;
			}
		}
		if (d == 2) {
			p[q] = i;
			q++;
		}
	} 		
	
	*quantidade = q;
	
	return p;
}

int main(int argc, char **argv) { 
	int numero, i;
	int *quantidade, *p;

	quantidade = (int*) malloc(sizeof(int));

	printf("Digite um número\n");
	scanf("%d", &numero);

	p = primos(numero, quantidade);

	printf("Há %d numeros primos menores que %d\n:", *quantidade, numero);
	for (i = 0; i < *quantidade; i++) {
			printf("%d\n", p[i]);
	}

	free(quantidade);
	free(p);
	return 0 ;
}
