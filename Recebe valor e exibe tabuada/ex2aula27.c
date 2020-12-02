/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe valor e exibe tabuada
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero, i;
	
	printf("Digite um numero para fazer a tabuada ou 0 para sair...");
	scanf("%d",&numero);
	
	while(numero != 0){
		
		for (i=0;i<=10;i++)
		{
			
			printf("\n%d x %d = %d\n",numero, i, numero*i);	
		}
		
		printf("Digite um numero para fazer a tabuada ou 0 para sair...");
		scanf("%d",&numero);
		
	}
	
	printf("Programa finalizado.");

	return 0;	
}
