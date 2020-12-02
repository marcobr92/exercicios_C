//marco beraldi - 408271
#include <stdio.h>

int main(){
	int mat[5][5], i, j, aux, aux2,aux3,vet[75],cont=0;

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&aux);
			mat[i][j]=aux;
		}
	}




	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			vet[cont]=mat[i][j];
			cont++;
			vet[cont]=i;
			cont++;
			vet[cont]=j;
			cont++;
		}
	}

	for(i=0;i<75;i+=3){
		for(j=0;j<75-3;j+=3){
			if(vet[j]<vet[j+3]){
				aux=vet[j];
				aux2=vet[j+1];
				aux3=vet[j+2];
				vet[j]=vet[j+3];
				vet[j+1]=vet[j+4];
				vet[j+2]=vet[j+5];
				vet[j+3]=aux;
				vet[j+4]=aux2;
				vet[j+5]=aux3;
			}
		}
	}
		
			
	for(i=0;i<75;i++){
		if(i%3==0||i==0){printf("\n");}
		printf("%d ",vet[i]);
	}

	return 0;
}
