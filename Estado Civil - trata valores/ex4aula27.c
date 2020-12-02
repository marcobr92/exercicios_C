/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Estado Civil - trata valores
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	char civil;
	
	printf("Informe seu estado civil [C,S,D,V]\n");
	scanf("%c",&civil);
	
	switch(civil){
		case 'C':printf("Casado"); break;
		case 'S':printf("Sorteiro"); break;
		case 'D':printf("Divorciado"); break;
		case 'V':printf("Viuvo"); break;
		default:printf("Estado civil incorreto");
	}
	
	return 0;
	
}
