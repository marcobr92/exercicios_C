/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,soma,i;
	
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		if(n%i==0){
			soma = soma +i; 
			printf("%d ",i);
		}
	}
	if(soma == n){
		printf("perfeito!");
	}else printf("nope!");
	
	
	return 0;
}
