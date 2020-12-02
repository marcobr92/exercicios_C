//marco aurelio martins beraldi - 408271

#include <stdio.h>
#include <stdlib.h>

int main(){	
	int a, b, d, n, i,j=0,controle1, controle2,contador=0, erro=0;
	
	printf("Informe o valor da quantidade de divisores considerados\n");
	scanf("%d",&d);
	if(d < 1 || d > 100000){
		printf("[erro de entrada!]\n[o numero deve ser informado respeitando o intervalo 1< numero <=100000]\n");
		erro = 1;
	}
	
	printf("informe numero de intervalos\n");
	scanf("%d",&n);
	if(n < 1 || n > 100000){
		printf("[erro de entrada!]\n[o numero deve ser informado respeitando o intervalo 1< numero <=100000]\n");
		erro = 1;
	}
	
	
	
	do{
		
		printf("informe o numero inicial e o final do intervalo de numeros\n");
		scanf("%d %d", &a, &b);
	
		if(a<1 || b<a || b>100000){
			printf("[erro de entrada!]\n[os numero devem ser informados respeitando o intervalo 1<=a<=b<=100000]\n");
			erro = 1;
		}
	
	controle1 = a;
	
	for(i=a;i==b;i++){
			controle2 = controle1;
			do{
				if(controle1%controle2==0){
				contador ++;
				}
				controle2 --;
			}while(controle2<=1);
			if(contador==d){
				printf("%d\t",controle1);
			}
			controle1++;
	}
	
	j++;
	
	}while(erro!=0 && j<n);
		
	return 0;
}
