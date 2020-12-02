/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Calcula fatorial
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=0,b=1;
	
	printf("digite um numero\n");
	scanf("%d",&a);
	
	do{
		b=b*a;
		a--;
	}while(a!=0);
	
	printf("%d",b);

	return 0;
}
