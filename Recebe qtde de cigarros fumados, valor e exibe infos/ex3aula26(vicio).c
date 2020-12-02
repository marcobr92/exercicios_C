/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe qtde de cigarros fumados, valor e exibe infos
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
float cdia,preco;

printf("informe quantos cigarros voce fuma por dia\n");
scanf("%f",&cdia);
printf("informe o preco do maco de cigarro\n");
scanf("%f",&preco);
preco /= 20;

printf("\nvoce gasta em cigarros %.2f ao dia %.2f na semana e %.2f ao mes, parabens!!",preco*cdia, preco*cdia*7, preco*cdia*30);


return 0;	
}
