/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe valor, calcula potencia ou fatorial e exibe
*******************************************************************************/
#include <stdio.h>
#include <math.h>

double potencia(int numero);
long int fatorial(int numero);

int main(){
	int numero, escolha, resultado;
	printf("digite um numero para ser computado\n");
	scanf("%d",&numero);
	printf("escolha uma das das opçoes a seguir:\n1_potencia\n2_fatorial\n");
	scanf("%d",&escolha);
	
	switch(escolha){
		case 1:
			resultado = potencia(numero);
			printf("a potencia do numero e' %d",resultado);
		break;
		
		case 2:
			printf("o fatorial do numero e' %d",fatorial(numero));
		break;
		
		default:
			printf("opção invalida!");
	}
	
	return 0;
}

double potencia(int numero){
	int potencia;
	printf("informe o valor da potencia\n");
	scanf("%f",&potencia);
	numero = pow(numero,potencia);
	return numero;
}

long int fatorial(int numero){
	int contador;
	contador = numero;
	do{
		contador --;
		numero *= numero;
	}while(contador>0);
	return numero;
}
