#include <stdio.h>

void cabe(int bol, int a1, int l1, int p1){
	if(bol>a1 || bol>l1 || bol>p1){
		printf("n");
	}else{printf("s");}
}


int main(){
	int bola, a, l, p;
	scanf("%d %d %d %d", &bola, &a, &l, &p);
	cabe(bola,a,l,p);

	return 0;
}