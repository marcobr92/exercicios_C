#include <stdio.h>

int somador(int v){
	int i, s=0;
	for(i=0;i<11;i++){
		s=s+(i*v);
	}
	return s;
}


int main(){
	int valor=9,soma;
	soma = somador(valor);

	printf("%d ",soma);
	return 0;
}