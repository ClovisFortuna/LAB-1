#include <stdio.h>
#include <stdlib.h>

/* Efetuar a leitura de tr�s valores e apresentar como resultado final a soma dos
quadrados dos tr�s valores lidos */

int main(int argc, char *argv[]) {
	int a,b,c;
	
	printf("Digite 3 numeros: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	
	printf(" A soma dos quadrados dos tr�s valores lidos : %d ",(a*a)+(b*b)+(c*c));
	return 0;
}
