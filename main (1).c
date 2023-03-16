/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int main(){
  int vet [5], cont, i;
  
  for(i= 0; i < 5; i++){    /* inicialização do vetor */
    printf("\n\nDigite um numero qualquer:");
    scanf("%d",&vet[i]);
  }
  cont = 0;
  for(i= 0; i < 5; i++){
     if (vet[i] > 100)
     cont = cont + 1;
  }
  
  printf("\n\nExistem %d valores acima de 100", cont);
 }
    