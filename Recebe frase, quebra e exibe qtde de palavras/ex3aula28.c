/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe frase, quebra e exibe qtde de palavras
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
	char frase[50];
	int i, cont;
	printf("digite uma frase: \n");
	gets(frase);
	i=cont=0;
	while(frase[i]!='\0'){
		if(frase[i]==' '){
			cont++;
		}
		i++;
	}
	cont++;
	printf("\na frase contem %d palavras \n",cont);
		
	return 0;
}
