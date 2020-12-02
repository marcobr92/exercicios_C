/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Tratamentos de vetor
*******************************************************************************/
/*Marco Aurélio Martins Beraldi
408271*/
#include <stdlib.h>
#include <stdio.h>

// insere n elementos lidos no vetor
void le_vet(int v[], int n){
	int i, aux;
	for(i=11;i<=10+n;i++){
		scanf("%d",&aux);
		v[i]=aux;
	}
}

// imprime todos os elementos do vetor
void imprime_vetor(int v[], int n){
	int i;
	for(i=1;i<=n;i++){
		printf("%d ",v[i]);
	}
	
}

// insere o elemento elem no inicio do vetor e retorna o numero de elementos apos a insercao
void insere_inicio(int v[]){
	int i, aux;
	for(i=10;i>=1;i--){
		scanf("%d",&aux);
		v[i]=aux;
	}
}

// insere o elemento elem no fim do vetor e retorna o numero de elementos apos a insercao
void insere_fim(int v[], int n){
	int i, aux;
	for(i=11+n;i<=n+15;i++){
		scanf("%d",&aux);
		v[i]=aux;
	}
}

// insere o elemento elem no meio do vetor e retorna o numero de elementos apos a insercao
int insere_meio(int n, int ax, int v[], int v2[], int ta){
	int i, j, cot=0;
		
	for(i=1;i<=ax;i++){
		v2[i]=v[i];
	}

	v2[ax+1]=n;

	for(i=ax+2,j=ax+1;i<=(ta+16),j<=(ta+15);i++,j++){
		v2[i]=v[j];
	}

	for(i=1;i<=ta+16;i++){
		if((i-1)%10==0 && (i-1)!=0){
			cot++;
		}
	}

	return cot;

}

// remove o elemento que esta na posicao pos no vetor e retorna 1 se a remocao foi realizada com sucesso ou 0 caso contrario
void remove_pos(int ve[], int n, int ve2[]){
	int i, j=0;
	for(i=1;i<=n+16;i++){
		if((i-1)%10==0 && (i-1)!=0){
		}else{
			j++;
			ve[j]=ve2[i];
		}
	} 
}

int main(){
	int aux, tam, meio,cont=0;

	//tamanho
	scanf("%d",&tam);
	int vet[tam+15];
	int vet2[tam+16];
	
	//elementos
	le_vet(vet, tam);

	//os 10
	insere_inicio(vet);
	
	
	//os 5
	insere_fim(vet, tam);
	

	aux=0;
	//meio
	scanf("%d",&meio);
	aux = (tam+15)/2;

	cont = insere_meio(meio, aux, vet, vet2, tam);

	
	//remove
	aux = (tam+16)-cont;	
	int vetfinal[aux];

	remove_pos(vetfinal, tam, vet2);

	

	imprime_vetor(vetfinal, aux);

	printf("\n");
	return 0;
}
