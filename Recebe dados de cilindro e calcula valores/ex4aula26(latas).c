/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe dados de cilindro e calcula valores
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float altura, raio, areaCilindro, qtddeLitros, qtddeLatas, custo;
	printf("\nDigite o valor da altura e do raio em metros: ");
	scanf("%f %f",&altura, &raio);

	areaCilindro=3.14*raio*raio+2*3.14*raio*altura;	
	printf("\nA area do cilindro e %.2f metros quadrados", areaCilindro);
	
	qtddeLitros=areaCilindro/3;
	printf("\nA quantidade de litros necessaria e de %.2f", qtddeLitros);
	
	qtddeLatas=qtddeLitros/5;
	printf("\nA quantidade de latas necessaria e de %.2f", qtddeLatas);
	
	custo = qtddeLatas*20;
	printf("\nO valor total das tintas e de R$ %.2f \n", custo);

return 0;	
}
