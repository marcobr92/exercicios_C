/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Avalia cadeia de valores
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
	char cadeia1[21], cadeia2[21], fim;
	do{
		printf("\ndigite as cadeias a serem somparadas \n");
		gets(cadeia1);
		gets(cadeia2);
		printf("L1=%d\n",strlen(cadeia1),strlen(cadeia2));
		strnset(cadeia1, 'x' ,2);
		strrev(cadeia2);
		puts(cadeia1);
		puts(cadeia2);
		printf("digite f para sair ou qualquer tecla para continuar\n");
		scanf("%c",&fim);
	}while(fim!='f');
	return 0;
}
