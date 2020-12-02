#include <stdio.h>

int somador(int v){
	int i, s=0;
	for(i=0;i<11;i++){
		s=s+(i*v);
	}
	return s;
}


int main(){
	int i,soma;
	for(i=0;i<10;i++){
		soma = soma + somador(i);
	}
	

	printf("%d ",soma);
	return 0;
}