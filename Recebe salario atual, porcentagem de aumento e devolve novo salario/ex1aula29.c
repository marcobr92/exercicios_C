/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe salario atual, porcentagem de aumento e devolve novo salario
*******************************************************************************/
#include <stdio.h>

float calculo(float salario);

int main(){
	float sal, novo_sal,aum;
	printf("informe o seu salalario\n");
	scanf("%f",&sal);
	aum = calculo(sal);
	novo_sal=sal+aum;
	printf("\nnovo salario e' %.2f",novo_sal);
	
	return 0;
}

float calculo(float salario){
	float perc, valor;
	printf("informe a porcentagem de aumento\n");
	scanf("%f",&perc);
	valor=salario*perc/100;
	return valor;
}
