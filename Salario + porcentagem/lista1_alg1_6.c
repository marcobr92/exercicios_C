#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b;
	printf("digite o salario atual\n");
	scanf("%f",&a);
	
	a=a*1.05;
	b=a*0.93;
	
	
	printf("%.2f",b);

return 0;	
}
