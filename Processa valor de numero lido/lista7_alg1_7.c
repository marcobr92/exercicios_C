//erro
/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, j, k ,l, flag;
	
	scanf("%d",&n);
	
	//do{
	for(j=3;j<=n;j++){
		for(k=2;k<=j;k++){
			for(l=1;l<=k;l++){
				if(j*k*l==n){
					flag==1;
				}
			}
		}
	}
	//}while(flag!=1 || j==n);
	
	printf("%d %d %d",j,k,l);
	
	
	return 0;
}
