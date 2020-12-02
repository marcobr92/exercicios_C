/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,auxn=1, k, auxk=1, aux=1,i;
	scanf("%d %d",&n, &k);
	
	for(i=1;i<=n;i++){
		auxn=auxn*i;
	}
	
	for(i=1;i<=k;i++){
		auxk=auxk*i;
	}
	
	for(i=1;i<=(n-k);i++){
		aux=aux*i;
	}
	
	i=(auxn/(auxk*(aux)));
	
	printf("\n%d",i);
		
	return 0;
}
