#include <stdio.h>

void imprime(int v){
	int i;
	for(i=0;i<11;i++){
		printf("%d X %d = %d\n",v,i,v*i);
	}
}

int main(){
	int valor=9;
	imprime(valor);
	return 0;
}