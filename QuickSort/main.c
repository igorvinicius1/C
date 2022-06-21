#include <stdio.h>

// Nome: Igor Vinícius Santos Vieira  |  RA: 141004  |  Exer 05 - AED2 - "QuickSort"

int Partition(int v[], int inicio, int t)// partition que aloca o pivo corretamente dentro do vetor
{
    int x, i;
    x = v[t];//x = pivo (ultima posição do vetor)
    i = inicio - 1;
    int s;
    
    for(int j = inicio; j < t; j++)
    {
        if (v[j] <= x)
        {
            i++;
            
            if (i != j)
            {
                s = v[j];//troca troca ;)
                v[j] = v[i];
                v[i] = s;
            }
        }
    }
    
    v[t] = v[i + 1];// mais troca troca ;)
    v[i + 1] = x;
    return i + 1;
}

void QuickSort(int v[], int inicio, int t, int h)
{
    int q;
    
    if (inicio < t)
    {
        q = Partition(v, inicio, t);//pega pivo
        
        if(q == h)// pivo encontrado, para de rodar o cod
        {
            return;
        }
        if(q > h) // Um if para verificar em que lado devo repetir o processo de QuickSort
        {
            QuickSort(v, inicio, q - 1, h); //direita
        }
        else if(q < h)
        {
            QuickSort(v, q + 1, t, h); //esquerda
        }

    }
}


int main()
{
    int t, h;
    
    scanf("%d", &h);
    h--; //vetor começa do zero
    scanf("%d", &t);
    
    int v[t];
    
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &v[i]);
    }
    
    QuickSort(v, 0, t-1, h);
    
    printf("%do menor elemento eh o %d\n", h+1, v[h]);
   
    for(int i = 0; i < t; i++)//pega os dados
    {
        printf("%d ", v[i]);
    }

    return 0;
}
