/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Calcula fatorial de num informado
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,aux=1,i;
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		aux=aux*i;
	}
	
	printf("\n%d",aux);
	
	return 0;
}
