/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
recebe 2 vetores e exibe
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor1 [20], vetor2 [20];
	int i,j;
	printf("iniciando o vetor...\n");
	for (i=1,j=20;i<=20,j>=1;i++,j--)
		{
			printf("digite o termo %d do vetor\n",i);
			scanf("%d",&vetor1[i]);
			vetor2[j]=vetor1[i];
		}
		
	printf("\nO vetor um possui os valores: \n");
	
	for (i=1;i<=20;i++)
		{
			printf("%d\t",vetor1[i]);
						
		}
	printf("\nO vetor dois possui os valores: \n");
	
	for (i=1;i<=20;i++)
		{
			printf("%d\t",vetor2[i]);
						
		}
	
	return 0;
	
}
