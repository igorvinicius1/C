#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia, mes, ano;
}Data;

typedef struct
{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no
{
    Pessoa p;
    struct no *proximo;
}No;

void flush_in() //limpa buffer de entrada, melhorar a leitura das string
{
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

Pessoa ler_pessoa()
{
    Pessoa p;
    
    printf("NOME: ");
    flush_in();
    scanf("%[^\n]", p.nome);
    flush_in();
    printf("NASCIMENTO (dd, mm, aaa): ");
    scanf("%d %d %d", &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}

void imprime(Pessoa p)
{
    printf("NOME: %s\nNASCIMENTO: %d/%d/%d", p.nome, p.data.dia, p.data.mes, p.data.ano);
    printf("\n\n");
}

No* empilhar(No *topo)
{
    No *novo = malloc(sizeof(No)); //alocar memória sempre que houver a necessidade de um novo valor
    
    if(novo) //se alocou memoria com sucesso
    {
        novo->p = ler_pessoa(); //pessoa salva na variavel 'p', pois ler_pessoa() retorna as infos
        novo->proximo = topo; //assume o topo da pilha
        return novo;
    }
    else
    {
        printf("\n\nErro ao alocar memória\n\n");
    }
    
    return NULL;
}

No* desempilhar(No **topo) //indireção multipla para apoio na remoção
{
    if(*topo != NULL)
    {
        No *remover = *topo; //guarda o no q será removido
        *topo = remover->proximo; //o topo passa a guardar o proximo valor da pilha
        return remover;
    }
    else
    {
        printf("\n\nNão há valor para se remover\n\n");
    }
}

void status_pilha(No *topo)
{
    if(topo != NULL)
    {
        imprime(topo->p);
        //printf("endereço: %p\n\n", &topo->p);
        topo = topo->proximo;//assume o endereço do proximo valor da pilha
        status_pilha(topo);//chamada recursiva até encontrar o topo == NULL (fim da pilha)
    }
    
    return;
}

int main()
{
    No *topo = NULL; // a base da pilha sempre será NULL, servirá como critério de parada em outras funções
    // EX:  |2|,|5| ,|9|, |NULL|    na hr de imprimir " if(topo != NULL){ imprimir(topo) } "
    // por isso o topo se inicia com NULL
    No *remover;
    int op;
    
    do
    {
        printf("\n0 -> SAIR \n1 -> EMPILHAR \n2 -> DESEMPILHAR\n3 -> IMPRIMIR \n\nOP: ");
        
        scanf("%d", &op);
        
        switch(op)
        {
            case 0:
                break;
                
            case 1:
                topo = empilhar(topo);
                break;
                
            case 2:
                remover = desempilhar(&topo); //&topo: recebe o endereço do ponteiro
                                                //remover guarda a pessoa removida
                
                if(remover != NULL)
                {
                    printf("\nelemento removido !!!\n");
                    imprime(remover->p);
                }
                else
                {
                    printf("\nsem nó a remover\n");
                }
                
                break;
                
            case 3:
                printf("\n------ INICIO PILHA ------\n\n");
                status_pilha(topo);
                printf("\n------ FIM PILHA ---------\n");
                break;
                
            default:
                break;
        }
        
    }while(op != 0);
    
}
