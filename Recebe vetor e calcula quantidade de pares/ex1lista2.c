/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe vetor e calcula quantidade de pares
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor [20];
	int i,pares=0;
	printf("iniciando o vetor...\n");
	for (i=1;i<=20;i++)
		{
			printf("digite o termo %d do vetor\n",i);
			scanf("%d",&vetor[i]);
			if((vetor[i]%2)==0){
				pares = pares + 1;
			}
		}
		
	printf("neste vetor existem %d numeros pares",pares);
	
	return 0;
	
}
