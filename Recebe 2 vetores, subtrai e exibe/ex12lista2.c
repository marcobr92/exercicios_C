/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe 2 vetores, subtrai e exibe
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor1 [5], vetor2 [5];
	int i,j;
		
	printf("iniciando o vetor 1...\n");
	for (i=1;i<=5;i++)
		{
			printf("digite o termo %d do vetor 1\n",i);
			scanf("%d",&vetor1[i]);
		}
		
	printf("iniciando o vetor 2...\n");
	for (i=1;i<=5;i++)
		{
			printf("digite o termo %d do vetor 2\n",i);
			scanf("%d",&vetor2[i]);
		}
		
		
	printf("calculando operacao...\n");
	printf("exibindo o valor resultante...\n");
	for (i=1,j=5;i<=5,j>=1;i++,j--)
		{
			printf("%d\t",vetor1[i]-vetor2[j]);
		}
	return 0;
	
}
