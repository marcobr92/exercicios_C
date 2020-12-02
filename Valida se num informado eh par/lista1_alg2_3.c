/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Valida se num informado é par
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	
	printf("digite um numero\n");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("\n0");
	}else
		printf("\n1");
	
	

	return 0;
}
