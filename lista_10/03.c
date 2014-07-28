/*
3.
Considere os algoritmos de cálculo de MDC abaixo:
Algo1
	Algoritmo mdc(a,b): inteiro
		Entrada:
			inteiros a e b
		Saída:
			inteiro contendo mdc
		Declare:
			Inteiros menor, m, i
		INÍCIO
			menor ← a
			Se (b < a) então
				menor ← b
			Fim se
			m ← 1
		Para i de 2 até menor
			Se (a%i=0 E b%i=0) então
				m ← i
			Fim se
		Fim para
		Retorne m
	FIM


Algo2
	Algoritmo mdc(a,b): inteiro
		Entrada:
			inteiros a e b
		Saída:
			inteiro contendo mdc
		Declare:
			Inteiros aux, resto
		INÍCIO
			Se (a < b) então
				aux ← b
				b ← a
				a ← aux
			Fim se
			resto ← a % b
            Enquanto (resto <> 0)
				a ← b
				b ← resto
				resto ← a % b
			Fim enquanto
			Retorne b
			FIM
Implemente os dois algoritmo e faça um gráfico de comparação do
tempo de execução com várias entradas. 
*/

#include <stdio.h>

int maximoDivisorComum(int a, int b){
	int i, m, menor;
	menor = a;
	
	if (b < a){ /*1*/
		menor = b; /*1 */
	}
	
	m = 1; /*1*/
	
	for(i = 2; i <= menor; i++){ /*1, 2(n-1), 2(n-1)*/
		if(a%i == 0 && b%i == 0){ /*n-1*/
			m = i; /*1*/
		}
	}
	return m; /*1*/
}

int main(int argc, char **argv){
	int a, b, mdc;

	printf("Digite dois números.\n");
	scanf("%d %d", &a, &b);

	mdc = maximoDivisorComum(a,b);
35
	printf("O MDC de %d e %d é %d.\n", a, b, mdc);
	
	return 0;
}

/*
1 + 1 + 1 + 1 + 1 + 1 + 2(n-1) + 2(n-1) + n-1
6 + 5(n -1)
5n + 1

O(n)
*/


