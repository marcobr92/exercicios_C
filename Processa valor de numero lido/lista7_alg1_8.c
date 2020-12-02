//erro
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j,k,flag=0;
	scanf("%d",&n);
	
	do{
	for(i=n;i>=1;i--){
		if(n%i==0){
		for(j=i;j>=1;j--){
			if(n%j==0){
				for(k=j;k>=1;k--){
					if(n%k==0){
						flag==1;
					}
				}
			}
		}
		}
	}
	}while(flag!=1);
	
	printf("%d %d %d",i,j,k);
	
	return 0;
}
