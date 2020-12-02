#include <stdio.h>

int verificaPrimo(int a){
	int i;
	for(i=0;i<a;i++){
		if(i!=0 && i!= 1 && a%i==0){
			printf("e primo\n");
		}else{printf("e não primo\n");}	
	}
}

void parImpar(int a){
	if(n%2=0){
		printf("o numero é par\n");
	}else{printf("o numero é impar\n");}
}


int main(){
	int n;
	scanf("%d"n);
	parImpar(n);
	verificaPrimo(n);
	return 0;
}