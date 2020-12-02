//erro
/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, j, aux;
	float soma=1;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		aux=1;
		for(j=1;j<=i;j++){
			aux= aux*j;
		}
		soma = soma + (1/aux);
	}
	printf("%.2f ",soma);
	
	return 0;	
}
