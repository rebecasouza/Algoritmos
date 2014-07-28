//uma demonstração de como funciona o operador de endereço e o * 

#include <stdio.h>

int main(int argc, char **argv){
	int x;
	int *ptr;

	//lembrar que, se a variável para a qual o ponteiro aponta é uma string ou vetor,
	//não se usa o operador de endereço "&"
	ptr = &x;
	
	printf("Digite um valor\n");
	scanf("%d", ptr);
	
	//a diferença de cada um  	
	printf("%d %d %d %d %d\n", x, &x, ptr, *ptr, &ptr);

	return	0;
}