//rever
/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Soma potencia e fatorial
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i=1,j, x, termos, fat=1;
	float soma=1;
	scanf("%d %d",&x, &termos);
	
	do{
		x=pow(x,i);
		for(j=1;j<=i;j++){
			fat=fat*j;
		}
		soma=soma+(x/fat);
		i++;
	}while(i<=termos-1);
	printf("%.2f",soma);
	return 0;
}
