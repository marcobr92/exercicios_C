#include <stdio.h>

int main(){
	float fabri;
	char nome;

	scanf("%f %c",&fabri,&nome);
	printf("carro: %c\n preco: %f",nome,(fabri+fabri*0.45+fabri*0.28));
	return 0;
}