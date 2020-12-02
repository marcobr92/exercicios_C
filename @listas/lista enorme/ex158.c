#include <stdio.h>

int main(){
	int i, nota, soma,maior,menor, contmaior, contsac, contmenor;
	scanf("%d"nota);
	soma = soma + nota;
	maior = menor = nota;
	if(nota>6){contmaior++;}
	if(nota<5){contmenor++;}
	if(nota>=5 && nota <=6){contsac++;}
	for(i=0;i<9;i++){
		scanf("%d"nota);
		soma = soma + nota;
		if(nota>maior){maior = nota;}
		if(nota<menor){menor = nota;}
		if(nota>6){contmaior++;}
		if(nota<5){contmenor++;}
		if(nota>=5 && nota <=6){contsac++;}

	}
	print("media = %d\n",soma/10);
	print("maior = %d\n",maior);
	print("menor = %d\n",menor);
	print("aprovado = %d\n",contmaior);
	print("reprovado = %d\n",contmenor);
	print("sac = %d\n",contsac);
	return 0;
}