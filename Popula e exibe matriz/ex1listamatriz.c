/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Popula e exibe matriz
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){	
	int mat[3][4];
	int i,j;
		
	for (i=0;i<3;i++){
		for (j=0;j<4;j++)
		{
			printf("digite o termo %d %d da matriz\n",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("exibindo matriz matriz...\n");
	for (i=0;i<3;i++){
		for (j=0;j<4;j++)
		{
			if(j==3){
				printf("%d\n",mat[i][j]);
			}else{
				printf("%d\t",mat[i][j]);
			}
	    }
	}
	
	return 0;
}
