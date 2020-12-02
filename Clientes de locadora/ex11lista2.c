/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Clientes de locadora
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetcli [10];
	int i;
	printf("iniciando o cadastro de filmes alugados...\n");
	for (i=1;i<=10;i++)
		{
			printf("digite o numero de filmes que o cliente %d ja alugou\n",i);
			scanf("%d",&vetcli [i]);
		}
		
	printf("\ncalculando promocoes...\n");
	for (i=1;i<=10;i++)
		{
			printf("o cliente %d ja alugou %d filmes\n",i, vetcli [i]);
			if(vetcli[i]>=10){
				printf("e tem direito a %.0d filmes promocionais\n\n",vetcli[i]/10);
			}else{
				printf("mas não tem direito a nenhum filme promocional\n\n");
			}
	    }

	
	return 0;
}
