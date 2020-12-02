/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe matriz e exibe diferentes
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int matv [30][30], matx [30][30];
	int i, j, a=0, contador=0;
	
	printf("digite o numero inteiro\n");
	scanf("%d",&a);
		
	
	printf("iniciando a matriz...\n");
	for (i=0;i<30;i++){
		for (j=0;j<30;j++)
		{
			printf("digite o termo %d %d da matriz\n",i+1,j+1);
			scanf("%d",&matv[i][j]);
			
			if(matv[i][j]==a){
				contador = contador + 1;
				matx[i][j] = 0;
			}else if(matv[i][j]!=a){
			matx[i][j] = matv[i][j];
			}	
		}
	}
	
	printf("\nExistem %d numeros iguais ao numero inteiro informado na matriz",contador);
	printf("\nOs numeros diferentes sao:\n");
	
	for (i=0;i<30;i++){
		for (j=0;j<30;j++)
		{
			if(j==29){
				printf("%d\n",matx[i][j]);
			}else{
				printf("%d\t",matx[i][j]);
			}		
		}

	}
	return 0;		
}
