/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Potencia de a por b
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a, b;
	scanf("%d %d",&a,&b);
	
	a = pow(a,b);
	
	printf("%d",a);
	return 0;
}
