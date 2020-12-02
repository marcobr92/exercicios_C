/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe numero real, arredonda e exibe
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float numero;
	printf("informe um numero real\n");
	scanf("%f",&numero);
	
	printf("a parte inteira arredondada do numero e' %4.0f", numero, numero);
	
	return 0;
}
