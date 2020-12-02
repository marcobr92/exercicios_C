/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Exibe anos bisextos
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;	
	for(a=2012;a<=3012;a++){
	if(a%4==0){
		printf("%d ",a);
	}else if(a%100==0){
			if(a%400==0){
			}else printf("%d ",a);
	}
	}
	
	return 0;	
}
