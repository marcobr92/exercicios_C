/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe vetor e exibe valores não nulos ou negativos
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetora [10];
	int i;
	printf("iniciando o vetor...\n");
	for (i=1;i<=10;i++)
		{
			printf("digite o termo %d do vetor\n",i);
			scanf("%d",&vetora[i]);
		}
		
	printf("\nno vetor os numeros nao negativos e nao nulos sao: \n");
		
	for (i=1;i<=10;i++)
		{
		if((vetora[i])>0){
			printf("%d\t",vetora[i]);
		}
		}
	
	return 0;
	
}
