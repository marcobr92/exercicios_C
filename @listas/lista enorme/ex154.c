#include <stdio.h>

void imprime(int v){
	int i;
	for(i=0;i<11;i++){
		printf("%d X %d = %d\n",v,i,v*i);
	}
}

int main(){
	int i;
	for(i=0;i<10;i++){
		imprime(i);
		printf("\n\n");
	}
	
	return 0;
}