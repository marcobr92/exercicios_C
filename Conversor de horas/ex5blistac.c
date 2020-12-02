#include <stdio.h>
#include <stdlib.h>

int main(){
	int horas, escolha;
	printf("dite um numero de horas\n");
	scanf("%d",&horas);
	
	printf("digite uma opção, sendo 1 para minutos, 2 para segundos e 3 para decims de segundo\n");
	scanf("%d",&escolha);
	
	switch(escolha){
	case 1:		printf("%d\n",horas*60); break;
	
	case 2:		printf("%d\n",horas*3600); break;
	
	case 3:		printf("%d\n",horas * 216000); break;
	
	default: 	printf("deu merda");
	}

	return 0;	
}
