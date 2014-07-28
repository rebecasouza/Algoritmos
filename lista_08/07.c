#include <stdio.h>

void swap(int *a, int *b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int main(int argc, char **argv) {
	int a, b;
	int *pa, *pb;
	pa = &a;
	pb = &b;

	printf("Digite dois valores \n");
	scanf("%d %d", &a, &b);

	swap(pa, pb);
	printf("%d, %d\n", a, b);
	
	return 0;
}