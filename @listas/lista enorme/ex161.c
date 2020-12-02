#include <stdio.h>

void duplica(int a){
	printf("%d\n",a*a);
}


int main(){
	int n;
	scanf("%d",&n);
	duplica(n);

	return 0;
}