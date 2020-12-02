#include <stdio.h>
/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Analise vetor
*******************************************************************************/
int ContemVint(int iVet[], int len, int v);
int main(){
	int i, ret, vet[10] = {1,2,3,4,5,6,7,8,9,10};
	for(i = 0; i <= 11; i++){
		ret = ContemVint(vet, 10, i);
		if (ret == 1){
			printf("contem %i\n", i);
			}else{
				printf("nao contem %i\n", i);
			}
	}
	
	return 0;
}
int  ContemVint(int iVet[], int len, int v){
	int i, ret = 0;
	if (len > 0){
		i=0;
		do{
			if(iVet[i]==v){
				ret = 1;
			}
			i++;
		}while (ret==0 && i<len);
	}
	return ret;
}
