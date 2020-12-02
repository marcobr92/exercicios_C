/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Valida se é 0>=x<=9
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	
	printf("digite um numero\n");
	scanf("%d",&a);
	
	if(a>=0 && a<=9){
		printf("\n1");
	}else
		printf("\n0");
	
	

	return 0;
}
