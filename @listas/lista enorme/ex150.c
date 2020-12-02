#include <stdio.h>

int main(){
	int i, n, aux, maior, menor;
	scanf("%d",&n);
	int vet[n];
	for(i=0;i<n;i++){
		scanf("%d",&aux);
		vet[i]=aux;
	}
	maior = menor = vet[1];

	for(i=0;i<n;i++){
		if(vet[i]>maior){
			maior = vet[i];
		}
		if(vet[i]<menor){
			menor = vet[i];
		}
	}

	printf("maior: %d menor: %d",maior,menor);

	return 0;
}