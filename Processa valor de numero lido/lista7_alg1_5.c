/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	float i, j, soma=0;
	scanf("%d",&n);
	
	for(i=1,j=n;i<=n,j>=1;i++,j--){
		soma = soma + i/j;
	}
	
	printf("\n%.2f",soma);
		
	return 0;
}
