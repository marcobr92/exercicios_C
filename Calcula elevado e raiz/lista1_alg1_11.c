/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Calcula elevado e raiz
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a;
	printf("digite um numero\n");
	scanf("%d",&a);
	
	printf("quadrado %d",a*a);
	printf("raiz %d",sqrt(a));
	printf("cubo %d",a*a*a);
	printf("raiz cubica %d",sqrt(a));

return 0;	
}
