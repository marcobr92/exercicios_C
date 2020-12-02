#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int a, b, p, i, j, aux=0;
	float c;
	
	scanf("%d %d",&a,&b);
	
	while(a!=0 && b!= 0){
		c = sqrt(b);
		p = c;	
		
		if(a<=2){printf("2 ");}
		for(i=a;i<=p;i++){
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
		
		for(i=a;i<=b;i++){
			if(i % 2 != 0){
				for(j=2;j<=p;j++){
					if(i%j==0){
						aux++;
					}
				}
				if(aux==0 && i!=1){
					printf("%d ",i);
				}
				aux=0;
			}
		}
		printf("\n");
		scanf("%d %d",&a,&b);
	}
	
	
	return 0;
}
