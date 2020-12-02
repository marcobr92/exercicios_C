/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Informa primos até o valor informado
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, i, j, aux=0;
	scanf("%d",&a);
	printf("\n1 2 ");
	
	for(i=3;i<=a;i++){
		if(i%2!=0){
			for(j=1;j<=i;j++){
				if(i%j==0){aux=aux+1;};
			}			
		}
		if(aux==2){printf("%d ",i);}
		aux=0;
	}	
	return 0;
}
