/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe 2 pontos em plano cartesiano e informa distancia
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
float x1, x2, y1, y2, resultado;

printf("informe o ponto 1\n");
scanf("%f %f", &x1, &y1);
printf("computado, informe o ponto 2\n");
scanf("%f %f",&x2 , &y2);

resultado = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

printf("\n\na distancia entre os dois pontos e' %.2f",resultado);

return 0;	
}
