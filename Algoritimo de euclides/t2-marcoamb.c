//Marco Beraldi - 408271
//Foi utilizado como base o Algoritmo de Euclides

#include <stdio.h>
#include <stdlib.h>

int main(){
int x, y, aux, menor, maior;
scanf("%d %d", &x, &y);

while(x != 0 && y != 0){
	if(x >= y){
		menor=y;
		maior=x;
	}else{
		menor=x;
		maior=y;
	}

	while(menor>0){
		if(menor > maior){
			aux=maior;
			maior=menor;
			menor=aux;
		}

		aux=maior;
		maior=menor;
		menor=aux-menor;
	}

	printf("%d\n",maior);

	scanf("%d %d",&x,&y);
}

return 0;
}
