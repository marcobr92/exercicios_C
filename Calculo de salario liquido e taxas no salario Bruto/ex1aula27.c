/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Calculo de salario liquido e taxas no salario Bruto
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float salBruto, salLiqui, imposto;
	
	printf("digite o salario bruto recebido\n");
	scanf("%f",&salBruto);
	
	if(salBruto < 1000.00){
		imposto = 0.95;
	}else if(salBruto >= 5000.00){
		imposto = 0.65;
	}else{
		imposto = 0.89;
	}
	
	printf("\nO seu salario bruto e': %.2f\nO salario liquido e': %.2f devido a taxa de %.2f de imposto",salBruto,salBruto * imposto, 1-imposto);
		
	return 0;
}
