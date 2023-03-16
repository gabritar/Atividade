/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    #define TAM_MAX 10
    int Vet1[TAM_MAX];
    int Maior;
    int i;
 
    for(i=0; i<TAM_MAX; i++)
        scanf("%d", &Vet1[i]);
    
    Maior = Vet1[0];
    for(i=0; i<TAM_MAX; i++)
        if (Vet1[i] > Maior)
         Maior = Vet1[i];
        
    printf("O maior numero é %d \n", Maior);
    return 0;
}