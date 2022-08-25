#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;
}No;

void inserirNoInicio(No **lista, int num)
{
    No *novo = malloc(sizeof(No));
    
    if(novo)
    {
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    }
    else
    {
        printf("Erro ao alocar memória");
    }
}

void inserirNoFim(No **lista, int num)
{
    No *novo = malloc(sizeof(No));
    
    if(novo) //novo != NULL
    {
        novo->valor = num;
        novo->proximo = NULL; //como está no fim, o próximo sera NULL
        
        if(*lista == NULL) //condiçaõ se a fila estiver vazia, posiciona no inicio
        {
            *lista = novo;
        }
        else
        {
            No *aux = *lista;
            
            while(aux->proximo)
            {
                aux = aux->proximo;
            }
            
            aux->proximo = novo; //achou o último, pegou o proximo do ultimo (aux->proximo), e inseriu o novo (que passou a ser o ultimo)
        }
    }
    else
    {
        printf("Erro ao alocar memória");
    }
}

void inserirNoMeio(No **lista, int num, int referencia) //referencia, numero q estará logo atras do valor a ser inserido
{
    No *novo = malloc(sizeof(No));
    
    if(novo)
    {
        novo->valor = num;
        
        if(*lista == NULL)
        {
            novo->proximo = NULL;
            *lista = novo;
        }
        else
        {
            No *aux = *lista;
            
            while(aux->valor != referencia && aux->proximo)
            {
                aux = aux->proximo;
            }
            
            novo->proximo = aux->proximo; //proximo do "int referencia"
            aux->proximo = novo; //posiciona logo após o int referencia
            
        }
    }
    else
    {
        printf("Erro ao alocar memória");
    }
}

void imprimeLista(No *lista)
{
    printf("\n\tLISTA: ");
    
    while(lista)
    {
        printf(" %d", lista->valor);
        lista = lista->proximo;
    }
    
    printf("\n\n");
}

void remover(No **lista, int referencia)
{
    No *remover = NULL;
    No *aux = *lista;
    
    if(*lista)
    {
        if((*lista)->valor == referencia) //condição de lista com apenas um nó
        {
            remover = *lista;
            *lista = remover->proximo; //o primeiro nó aponta aponta para NULL
        }
        while(aux->proximo && aux->proximo->valor != referencia)
        {
            aux = aux->proximo;
        }
        
        if(aux->proximo)
        {
            remover = aux->proximo;
            aux->proximo = remover->proximo;
        }
    }
    
    free(remover);//liberando memoria
}

int main()
{
    No *lista = NULL;
    int num, op, referencia;
    
    do
    {
        printf("\n 0-Sair\n 1-Inserir no Inicio\n 2-Inserir no Fim\n 3-Inserir no Meio\n 4-remover\n 5-Imprimir Lista");
        printf("\n OP: ");
        scanf("%d", &op);
        
        switch(op)
        {
            case 1:
                printf("\nValor: ");
                scanf("%d", &num);
                inserirNoInicio(&lista,num);
                break;
                
            case 2:
                printf("\nValor: ");
                scanf("%d", &num);
                inserirNoFim(&lista,num);
                break;
                
            case 3:
                printf("\nValor: ");
                scanf("%d", &num);
                printf("\nReferencia: ");
                scanf("%d", &referencia);
                inserirNoMeio(&lista,num,referencia);
                break;
                
            case 4:
                printf("\nValor: ");
                scanf("%d", &referencia);
                remover(&lista, referencia);
                imprimeLista(lista);
                break;
                
            case 5:
                imprimeLista(lista);
                break;
            
            default:
                if(op != 0)
                {
                    printf("\nOpção inválida\n");
                }
        }
        
    }while(op != 0);
}
