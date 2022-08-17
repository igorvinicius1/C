#include <stdio.h>

void altera(char *copia, char *cola)
{
    while(*copia != '\0') //'\0' final de toda string
    {
        *cola = *copia; //pega a str2[0] = str1[0], indice por indice, endereço por endereço
        copia++;//muda endereço
        cola++;
    }
    
    *cola = '\0'; //ultima posição para significar o fim da string
}

int main()
{
    char str1[] = "Pao com mortadela";
    char str2[20];
    
    altera(str1, str2);
    
    printf("FRASE: %s", str2);
}
