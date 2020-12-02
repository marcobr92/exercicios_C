/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe vetor e imprime ou inverte e imprime
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor1 [5], vetor2 [5];
	int i,j,codigo;
		
	printf("iniciando o vetor...\n");
	for (i=1,j=5;i<=5,j>=1;i++,j--)
		{
			printf("digite o termo %d do vetor\n",i);
			scanf("%d",&vetor1[i]);
			vetor2[j]=vetor1[i];
		}
		
	printf("\nDigite o codigo de operacao, 0 para sair, 1 para escrever o vetor e 2 para inverte-lo\n");
		scanf("%d",&codigo);
		
	if(codigo == 1){
		printf("\n codigo 1, imprimindo vetor original...\n");
		for (i=1;i<=5;i++)
		{
			printf("%d\t",vetor1[i]);
						
		}
	}else if(codigo == 2){
		printf("\n codigo 2, imprimindo vetor invertido...\n");
		for (i=1;i<=5;i++)
		{
			printf("%d\t",vetor2[i]);
						
		}
	}else if(codigo == 0){
		printf("\n codigo 0, finalizando...");
	}else
		printf("\n codigo incorreto, finalizando...");
	
	return 0;
	
}
