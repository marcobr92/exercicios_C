/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe 2 vetores - Calcula produtos
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetx [10], vety [10], vetz [10];
	int i;
	printf("iniciando o vetor x...\n");
	for (i=0;i<=9;i++)
		{
			printf("digite o termo %d do vetor x\n",i+1);
			scanf("%d",&vetx [i]);
		}
		
		printf("iniciando o vetor y...\n");
	for (i=0;i<=9;i++)
		{
			printf("digite o termo %d do vetor y\n",i+1);
			scanf("%d",&vety [i]);
		}
		
	printf("\nimprimindo a diferença resultante...\n");
	for (i=0;i<=9;i++)
		{
			vetz [i]= vetx [i] - vety [i];
			printf("%d\t",vetz [i]);
	    }

	printf("\nimprimindo a soma resultante...\n");
	for (i=0;i<=9;i++)
		{
			vetz [i]= vetx [i] + vety [i];
			printf("%d\t",vetz [i]);
	    }

	printf("\nimprimindo o produto resultante...\n");
	for (i=0;i<=9;i++)
		{
			vetz [i]= vetx [i] * vety [i];
			printf("%d\t",vetz [i]);
	    }
	
	return 0;
}
