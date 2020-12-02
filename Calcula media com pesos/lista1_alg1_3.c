/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Calcula media com pesos
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b,c,d;
	int a1,b1,c1;
	
	printf("digite 3 notas seguidas de seus respectivos pesos em porcentagem\n");
	scanf("%f%d%f%d%f%d",&a,&a1,&b,&b1,&c,&c1,&d);
	d=(a*a1/100)+(b*b1/100)+(c*c1/100);
	printf("a soma e' %.2f",d);

return 0;	
}
