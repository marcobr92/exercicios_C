/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe alunos, notas e exibe media 
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
	float media=0, nota[5];
	int x;
	char nome[5][21];
	for (x=0;x<5;x++){
		printf("informe o nome do aluno:\n");
		gets(nome[x]);
		printf("informe a nota do aluno: \n");
		scanf("%f",&nota[x]);
		fflush(stdin);
		media = media + nota[x];
	}
	
	media = media/5;
	printf("\n media: %4.1f\n",media);
	for (x=0;x<5;x++){
		if(nota[x] > media){
			printf("%20s obteve nota %4.1f\n",nome[x], nota[x]);
		}
	}
	
	return 0;
}
