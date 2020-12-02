/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe notas de alunos e calcula media
*******************************************************************************/
#include <stdio.h>

int main(){
	int i, contA=0;
	float soma=0, media;
	float v[5];
	printf("informe as notas: \n");
	
	for(i=0;i<5;i++){
		scanf("%f",&v[i]);
		soma = soma + v[i];
	}
	media = soma/i;
	for (i=0;i<5;i++){
		if(v[i]>media)
			contA=contA+1;
	}
	printf("a media e' %.2f o numero de alunos acima da media sao %d\n", media, contA);
	
	return 0;
}
