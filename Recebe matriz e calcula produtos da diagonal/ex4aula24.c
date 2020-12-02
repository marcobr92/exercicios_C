/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe matriz e calcula produtos da diagonal
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat [50][50];
	int i, j, acima=1, abaixo=1, diagonal=1;
	printf("iniciando a matriz...\n");
	for (i=0;i<50;i++){
		for (j=0;j<50;j++)
		{
			printf("digite o termo %d %d da matriz\n",i+1,j+1);
			scanf("%d",&mat[i][j]);
					
			if(i<j){
				acima = acima * mat[i][j];
			}else
			if(i==j){
				diagonal = diagonal * mat[i][j];
			}else
			if(i>j){
				abaixo = abaixo * mat[i][j];
			}
		}
	}
	printf("o resultado do produto dos valores da diagonal principal e' %d\n",diagonal);
	printf("o resultado do produto dos valores acima da diagonal principal e' %d\n",acima);
	printf("o resultado do produto dos valores abaixo da diagonal principal e' %d\n",abaixo);
	
	
	
	return 0;	
		
	}
