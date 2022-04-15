#include <stdio.h>
#include <stdlib.h>
 
// Nome: Igor Vinícius Santos Vieira  |  RA: 141004  |  Exer 01 - AED2
 
int procura(int t, int *v, int valor, int meio, int rec, int inicial, int final)
{
    meio = (inicial + final) / 2;
    
    //printf("meio = %d\n", meio);
    
    if(inicial > final)
    {
        //printf("\nentrou if 1\n");
        return -1;
    }
    
    if(v[meio] == valor)
    {
        printf("%d", rec);
        return 0;
    }
    
    if(v[meio] < valor) //vai pra direita
    {
        //printf("\nentrou if 3\n");
        procura(t, v, valor, meio, rec=rec+1, inicial = meio+1, final);
    }
    else //vai pra esquerda
    {
        //printf("\nentrou if 4\n");
        procura(t, v, valor, meio, rec=rec+1, inicial, final = meio-1);
    }
}
 
int main()
{
    int t;//tamanho do vetor
    int valor;
    int meio = 0;
    int rec = 0; // quantas recursoes o codigo fez
    int inicial = 0; // posição inicial do vetor
 
 
    scanf("%d", &t);
    int final = t-1; //posição final do vetor
    int v[t];
 
    *v = (int *) malloc(t * sizeof(int));
 
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &v[i]);
    }
 
    scanf("%d", &valor);
 
    int g = procura(t-1, v, valor, meio, rec, inicial, final);
   
    if(g == -1)
    {
        printf("%d nao foi encontrado", valor);
        return 0;
    }
    else
    {
        return 0;
    }
    
}