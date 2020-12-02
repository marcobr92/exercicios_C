/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Potencia a por b
*******************************************************************************/
#include <stdio.h>

int main(){	
	int x, y, i, aux;
	scanf("%d %d",&x,&y);
	aux=x;
	
	for(i=1;i<=(y-1);i++){
		aux=aux*x;
	}
	printf("\n%d",aux);	
	return 0;
}
