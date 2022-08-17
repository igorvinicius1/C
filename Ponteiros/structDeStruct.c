#include <stdio.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
}Nascimento;

typedef struct
{
    Nascimento niver;
    char nome[100];
    int idade;
}Pessoa;

int main()
{
    Pessoa p1;
    
    strcpy(p1.nome, "Igor Igorovicky");
    p1.niver.dia = 21;
    p1.niver.mes = 9;
    p1.niver.ano = 1999;
    
    printf("%s, %d/%d/%d\n", p1.nome, p1.niver.dia, p1.niver.mes, p1.niver.ano);
    
    scanf("%d", &p1.niver.dia);
    
    printf("%s, %d/%d/%d\n", p1.nome, p1.niver.dia, p1.niver.mes, p1.niver.ano);
}
