#include <stdio.h>

void natural(int n){
	int i;
	for(i=1;i<=n-2;i++){
		if((i*(i+1)*(i+2))==n){
			printf("triangular\n");
			i=n;
		}
	}
}


int main(){
	int numero;
	scanf("%d",&numero);
	natural(numero);

	return 0;
}