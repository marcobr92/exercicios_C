/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Vetor - Recebe e valida valores unicos
*******************************************************************************/
#include <stdio.h>

int ContemVint(int iVet[], int len, int v);

int main(){
	int i, vet[20];
	printf("forneça os valores do vetor:\n");
	for(i=0;i<20;){
		printf("V[%d]: ",i);
		fflush(stdout);
		scanf("%d",&vet[i]);
		if(ContemVint(vet,i,vet[i])){
			printf("codigo ja cadastrado!\n");
		}else{
			printf("cadastro efetuado com sucesso!\n");
			i++;
		}
	}
	printf("VETOR CADASTRADO\n");
	for(i=0;i<20;i++){
		printf("V[%d]: %d\n",i,vet[i]);
	}
	return 0;
}

int ContemVint(int iVet[], int len, int v){
	int i, ret = 0;
	if(len > 0) {
		i = 0;
		do {
			if(iVet[i]==v){
				ret = 1;
			}
			i++;
			}while (ret==0 && i<len);
	}
	return ret;
}
