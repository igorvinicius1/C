#include <stdio.h>

int main()
{
    struct horario
    {
        int hora;
        int minuto;
        int segundo;
    };
    
    struct horario hora1, *ponteiro;
    ponteiro = &hora1;
    
    ponteiro->hora = 21; //ponteiro altera os valores do hora1
    ponteiro->minuto = 11;
    ponteiro->segundo = 57;
    
    printf("%i:%i:%i", ponteiro->hora, hora1.minuto, hora1.segundo);
    printf("\n\n");
    
    struct hour
    {
        int *HORA; //guarda endereço
        int *MINUTO;
        int *SEGUNDO;
    };
    
    struct hour hoje;
    
    int h = 10, m = 20, s = 30;
    
    hoje.HORA = &h; //ponteiro recebe o endereço da variavel
    hoje.MINUTO = &m;
    hoje.SEGUNDO = &s;
    //imprimindo o valor q o ponteiro aponta
    printf("%i:%i:%i", *hoje.HORA, *hoje.MINUTO, *hoje.SEGUNDO); //para imprimir o conteudo q o ponteiro aponta só usar " * "
}
