/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Calcula media aritmetica
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b,c,d;
	
	printf("digite 3 notas\n");
	scanf("%f%f%f",&a,&b,&c);
	d=(a+b+c)/3;
	printf("a media aritimetica e' %0.2f",d);

return 0;	
}
