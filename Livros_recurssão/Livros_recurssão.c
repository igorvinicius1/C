#include <stdio.h>
#include <stdlib.h>

// Nome : Igor Vieira | RA: 141004 | Exer 02 - AED2

int recurssiva(int *v1, int *v2, int *v3, int *v4, int t)
{
    int l = 0; //livros
    int v = 0; //vales
    int resto = 0;
    
    //printf("entrouuu\n");
    
    if(t >= 1)
    {
        l = v1[t] / v2[t]; //livros comprados com money
        v4[t] = l; 
        v = l;
        
       //printf("livros comprados apenas com o dinheiro: %d e a quantidade de vales: %d\n", v4[t], v);
        
        if(v >= v3[t])
        {
            do
            {
                l = 0;
                l = v / v3[t];
                resto = v - (l*v3[t]); //resto dos vales pós divisão
                v4[t] = v4[t] + l;
                v = resto + l;
                //printf("livros: %d  resto: %d\n", l, resto);
                
            }while(v >= v3[t]);
        }
        
        //printf("livros comprados apenas com o dinheiro: %d e a quantidade de vales: %d\n", v4[t], resto);
        
        recurssiva(v1, v2, v3, v4, t = t - 1); // chama a mesma função alterando a posição dos vetores
    }
}

int main()
{
    int t;//tamanho do vetor
 
    scanf("%d", &t);
    int v1[t];
    int v2[t];
    int v3[t];
    int v4[t];
 
    *v1 = (int *) malloc(t * sizeof(int));
    *v2 = (int *) malloc(t * sizeof(int));
    *v3 = (int *) malloc(t * sizeof(int));
    *v4 = (int *) malloc(t * sizeof(int));
    
    for(int i = 1; i <= t; i++)//pega os dados
    {
        scanf("%d", &v1[i]);//money
        scanf("%d", &v2[i]);//preço do livro
        scanf("%d", &v3[i]);//preço de livro a cd  tantos v3 vales
        v4[i] = 0;//quantidade de livros final
    }
    
    recurssiva(v1, v2, v3, v4, t);
    
    
    for(int i = 1; i <= t; i++)
    {
        printf("%d\n", v4[i]);
    }

    //free(v1);
    //free(v2);
    //free(v3);
    //free(v4); //desalocando memória
    
    return 0;
    
}
