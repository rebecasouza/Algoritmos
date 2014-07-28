/*
5. Escreva um algoritmo que leia n números e mostre o k-ésimo
menor. Faça uma análise do seu algoritmo.
*/


#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int t;
  t = *a; 
  *a = *b; 
  *b = t;
  
}

//recursive quick sort
void sort(int *numbers, int beg, int end) {
  int piv, l, r;

  if (end > beg + 1)   {
    piv = numbers[beg];
    l = beg + 1;
    r = end;
    while (l < r)
    {
      if (numbers[l] <= piv)
        l++;
      else
        swap(numbers[l], numbers[--r]);
    }
    
    swap(numbers[--l], numbers[beg]);
    sort(numbers, beg, l);
    sort(numbers, r, end);
  }
}

int main(int argc, char **argv) {

	int number, position, beg, end;
	int *numbers;

	printf("Digite a quantidade de numeros e o a do numero a ser encontrado:\n");
	scanf("%d %d", &numbers, &position);
	
	numbers = (int*) malloc(sizeof(int)*number);

	for (i = 0; i < number; i++) {
		scanf("%d", &numbers[i]);
	}

	beg = numbers[0];
	end = numbers[number];
	
	sort(numbers, beg, end);

	for (i = 0; i < number; i++) {
		printf("%d\n", &numbers[i]);
	}

	printf("%d\n", numbers[4]);

	free(numbers);

	return 0;
}