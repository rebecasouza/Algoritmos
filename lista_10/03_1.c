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
#include <time.h>

int maximoDivisorComum(int a, int b){
	int aux, resto;

	if(a < b){ /*1*/
		aux = b; /*1*/
		b = a; /*1*/
		a = aux; /*1*/
	}	
	resto = a%b;

	while(resto != 0 ){ /*logn*/
		a = b; /*1*/
		b = resto; /*1*/
		resto = a%b; /*1*/
	}

	return b;
}

int main(int argc, char const **argv){
	int a, b, mdc;
	time_t ini = time(0);

	printf("Digite dois números.\n");
	scanf("%d %d", &a, &b);

	mdc = maximoDivisorComum(a,b);

	printf("O MDC entre %d e %d é %d.\n", a, b, mdc);
	printf("Duração do método em s: %d\n", time(0)-ini);
	
return 0;
}

/*
logn
*/