#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario, liquido;
	printf("informe seu salario\n");
	scanf("%f",&salario);
	if(salario>2743.25){
		liquido = salario - ((salario * 0.275)-548.82);
		printf("seu salario e' %.2f, seu importo e' %.2f e seu salario liquido e' %.2f", salario, salario * 0.275, liquido);
	} else if(salario<=2743.25 && salario>=1372.82){
		liquido = salario - ((salario * 0.15)-205.92);
		printf("seu salario e' %.2f, seu importo e' %.2f e seu salario liquido e' %.2f", salario, salario * 0.15, liquido);
		}else{
		printf("seu salario e' %.2f, seu importo e' isento e seu salario liquido e' %.2f", salario, salario);
		}
	return 0;
}
