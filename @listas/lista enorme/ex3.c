#include <stdio.h>
#include <math.h>

int main(){
	int a=5,b=10,c=-2,res;
	res = sqr(c*c+(b/a)+3);
	printf("%d\n%d",(b/a)%c,res);
	return 0;
}