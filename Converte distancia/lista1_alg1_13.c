/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Converte distancia
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float a;
	
	scanf("%f",&a);
	
	printf("polegadas:%.0f\n",a*12);
	printf("jardas:%.2f\n",a/3);
	printf("milhas:%f",((a/3)/1760));
		
	return 0;
	
}
