/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Trata data e pagina de livro e exibe
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float d,m,a,pag;
	
	printf("informe o dia, mes e ano e então digite a pagina\n");
	scanf("%f %f %f %f", &d, &m, &a ,&pag);
	
	printf("\nUFSCAR - ALGORITIMOS II\n %2.0f/%2.0f/%2.0f\t%3.0f", d, m, a, pag);

	return 0;
}
