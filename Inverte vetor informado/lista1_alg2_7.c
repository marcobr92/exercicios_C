/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Inverte vetor informado
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetnum[5],i;
	
	printf("digite os digitos do numero, pressinonando [ENTER] apos cada digito\n");
	for(i=0;i<=5;i++){
    scanf("%d",&vetnum[i]);
  	}
  	
  
  for(i=5;i>=0;i--){
    printf("\n%d",vetnum[i]);
  }
	
	

	return 0;
}
