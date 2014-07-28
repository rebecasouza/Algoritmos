/*
1.
Escreva um programa que pergunte ao usuário um inteiro n, em seguida
crie um array com capacidade n, leia os n números e mostre a média dos
mesmos. 
OBS: Use alocação dinâmica para criar o array e libere a memória logo após
seu uso.
*/

#include <stdio.h>
#include <stdlib.h>


int average(int *numbers, int n) {
  int i, avg;

  for (i = 0; i < n ; i++) {
  	avg += numbers[i]/(i + 1);
  }

  return avg;
}

int main(int argc, char **argv) {
	int i, n;
	int *numbers;

	printf("Digite um numero\n");
	scanf("%d", &n);

	numbers = (int*) malloc(sizeof(int)*n);

	for(i = 0; i < n; i++) {
		numbers[i] = i+1;
	}

	printf("A média de todos os numeros de 1 até %d é %d\n", n, average(numbers,n));

	//não esqueçam!!!
	free(numbers);

	return 0;
}