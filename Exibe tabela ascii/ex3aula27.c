/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Exibe tabela ascii
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int ascii;
	
	printf("Dec\thex\tcar\n");
	for (ascii = 32; ascii <=128;ascii++){
		printf("%d\t%x\t%c\n", ascii, ascii, ascii);
	}
	
	return 0;
}
