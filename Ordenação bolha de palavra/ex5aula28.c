/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Ordenação bolha de palavra
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
	char palavra[3][20], aux[20], frase[60];
	int i, bolha, lsup;
	for (i=0; i < 3; i++){
		printf("palavra[%d]: ",i);
		gets(palavra[i]);
	}
	
	lsup = 2;
	while (lsup > 0){
		bolha = 0;
		for(i=0; i < lsup; i++){
			if(stricpm(palavra[i], palavra[i + 1])>0){
				strcpy(aux, palavra[i]);
				strcpm(palavra[i], palavra[i + 1]);
				strcpy
			}
		}
	}
			
	return 0;
}
