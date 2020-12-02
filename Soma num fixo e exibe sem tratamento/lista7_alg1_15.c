/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Soma numero fixo e exibe sem tratamento
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,soma=8;
	
	for(i=6;i<=999;i++){
		if(i%3==0 || i%5==0){
			soma = soma + i;
		}
	}
	printf("%d",soma);

return 0;	
}
