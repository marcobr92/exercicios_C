/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Calcula IMC
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	char sexo;
	float altura, peso;
	
	printf("digite seu sexo (h ou m) e sua altura em metros\n");
	scanf("%c %f",&sexo, &altura);
	
	peso = (72.7*altura)-58;
	
	if(sexo == 'h'){
		printf("seu peso ideal e' %.2f senhor",peso);
	}else if(sexo == 'm'){
		printf("seu peso ideal e' %.2f senhora",peso);
	}
	return 0;
}
