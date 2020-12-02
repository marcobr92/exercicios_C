#include <stdio.h>

void fano(int a){
	int i;
	for(i=1986;i<a;i=i+76){
	}
	if(i!=a){printf("%d\n",i);
	}else{printf("%d\n",i+76);}
}


int main(){
	int ano;
	scanf("%d",&ano);
	fano(ano);

	return 0;
}