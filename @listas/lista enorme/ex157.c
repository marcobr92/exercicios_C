#include <stdio.h>



int main(){
	int idade,velho,novo,soma,cont=0;
	scanf("%d"idade);
	novo=velho=idade
	do{
		if(novo>idade){novo=idade;}
		if(velho<idade){velho=idade;}
		soma = soma + idade;
		cont++;
		
		scanf("%d"idade);
	}while(idade!=0);
	printf("mais novo: %d\nmais velho: %d\nmedia: %d\n",novo,velho,(soma/cont) );
	return 0;
}