/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Calculo de circulo
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float r;
	printf("digite o raio do circulo\n");
	scanf("%f",&r);
	
	printf("%.2f",(r*r)*3.14);

return 0;	
}
