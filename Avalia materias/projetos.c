/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Avalia materias
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main (){
int redes=0, banco=0, ads=0, aux;

printf("Voce gosta mais de redes(1), banco(2) ou ads(3)?\n Informe o numero da opção desejada\n");
scanf("%d",&aux);

if(aux==1){
	redes++;
}else{
	if(aux==2){
		banco++;
	}else{
		ads++;
	}
}

if(redes>banco && redes>aux){
	printf("Voce vai pra redes fera\n");
}else{
	if(banco>redes && banco>ads){
		printf("Tu vai pra banco\n");
	}else{
		printf("vish, ads!\n");
	}
}


system("PAUSE");
return(0);
}