#include <stdio.h>

int troca(char *copia, char *cola)
{
    while(*copia != '\0') //o ponteiro aponta sempre para a primeira posição do vetor string
    {
        *cola = *copia;
        cola++;
        copia++;
    }
    
    *cola = '\0';
}


int main()
{
    char str1[20], str2[20];
    
    scanf("%[^\n]", str1); // %[^\n] vai ler até a tecla enter ser precionada
    
    troca(str1, str2);
    
    printf("%s", str2);
}
