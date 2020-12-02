#include <stdio.h>
#include <math.h>

void areap(){
	int a,b,c;
	scanf("%d %d %d",&a, &b, &c);
	printf("%d\n",a*b*c);
}
void diagonalp(){
	int a,b,c,d;
	scanf("%d %d %d",&a, &b, &c);
	d=sqrt(a*a+b*b+c*c);
	printf("%d\n",d);
}
void areat(){
	int a,b;
	scanf("%d %d",&a, &b);
	printf("%d\n",a*b);
}
void diagonalq(){
	int a,b;
	scanf("%d",&a);
	b=sqrt(a*a+a*a+a*a);
	printf("%d\n",b);
}
void arear(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",a*b);
}
void areac(){
	int a;
	scanf("%d",&a);
	printf("%dpi\n",a*a);
}
void areaq(){
	int a;
	scanf("%d",&a);
	printf("%d\n",a*a);
}
void comprimentoc(){
	int a;
	scanf("%d",&a);
	printf("%dpi\n",a*2);
}

int main(){
	char aux='a';
	int parar=0;
	do{
		scanf("%c",&aux);
		switch(aux){
			case('a'): areap(); break;
			case('b'): diagonalp(); break;
			case('c'): areat(); break;
			case('d'): areaq(); break;
			case('e'): diagonalq(); break;
			case('f'): arear(); break;
			case('g'): areac(); break;
			case('h'): comprimentoc(); break;
			case('i'): parar = 1; break;
		}
		aux=0;
	}while(parar==0);

	return 0;
}