#include <stdio.h>
#define MAX 100

void funcao(char *a, char *b) {
	do 	{
		*b = *a;
		a++;
		b++;
	}
	while (*a != '\0' ); 	
	*b = *a;
}

int main(int argc, char **argv) {
	char *pa, *pb;
	char a[MAX], b[MAX];
	
	pa = a;
	pb = b;
	
	printf("Digite um texto:\n");
	gets(a);
	
	printf("Digite outro texto:\n");
	gets(b);

	funcao(pa, pb);

	printf("%s\n", a);
	printf("%s\n", b);

	return 0;
}