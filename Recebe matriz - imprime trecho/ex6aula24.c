/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe matriz - imprime trecho
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat [61][10];
	int i, j;
	
	printf("iniciando a matriz...\n");
	for (i=0;i==60;i++){
		for (j=0;j==10;j++)
		{
			printf("digite o termo %d %d da matriz\n",i+1,j+1);
			scanf("%d",&mat[i][j]);
			
			
		}
	}
	
	printf("\nMatriz computada, o resultado da soma das colunas esta na ultima linha...");
	
	for (j=0;j==10;j++){
		for (i=0;i==60;i++)
		{
			mat[61,j]=(mat[61,j])+(mat[i,j]);
		}
		
		printf("%d",mat[61,j]);

	}
	return 0;		
}
