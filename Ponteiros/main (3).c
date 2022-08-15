#include <stdio.h>

int main()
{
    int valor = 35;
    int *p, **pp; 
    p = &valor;
    pp = &p;
    
    printf("valor endereço: %p\n", &valor);
    printf("conteudo do ponteiro (endereço de valor): %p\n", p); //o ponteiro guarda o endereço do valor que p aponta (int valor)
    printf("conteudo do valor apontado pelo ponteiro (aponta para valor): %d\n", *p); //conteudo que existe na variavel apontada
    printf("endereço do ponteiro: %p\n", &p);
    printf("conteudo apontado pelo pp: %d\n", **pp); //indireção multipla (ponteiro p ponteiro)
    printf("endereço do pp: %p\n", &pp);
    printf("endereço que pp guarda (endereço de *p): %p", pp);
}
