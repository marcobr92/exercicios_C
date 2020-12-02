//erro
/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Loop
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, aux=1, flag;
	
	do{
	aux++;
	flag=1;
	for(i=1;i<=20;i++){
		if(aux%i!=0){
			flag++;
		}
	}
	
	printf(" %d ",aux); 
	}while(flag!=1);
	printf("\n%d",aux);
	
	
	return 0;
}
