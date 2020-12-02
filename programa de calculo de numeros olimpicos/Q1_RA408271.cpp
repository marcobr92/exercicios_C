//marco aurelio martins beraldi - 408271

#include <stdio.h>
#include <stdlib.h>

int main(){	
	int x, operacao;
	
	printf("Bem vindo ao programa de calculo de numeros olimpicos\n");
	printf("Informe uma quantidade de digitos para a realizacao dos calculos\n");
	scanf("%d",&x);
	
	switch(x){
		case 1:
			printf("nao existem numeros olimpicos de 1 digito\n");
			break;
		case 2:
			printf("o menor numero olimpico de %d digitos e 11\n",x);
			printf("o maior numero olimpico de %d digitos e 99\n",x);
			printf("o maior numero olimpico de %d digitos com elementos diferentes e 99\n",x);
			break;
		
		case 3: 
			printf("o menor numero olimpico de %d digitos e 211\n",x);
			printf("o maior numero olimpico de %d digitos e 981\n",x);
			printf("o maior numero olimpico de %d digitos com elementos diferentes e 981\n",x);
			break;
		case 4: 
			printf("o menor numero olimpico de %d digitos e 3111\n",x);
			printf("o maior numero olimpico de %d digitos e 9711\n",x);
			printf("o maior numero olimpico de %d digitos com elementos diferentes e 9621\n",x);
			break;
		case 5: 
			printf("o menor numero olimpico de %d digitos e 41111\n",x);
			printf("o maior numero olimpico de %d digitos e 96111\n",x);
			printf("o maior numero olimpico de %d digitos com elementos diferentes nao existe \n",x);
			break;
			
			//o segundo digito do maior numero é sempre menor em 1 em relacao ao segundo digito da operacao anterior, sendo completado com 1s
			
		case 6: 
			printf("o menor numero olimpico de %d digitos e 511111\n",x);
			printf("o maior numero olimpico de %d digitos e 951111\n",x);
			printf("o maior numero olimpico de %d digitos com elementos diferentes nao existe \n",x);
			break;
		case 7: 
			printf("o menor numero olimpico de %d digitos e 6111111\n",x);
			printf("o maior numero olimpico de %d digitos e 9411111\n",x);
			printf("o maior numero olimpico de %d digitos com elementos diferentes nao existe \n",x);
			break;
		case 8: 
			printf("o menor numero olimpico de %d digitos e %d1111111\n",x , x-1);
			printf("o maior numero olimpico de %d digitos e 931111111\n",x);
			printf("o maior numero olimpico de %d digitos com elementos diferentes nao existe \n",x);
			break;
		case 9: 
			printf("o menor numero olimpico de %d digitos e %d11111111\n",x ,x-1);
			printf("o maior numero olimpico de %d digitos e 9211111111\n",x);
			printf("o maior numero olimpico de %d digitos com elementos diferentes nao existe \n",x);
			break;
		case 10: 
			printf("o menor numero olimpico de %d digitos e %d111111111\n",x , x-1);
			printf("o maior numero olimpico de %d digitos e 91111111111\n",x);
			printf("o maior numero olimpico de %d digitos com elementos diferentes nao existe \n",x);
			break;
		default: printf("[ERRO!]\n[AS OPERACOES SO PODEM SER REALIZADAS COM NUMERO COM NO MAXIMO 10 DIGITOS]");	
	}	
	
	return 0 ;
}
