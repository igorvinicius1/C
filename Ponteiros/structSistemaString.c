#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[20];
    int idade;
}Pessoa;

void limparBuffer()
{
    char c;
    while((c = getchar()) != '\n' && c != EOF); //entra no buffer até encontrar o "enter" ou "end of file", para não geral lixo na memoria
                                                // dessa forma, o "enter" não polui a próxima variável
}

Pessoa insere()
{
    Pessoa p2; 
    
    printf("Idade: ");
    scanf("%d", &p2.idade);
    limparBuffer();
    printf("Nome: ");
    scanf("%[^\n]", p2.nome);
    limparBuffer();
    printf("\n");
    
    return p2;
}

void exclui(Pessoa p[], char n[], int cont, int c) //a variavel tem q passar como ponteiro ou como "char n[]"
{
    int j;
    
    if(strcmp(n, p[c].nome) == 0)
    {
        strcpy(p[c].nome, "NULL");
        p[c].idade = 0;
        j = 5;
        
        
    }
    else if(c < 3)
    {
        exclui(p,n,cont,c=c+1);
    }
    else
    {
        printf("\t Pessoa não encontrada\n");
        return;
    }
    
}

void imprime(Pessoa x)
{
    printf("\tIdade: %d", x.idade);
    printf("\tNome: %s", x.nome);
    printf("\n\n");
}

int main()
{
    printf("Quantas pessoas serão inseridas no sistema: ");
    int n; //numero de individuos
    scanf("%d", &n);
    printf("\n");
    
    Pessoa p[n];
    
    for(int i = 0; i < n; i++)
    {
        p[i] = insere();
    }
    
    for(int i = 0; i < n; i++)
    {
        imprime(p[i]);
    }
    
    char name[20];
    printf("\nPara excluir uma pessoa (digite o nome): ");
    scanf("%20[^\n]", name); //lendo a string até a tecla enter ser precionada, tendo o limite de 20 caracteres '%20[^\n]'
    limparBuffer();
    printf("\n");
    
    exclui(p,name,n,0);
    
    for(int i = 0; i < n; i++)
    {
        imprime(p[i]);
    }
    
}
