#include <stdio.h>

void somar(int *p, int i, int v[], int soma)
{
    if(i <= 4)
    {
        *p = *p + v[i];
        i++;
        //printf("%d\n", soma);
        somar(p,i,v,soma);
    }
}

int main()
{
    int v[5] = {1,1,1,1,1};
    int soma = v[0];
    int *p = &soma;
    int i = 1;
    somar(p,i,v,soma);
    printf("%d\n", soma);
    printf("%d\n", *p);
}
