/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe 2 vetores e avalia intersecção
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int veta [10], vetb [10], vetc[10]={0,0,0,0,0,0,0,0,0,0};
	int i;
	printf("iniciando o vetor a...\n");
	for (i=1;i<=10;i++)
		{
			printf("digite o termo %d do vetor a\n",i);
			scanf("%d",&veta [i]);
		}
	printf("iniciando o vetor b...\n");
	for (i=1;i<=10;i++)
		{
			printf("digite o termo %d do vetor b\n",i);
			scanf("%d",&vetb [i]);
			
			if(vetb[i]==veta[i]){
				vetc[i]=vetb[i];
			}
		}
		
	printf("\nRealizando intersecção do vetor a e b...\n");
	for (i=1;i<=10;i++)
		{
			printf("%d\t",vetc [i]);
	    }

	
	return 0;
}
