/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe 2 matriz e imprime soma
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a [4][5], b [4][5], soma[4][5];
	int i, j;
	printf("iniciando a matriz a...\n");
	for (i=0;i<4;i++)
		for (j=0;j<5;j++)
		{
			printf("digite o termo %d %d da matriz a\n",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		
		printf("iniciando a matriz b...\n");
	for (i=0;i<4;i++)
		for (j=0;j<5;j++)
		{
			printf("digite o termo %d %d da matriz b\n",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
		
	printf("imprimindo matriz resultante...\n");
	for (i=0;i<4;i++)
		for (j=0;j<5;j++)
		{
			soma[i][j]=a[i][j]+b[i][j];
			if(j==4){
				printf("%d\n",soma[i][j]);
			}else{
				printf("%d\t",soma[i][j]);
			}
	    }
	
	return 0;
}
