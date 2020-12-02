#include <stdio.h>

void perfeito(int n){
	int i,soma=0;
	for(i=1;i<=n-1;i++){
		if(n%i==0){
			soma=soma+i;
		}
	}
	if(soma==n){printf("perfeito!");}
}


int main(){
	int numero;
	scanf("%d",&numero);
	perfeito(numero);

	return 0;
}