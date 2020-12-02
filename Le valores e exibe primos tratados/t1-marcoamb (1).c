//Marco Aurélio Martins Beraldi - 408271
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int n1, n2, p, i, j, aux=0;
	float c;
	
	scanf("%d %d",&n1,&n2);
	
	while(n1!=0 && n2!= 0){
		
		//monta o valor da raiz de n2
		c = sqrt(n2);
		p = c;	
		
		//imprime numeros primos inferiores a raiz de n2
		if(n1<=2){printf("2 ");}
		for(i=n1;i<=p;i++){
			if(i % 2 != 0){
				j=1;
				while(j<=i && aux<=2){
					if(i%j==0){
						aux++;
					}
					j=j+2;
				}
				if(aux==2){
					printf("%d ",i);
				}
				aux=0;
			}
		}
		
		//imprime os numeros primos restantes
		for(i=n1;i<=n2;i++){
			if(i % 2 != 0){
				j=2;
				while(j<=p && aux==0){
					if(i%j==0){
						aux++;
					}
					j++;
				}
				if(aux==0 && i!=1){
					printf("%d ",i);
				}
				aux=0;
			}
		}
		printf("\n");
		scanf("%d %d",&n1,&n2);
	}
	
	
	return 0;
}
