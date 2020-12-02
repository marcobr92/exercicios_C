/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Vetor primos
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i, j, primo;
	int vetprimo[10];
	
	for (i=100,j=1;i<=341,j<=10;i++,j++)
		{
			primo=(pow(2,i)%i);
			if(primo==2){
				vetprimo[j]=primo;
			}
		}
		
		
	for (i=1;i<=10;i++)
		{
			printf("%d\t",vetprimo[i]);
						
		}
	
	return 0;
	
}
