/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe vetor, numero e exibe vetor mutiplicado
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetf [20], vetg [20];
	int i, a;
	printf("iniciando o vetor f...\n");
	for (i=0;i<=19;i++)
		{
			printf("digite o termo %d do vetor f\n",i+1);
			scanf("%d",&vetf [i]);
		}
		
		printf("digite o inteiro a para a operação\n");
		scanf("%d",&a);
		
	printf("\nimprimindo o vetro resultante...\n");
	for (i=0;i<=19;i++)
		{
			vetg [i]= vetf [i] * a;
			printf("%d\t",vetg [i]);
	    }

	
	return 0;
}
