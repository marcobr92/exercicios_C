/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe notas - calcula media
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	double n1, n2, n3, media;
	printf("informe as 3 notas\n");
	scanf("%lf %lf %lf",&n1, &n2, &n3);
	media = (n1+n2+n3)/3;
	
	printf("a media e %0.2lf\n",media);

return 0;	
}
