//terminar
/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,aux,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		aux=2;
		for(j=1;j<=i;j++){
			aux=aux*2;
		}
		printf("%d ",aux);
		aux=7;
		for(j=1;j<=i;j++){
			aux=aux+aux*2;
		}
		
		printf("%d ",aux);
		aux=3;
		for(j=1;j<=i;j++){
			aux=aux*4;
		}		
		printf("%d ",aux);
		
	}

return 0;	
}
