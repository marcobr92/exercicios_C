/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Adivinha letra
*******************************************************************************/
#include <stdio.h> 

int main() { 
   char c; 
   
   while (c!='x') { 
        printf("Advinhe o caractere: \n"); 
        scanf("%c",&c);
		getchar();  
   }  
   
   return 0;
}
