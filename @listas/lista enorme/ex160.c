#include <stdio.h>

void difer(int a, int b){
	printf("%d\n",a-b);
}


int main(){
	int m, n;
	scanf("%d%d",&m,&n);
	difer(m,n);

	return 0;
}