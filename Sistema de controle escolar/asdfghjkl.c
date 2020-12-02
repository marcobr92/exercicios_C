/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Sistema de controle escolar, permite CRUD e calcula medias.
1 - Registro aluno
2 - Matricula por aluno.
3 - Registro de notas.
4 - Mostra registro do aluno.
5 - Mostra notas por materia.
6 - Remove Matricula
7 - Fim
*******************************************************************************/

#include <stdio.h>

typedef struct materia {
    int code;
    float nota[3];
} Materia;

typedef struct aluno {
    char nome[30];
    int ra;
    int m;
    Materia mat[10];
} Aluno;

void printMenu(){
     printf("Selecione uma opcao:\n");
     printf("1 - Registo aluno.\n");
     printf("2 - Matricula por aluno.\n");
     printf("3 - Registro de notas.\n");
     printf("4 - Mostra registro aluno.\n");
     printf("5 - Mostra notas por materia.\n");
     printf("6 - Remove matricula.\n");
     printf("7 - FIM\n");
}

void regAluno(Aluno *al){
     //printf("\nregAluno\n\n");
     printf("Nome: ");
     scanf("%s",al->nome);
     printf("RA: ");
     scanf("%d",&al->ra);
}

void regMateria(Aluno *al){
     //printf("\nregMateria\n\n");
     printf("Codigo: ");
     scanf("%d",&al->mat[al->m].code);
     al->m++;
}

void regNotas(Aluno *als,int n, int code){
     //printf("\nregNotas\n\n");
     int i,j;
     
     for(i=0;i<n;i++){
         j=0;
         while(j<als[i].m && als[i].mat[j].code != code)
             j++;
         if (j<als[i].m){
             printf("Aluno: %s\n",als[i].nome);
             printf("Nota P1: ");
             scanf("%f", &als[i].mat[j].nota[0]);
             printf("Nota P2: ");
             scanf("%f", &als[i].mat[j].nota[1]);
             printf("Nota P3: ");
             scanf("%f", &als[i].mat[j].nota[2]);
             printf("\n");
         }
     }
}

void printAluno(Aluno al){
     int i;
     float media;
     
     //printf("\nprintAluno\n\n");
     printf("\n\nNome: %s\n", al.nome);
     printf("RA: %6d\n", al.ra);
     printf("Materia\tMedia\n");
     for (i=0;i<al.m;i++){
         media = (al.mat[i].nota[0]+al.mat[i].nota[1]+al.mat[i].nota[2])/3;
         printf("%6d\t%4.2f\t%4.2f\t%4.2f\t%4.2f\n", al.mat[i].code,
             al.mat[i].nota[0],al.mat[i].nota[1],al.mat[i].nota[2], media);
     }
     printf("\n\n");
}

void printNotas(Aluno *als, int n, int code){
     //printf("\nprintNotas\n\n");
     int i,j;
     float media;
     
     printf("\nMateria: %d\n", code);
     printf("RA\tNome\tMedia\n");
     for(i=0;i<n;i++){
         j=0;
         while(j<als[i].m && als[i].mat[j].code != code)
             j++;
         if (j<als[i].m){
             media = (als[i].mat[j].nota[0]+als[i].mat[j].nota[1]
                   +als[i].mat[j].nota[2])/3;
             printf("%6d\t%s\t%4.2f\n",als[i].ra,als[i].nome,media);
         }
     }
     printf("\n");
}

void remMatricula(Aluno *al,int code){
    int j=0;
    while(j<al->m && al->mat[j].code != code)
        j++;
        
    if(j<al->m){
       for(;j<al->m-1;j++){
           al->mat[j] = al->mat[j+1];
       }
       al->m--;
    }
}

int main(){
    int sel,n=0,sAluno,sCode;
    Aluno alunos[30];
    
    printMenu();
    scanf("%d",&sel);
    do {
      switch(sel){
          case 1:
               regAluno(&alunos[n]);
               n++;
               break;
          case 2:
               printf("Indice do aluno: ");
               scanf("%d",&sAluno);
               regMateria(&alunos[sAluno]);
               break;
          case 3:
               printf("Codigo: ");
               scanf("%d",&sCode);
               regNotas(alunos,n,sCode);
               break;
          case 4:
               printf("Indice do aluno: ");
               scanf("%d",&sAluno);
               printAluno(alunos[sAluno]);
               break;
          case 5:
               printf("Codigo: ");
               scanf("%d",&sCode);
               printNotas(alunos, n, sCode);
               break;
          case 6:
               printf("Indice do aluno: ");
               scanf("%d",&sAluno);
               printf("Codigo: ");
               scanf("%d",&sCode);
               remMatricula(&alunos[sAluno],sCode);
      }
      printMenu();
      scanf("%d",&sel);
    } while (sel != 7);
}