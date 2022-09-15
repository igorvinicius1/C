#include <stdio.h>
#include <stdlib.h>

//ABB com as principais manipulações de inserção, busca, exclusão (dentre outros)

typedef struct no
{
    int conteudo;
    struct no *esquerda;
    struct no *direita;
}No;

typedef struct
{
    No *raiz;
    int tam;
}ArvB;

void inserirDireita(No *no, int valor);

void inserirEsquerda(No *no, int valor)
{
    if(no->esquerda == NULL) //condição em que a esquerda está vazia
    {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->direita = NULL;
        novo->esquerda = NULL;
        no->esquerda = novo;
    }
    else
    {
        if(valor < no->esquerda->conteudo)
        {
            inserirEsquerda(no->esquerda, valor); //chamada recursiva
        }
        if(valor > no->esquerda->conteudo)
        {
            inserirDireita(no->esquerda, valor);
        }
    }
}

void inserirDireita(No *no, int valor)
{
    if(no->direita == NULL)
    {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->direita = novo;
    }
    else
    {
        if(valor < no->direita->conteudo)
        {
            inserirEsquerda(no->direita, valor);
        }
        if(valor > no->direita->conteudo)
        {
            inserirDireita(no->direita, valor);
        }
    }
}

void inserir(ArvB *arv, int valor)
{
    if(arv->raiz == NULL)
    {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        arv->raiz = novo;
    }
    else
    {
        if(valor < arv->raiz->conteudo)
        {
            inserirEsquerda(arv->raiz, valor);
        }
        if(valor > arv->raiz->conteudo)
        {
            inserirDireita(arv->raiz, valor);
        }
    }
    
    arv->tam = 1 + arv->tam; //atualiza quatidade de nós
}

int buscar(No *raiz, int key)
{
    if(raiz == NULL)
    {
        printf("Elemento não encontrado!!!\n");
        return 0;
    }
    else
    {
        if(raiz->conteudo == key)
        {
            printf("Elemento encontrado!!!\n");
            return 0;
        }
        else
        {
            if(key > raiz->conteudo)
            {
                buscar(raiz->direita, key);
            }
            if(key < raiz->conteudo)
            {
                buscar(raiz->esquerda, key);
            }
        }
    }
}

void imprimir(No *raiz)
{
    if(raiz)
    {
        imprimir(raiz->esquerda);
        printf(" %d ", raiz->conteudo);
        imprimir(raiz->direita);
    }
    
}

int main()
{
    ArvB arv;
    arv.raiz = NULL;
    arv.tam = 0;
    int valor, op, key;
    
    do
    {
        printf("\n 0 - Sair\n 1 - Inserir\n 2 - Imprimir\n 3 - Buscar\n ");
        printf("OP: ");
        scanf("%d", &op);
        
        switch(op)
        {
            case 0:
                break;
                
            case 1:
                printf("\tValor: ");
                scanf("%d", &valor);
                inserir(&arv,valor);
                break;
                
            case 2:
                printf("\n");
                printf("Quantidade de nós: %d", arv.tam);
                printf("\n");
                imprimir(arv.raiz);
                printf("\n");
                break;
                
            case 3:
                printf("\nElemento a ser buscado: ");
                scanf("%d", &key);
                buscar(arv.raiz,key);
                printf("\n");
                break;
                
            default:
                printf("\nOpção inváilida\n");
        }
        
    }while(op != 0);
}
