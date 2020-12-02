/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Preenche aleatoriamente matriz, valida e exibe
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

#define MAX 7 

void entradaAleatoria (int m[][8]) {
	int i, j;
	
	srand(time(NULL));

	for (i = 0; i < 8; i++)	{
		for (j = 0; j < 8; j++) {
			m[i][j]=(rand()%MAX)+1;		
		}	
	}
}

void verificaLinha (int m[][8]) {
	int i, j;
	
	for (i = 0; i < 8; i++)	{
		for (j = 0; j < 6; j++) {
			if(m[i][j]==m[i][j+1] && m[i][j]==m[i][j+2]){
			//3=s
			}
			if(m[i][j]==m[i][j+1] && m[i][j]==m[i][j+2] && m[i][j]==m[i][j+3]){
			//4=s obs: j vai ate < 5
			}
			if(m[i][j]==m[i][j+1] && m[i][j]==m[i][j+2] && m[i][j]==m[i][j+3] && m[i][j]==m[i][j+4]){
			//5=s obs: j vai ate < 4
		
			}	
	}
}

void verificaColuna (int m[][8]) {
	int i, j;
	
	for (i = 0; i < 6; i++)	{
		for (j = 0; j < 8; j++) {
			if(m[i][j]==m[i+1][j] && m[i][j]==m[i+2][j]){
			//3=s
			}
			if(m[i][j]==m[i+1][j] && m[i][j]==m[i+2][j] && m[i][j]==m[i+3][j]){
			//4=s obs: i vai ate < 5
			}
			if(m[i][j]==m[i+1][j] && m[i][j]==m[i+2][j] && m[i][j]==m[i+3][j] && m[i][j]==m[i+5][j+]){
			//5=s obs: i vai ate < 4
		
			}
						
		}	
	}
}

void removePeca (){
	//
}



void imprime_tab (int m[][8]) {
	int i, j;

	for (i = 0; i < 8; i++)	{
		for (j = 0; j < 8; j++) {
			printf ("%d ", m[i][j]);		
		}
		printf ("\n");		
	}
}


int main () {

int mat[8][8];

entradaAleatoria(mat);

verificaLinha(mat);
verificadColuna(mat);

imprime_tab(mat);

return 0;
}
