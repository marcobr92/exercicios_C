/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Le ate 9999 e exibe
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=1,j,cont,flag=0;
	
	do{
		cont=0;
		if(i%2!=0){
		for(j=1;j<=i;j++){
			if(i%j==0){
				cont++;
			}
		}
		}
		if(cont==2){
			flag++;
			if(flag==9999){
			printf("%d ",i);
			}
		}
		i++;
	}while(flag!=9999);
	return 0;
}
