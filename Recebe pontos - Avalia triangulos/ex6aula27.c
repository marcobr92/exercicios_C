/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe pontos - Avalia triangulos
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	
	printf("digite os pontos A, B e C para verificar se formam um triangulo\n");
	scanf("%d %d %d",&a, &b, &c);
	
	if(a<b+c && b<a+c && c<a+b){
		printf("e' um triangulo!\n");
		if(a==b && b==c){
			printf("e e' equilatero\n");
		}else if(a==b || a==c || b==c){
			printf("e e' isoceles\n");
		}else printf("e e' escaleno\n");
	}else printf("nao é um triangulo...\n");

	return 0;

}
