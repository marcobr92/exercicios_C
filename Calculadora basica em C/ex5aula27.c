/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Calculadora basica em C
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2;
	char operacao;
	float resultado=0;
	
	printf("Digite uma operacao(+,-,* ou /) ou \"0+0\" para sair");
	do{
		scanf("%d %c %d", &num1, &operacao, &num2);
		switch(operacao){
			case '+': resultado = num1 + num2;
			break;
			case '-': resultado = num1 - num2;
			break;
			case '*': resultado = num1 * num2;
			break;
			case '/': resultado = num1 / num2;
			break;
			default: printf("operacao incorreta");}
			
			printf("%.2f",resultado);
			printf("Digite uma operacao(+,-,* ou /) ou \"0+0\" para sair");
	
		}while(num1 !=0 && operacao != '+' && num2!=0);
		
	
return 0;
	
}
