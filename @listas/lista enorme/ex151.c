#include <stdio.h>

void imprime(int v[],int c){
	int i;
	for(i=0;i<c;i++){
		printf("%d ",v[i]);
	}


int main(){
	int i, aux, cont=0, vet[100];

	for(i=0;aux>0 || i<100;i++){
		scanf("%d",&aux);
		vet[i]=aux;
		cont++;
	}

	imprime(vet,cont);
	return 0;
}