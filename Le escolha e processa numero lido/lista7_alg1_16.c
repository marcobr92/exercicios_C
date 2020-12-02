/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Le escolha e processa numero lido
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, soma, i;
	char escolha;
	scanf("%c",&escolha);
	
	switch(escolha){
	case 'a':
		scanf("%d",&n);
		soma = (n-1)+10;
		printf("%d",soma);	
	break;	
	case 'b':
		scanf("%d",&n);
		soma = (n-1)+(n*n);
		printf("%d",soma);	
	break;
	case 'c':
		scanf("%d",&n);
		soma = (n-1)+3;
		printf("%d",soma);
	break;
	}

return 0;	
}
