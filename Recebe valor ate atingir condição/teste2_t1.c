#include <stdio.h>
#include <math.h>

int main () {
    
    int ini, fim, primo = 1, div = 0, flag = 0, i, v, x, n;
    
    scanf ("%d %d", &ini, &fim);
    
    int vetor[fim];
    
    
    while (ini != 0 && fim != 0) {
          
          flag = 0;
          
          if (ini >= 2 && fim <= pow(10,6)){
                  
                  n = sqrt(fim);
          
                  if (ini == 2) {
                          printf ("%d ", ini);
                  }
                  
                  for (i = ini; i <= n; i++) {
                            for (primo = 1; primo <= i; primo++) {
                                  if (i % primo == 0) {
                                     div++;
                                  }
                            } 
                      
                      
                            if (div == 2) {
                                    for (x = ini; x <= fim; x++) {
                                           if (x % 3 != 0 || x % 5 != 0) {
                                                 if (x % i != 0) {
                                                       printf ("%d ", x);
                                                       flag = 1;
                                                 }
                                           }
                                    }
                            }
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
