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
    Pessoa pes;
    struct no *proximo;
}No;

typedef struct
{
    int tam;
    No *topo;
    
}Pilha;

void tamanho_Pilha(Pilha *p)
{
    p->tam = 0;
    p->topo = NULL;
}

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

void empilhar(Pilha *p)
{
    No *novo = malloc(sizeof(No)); //alocar memória sempre que houver a necessidade de um novo valor
    
    if(novo) //se alocou memoria com sucesso
    {
        novo->pes = ler_pessoa(); //pessoa salva na variavel 'p', pois ler_pessoa() retorna as infos
        novo->proximo = p->topo; //assume o topo da pilha
        p->topo = novo; //apartir do momento q as informações são alocadas, essa posição passa a ser o topo LIFO
        p->tam++;
    }
    else
    {
        printf("\n\nErro ao alocar memória\n\n");
    }
}

No* desempilhar(Pilha *p) //indireção multipla para apoio na remoção
{
    if(p != NULL)
    {
        No *remover = p->topo; //guarda o no q será removido
        p->topo = remover->proximo; //o topo passa a guardar o proximo valor da pilha
        p->tam--;
        return remover;
    }
    else
    {
        printf("\n\nNão há valor para se remover\n\n");
    }
}

void status_pilha(Pilha *p, No *aux)
{
    No *aux = p->topo; //auxiliar para contador
    
    while(aux != NULL)
    {
        imprime(aux->pes);
        aux = aux->proximo;//assume o endereço do proximo valor da pilha
    }
    
    printf("\ntam: %d\n", p->tam);
    
    return;
}

int main()
{
    No *remover;
    Pilha p;
    int op;
    
    tamanho_Pilha(&p);
    
    do
    {
        printf("\n0 -> SAIR \n1 -> EMPILHAR \n2 -> DESEMPILHAR\n3 -> IMPRIMIR \n\nOP: ");
        
        scanf("%d", &op);
        
        switch(op)
        {
            case 0:
                break;
                
            case 1:
                empilhar(&p);
                break;
                
            case 2:
                remover = desempilhar(&p); //&topo: recebe o endereço do ponteiro
                                                //remover guarda a pessoa removida
                
                if(remover != NULL)
                {
                    printf("\nelemento removido !!!\n");
                    imprime(remover->pes);
                    free(remover);
                }
                else
                {
                    printf("\nsem nó a remover\n");
                }
                
                break;
                
            case 3:
                printf("\n------ INICIO PILHA ------\n\n");
                status_pilha(&p);
                printf("\n------ FIM PILHA ---------\n");
                break;
                
            default:
                break;
        }
        
    }while(op != 0);
    
}
