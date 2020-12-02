/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Calculo Cadeias
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
	char cadeia1[21], cadeia2[21], fim;
	int resultado;

	do{
		printf("\ndigite as cadeias\n");
		gets(cadeia1);
		gets(cadeia2);
		resultado=strcmp(cadeia1,cadeia2);
		printf("r=%d\n",resultado);
		printf("digite f para sair ou outra tecla para  continuar\n");
		scanf("%c",&fim);
	}while(fim!='f');
		
	return 0;
}
