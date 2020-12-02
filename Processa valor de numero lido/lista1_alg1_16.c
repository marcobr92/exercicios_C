/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Processa valor de numero lido
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float h;
	float b;
	
	scanf("%f%f",&h,&b);
	h=h*(b/2);
	b=b*h;
	printf("%.2f\n",b*0.97);		
	return 0;
}
