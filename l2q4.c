#include <stdio.h>
#include <stdlib.h>

/* Receber o salario de um funcion�rio, calcular e mostrar seu novo sal�rio, sabendo que
ele recebeu um aumento de 25%. */

int main(int argc, char *argv[]) {
	float sal;
	
	printf("Digite seu sal�rio: ");
	scanf("%f",&sal);
	
	printf("\n\nSeu novo salario eh: %.2f",sal+(sal*25)/100);
	return 0;
}
