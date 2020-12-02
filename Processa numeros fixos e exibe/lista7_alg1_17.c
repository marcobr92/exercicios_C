/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Processa numeros fixos e exibe
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=1, b=2, f, soma, i;
	
	do{
		f=a+b;
		a=a+b;
		b=b+a;
		if(f%2==0){
			soma = soma + f;
		}
	}while(f<=4000000);
	
	printf("%d ",soma);
	
	return 0;
}
