/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Proessa valor de numeros lidos
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, b ,c;
	
	scanf("%f %f %f",&a,&b,&c);
	printf("%.2f\n",a*(b/100));
	printf("%.2f\n",a*(c/100));
	printf("%.2f\n",((a*(b/100))+(a*(c/100))+a));
	
	return 0;
}
