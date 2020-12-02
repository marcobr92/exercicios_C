/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Conversor de horas
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int horas, escolha;
	printf("dite um numero de horas\n");
	scanf("%d",&horas);
	
	printf("digite uma opção, sendo 1 para minutos, 2 para segundos e 3 para decims de segundo\n");
	scanf("%d",&escolha);
	
	if(escolha == 1){
		printf("%d\n",horas*60);
	}
	if(escolha == 2){
		printf("%d\n",horas*3600);
	}
	if(escolha == 3){
		printf("%d\n",horas * 216000);
	}

	return 0;	
}
