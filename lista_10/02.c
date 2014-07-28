/*
Escreva um algoritmo que encontre o maior elemento de array e N
elementos. Encontre a equação do tempo de execução do algoritmo*/

#include <stdio.h>

int maiorElemento(int n, int a[]){
	int i, maior; 
	maior = a[0]; /*1 atribuição, 1 busca*/
	for(i = 1; i < n; i++){ /*1 atribuição n vezes, 1 comparação n vezes, 1 atribuição e 1 soma n-1 vezes*/
		if(a[i] > maior){ /*1 busca, 1 comparação n-1 vezes*/
			maior = a[i]; /*1 atribuição, 1busca n-1 vezes*/
		}
	}
	return maior; 
}
/*
1 + 1 + 2n + 2(n-1) + 2(n-1) + 2(n-1) + 1
2 + 2n + 6(n-1) + 1
3 + 2n + 6n -6
8n - 3
O(n)
*/

