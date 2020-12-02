/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe 2 matriz, subtrai campos e exibe
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int ma [3][3], mb [3][3], mr[3][3];
	int i, j;
	printf("iniciando a matriz a...\n");
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
		{
			printf("digite o termo %d %d da matriz a\n",i+1,j+1);
			scanf("%d",&ma[i][j]);
		}
		
		printf("iniciando a matriz b...\n");
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
		{
			printf("digite o termo %d %d da matriz b\n",i+1,j+1);
			scanf("%d",&mb[i][j]);
		}
		
	printf("imprimindo matriz resultante...\n");
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
		{
			mr[i][j]=ma[i][j]-mb[i][j];
			
			if(i==j){
				mr[i][j]=1;
			}
			
			if(j==2){
				printf("%d\n",mr[i][j]);
			}else{
				printf("%d\t",mr[i][j]);
			}
	    }
	
	return 0;
}
