/*********************************
Marco Beraldi
BCC - UFSCar - 2011
Recebe valores em vetor e ordena por metodo bolha.
Entre com um inteiro para vetor[x]                                                                                   
 Elementos ordenados (Crescente):                                                                                                    
 Elementos ordenados (Decrescente):                                                                                                  
***********************************/

#include <stdio.h>
#include <stdlib.h>
#define TAM 7

main()
{
  int vetor[TAM], x = 0, y = 0, aux = 0;      
  
  for( x = 0; x < TAM; x++ ) 
  {
    printf("\nEntre com um inteiro para vetor[%d]: ",x);
    scanf("%d",&aux);
    vetor[x] = aux;
  }
  
  // coloca em ordem crescente (1,2,3,4,5...)  
  for( x = 0; x < TAM; x++ )
  {
    for( y = x + 1; y < TAM; y++ ) // sempre 1 elemento � frente
    {
      // se o (x > (x+1)) ent�o o x passa pra frente (ordem crescente)
      if ( vetor[x] > vetor[y] )
      {
         aux = vetor[x];
         vetor[x] = vetor[y];
         vetor[y] = aux;
      }
    }
  } // fim da ordena��o
  
  // exibe elementos ordenados   
  printf("\n\n Elementos ordenados (Crescente):");
  
  for( x = 0; x < TAM; x++ )
  {
    printf("\n vetor[%d] = %d",x,vetor[x]); // exibe o vetor ordenado
  }  
  
  // coloca em ordem decrescente (10,9,8,7...)
  for( x = 0; x < TAM; x++ )
  {
    for( y = x + 1; y < TAM; y++ ) // sempre 1 elemento � frente
    {
      if ( vetor[y] > vetor[x] )
      {
         aux = vetor[y];
         vetor[y] = vetor[x];
         vetor[x] = aux;
      }
    }
  } // fim da ordena��o
  
  // exibe elementos ordenados
  printf("\n\n Elementos ordenados (Decrescente):");
  
  for( x = 0; x < TAM; x++ )
  {
    printf("\n vetor[%d] = %d",x,vetor[x]); // exibe o vetor ordenado
  }
 
  system("\npause>nul");
}
