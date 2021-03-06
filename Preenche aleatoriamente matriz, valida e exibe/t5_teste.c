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
	int i, j, aux;
	
	for (i = 0; i < 8; i++)	{
		for (j = 0; j < 6; j++) {
			if(m[i][j]==m[i][j+1] && m[i][j]==m[i][j+2]){
			//3=s
			     aux = 3;
			     
                 removeLinha (mat, i, j, aux);
			     
			     completaLinha (mat, i, j, aux);
			}
			if(m[i][j]==m[i][j+1] && m[i][j]==m[i][j+2] && m[i][j]==m[i][j+3] && (j < 5)){
			//4=s obs: j vai ate < 5
			      aux = 4;
			      removeLinha (mat, i, j, aux);
			     
			     completaLinha (mat, i, j, aux);
			}
			if(m[i][j]==m[i][j+1] && m[i][j]==m[i][j+2] && m[i][j]==m[i][j+3] && m[i][j]==m[i][j+4] && (j < 4)){
			//5=s obs: j vai ate < 4
			      aux = 5;
			      removeLinha (mat, i, j, aux);
			     
			     completaLinha (mat, i, j, aux);
		
			}	
	}
} 

/* void verificaColuna (int m[][8]) {
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
} */

void completaLinha (int m[][8], int i, int j, int aux) {
     int k, s;
     
     srand(time(NULL));
     
     if (i != 0) {
        for (s = i; s >= 1; s--) {
           for (k = 0; k < aux; k++) {
               m[s][j] = m[s-1][j];
               j++;
           }
        }
     }
     
     for (k = j; k <= j + aux; k++) {
         m[0][j]=(rand()%MAX)+1;
     }
}


void completaColuna (int m[][8], int i, int j, int aux) {
     int k, s;
     
     srand(time(NULL));
     
     if (j != 0) {
        for (s = j; s >= 1; s--) {
           for (k = 0; k < aux; k++) {
               m[i][s] = m[i-1][s];
               i++;
           }
        }
     }
     
     for (k = i; k <= i + aux; k++) {
         m[i][0]=(rand()%MAX)+1;
     }
}


void imprime_tab (int m[][8]) {
	int i, j;

	for (i = 0; i < 8; i++)	{
		for (j = 0; j < 8; j++) {
			printf ("%d ", m[i][j]);		
		}
		printf ("\n");		
	}
	
	system ("pause");
}


int main () {

int mat[8][8];

entradaAleatoria(mat);
imprime_tab(mat);

//verificaLinha(mat);
//verificadColuna(mat);

return 0;
system ("pause");
}
