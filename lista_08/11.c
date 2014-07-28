/*
Escreva uma função que receba um ponteiro para uma
string e converta todas as iniciais para maiúsculas
OBS: As iniciais são as letras após os espaços.
Exemplo: Se passar “joao jose silva” a função deve 
modificar para “Joao Jose Silva”.
*/

#include <stdio.h>
#define DIF 32

void converterParaMaiuscula(char *texto){
	char *ptr;
	ptr = texto;
		
	if (*ptr >= 'a' && *ptr <= 'z'){
		*ptr = *ptr - DIF;
	}

	while (*ptr != '\0') {
		if(*ptr == ' '){
			*(ptr + 1) = *(ptr + 1) - DIF;
		}
	
		ptr++;
	}
}

int main(int argc, char **argv){
	char nome[50];
	char *ptr;
	ptr = nome;

	printf("Digite um nome completo\n");
	gets(nome);

	converterParaMaiuscula(ptr);
	printf("%s\n", nome);
	
	return 0;
}