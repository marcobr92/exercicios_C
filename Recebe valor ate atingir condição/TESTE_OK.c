/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Recebe valor ate atingir condição
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main () {
    
    int ini, fim, primo = 1, div = 0, flag = 0, i, x, n;
    
    scanf ("%d %d", &ini, &fim);
    
    
    while (ini != 0 && fim != 0) {
          
          flag = 0;
          
          if (ini >= 2 && fim <= pow(10,6)){
                  
                  n = sqrt(fim);

                  
                  for (x = ini; x <= fim; x++) {
                         for (i = 1; i <= x; i++) {
                                if (x % i == 0) {
                                     div++;
                                }
                         } 
                      
                      
                            if (div == 2) {
                                    printf ("%d ", x);
                                    flag = 1;
                            }
                            
                            div = 0;
                  }

                         
          
                  if (flag == 0) {
                           printf ("\n");         
                  }
                  
                  printf ("\n");
                  scanf ("%d %d", &ini, &fim);
          }
    }

system ("pause");
return 0;

}
