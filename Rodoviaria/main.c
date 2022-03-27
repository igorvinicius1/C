#include <stdio.h>
#include <stdlib.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define BRIGHT "\x1b[1m"
#define RESET "\x1b[0m"


int venda(int vpj[25], int vpc[25], int *sp, int *cur, int *flor, int *tmc, int *tmj)
{
    int e, p, d, g, s = 0, cont = 1, cont2 = 1, cont3 = 1;
   
    printf(BRIGHT GREEN"\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\nMUITO OBRIGADO POR NOS ESCOLHER PARA SUA VIAGEM, POR OBSÉQUIO ESCOLHA SEU DESTINO DIGITANDO...\n"RESET
    BRIGHT"\n1 === > SÃO PAULO R$28,00\n"RESET
    BRIGHT"2 === > CURITIBA R$159,00\n"RESET
    BRIGHT"3 === > FLORIANÓPOLIS R$188,00.\n"RESET
    BRIGHT YELLOW"\nOPÇÃO === > "RESET);
    scanf("%d", &d);
   
    /*AVALIA A LOTAÇÃO DO BUZÃO*/
    if(s >= 48)
    {
        printf("INFELIZMENTE ÔNIBUS LOTADO ;' (\n");
    }
   
   
    /*AVALIA DESTINO*/
    while(cont2 != 0)
    {
       
       
        if(d == 1 || d == 2 || d == 3)
        {
            cont2 = 0;
        }
       
        else
        {
            printf(BRIGHT RED"\nOPÇÃO NÃO VÁLIDA, POR FAVOR DIGITE NOVAMENTE...\n"
            "\nOPÇÃO === > "RESET);
            scanf("%d", &d);
           
            cont++;
        }
    }
    
   
    /*CONTA QUANTAS PASSAGENS CADA DESTINO POSSUÍ, PARA CALCULAR O MONTANTE*/
    if(d == 1)
    {
        *sp+=1;
    }
    else if(d == 2)
    {
        *cur+=1;
    }
    else if(d == 3)
    {
        *flor+=1;
    }
   
    printf(BRIGHT YELLOW"\nAGORA RESERVE SEU LUGAR NO ÔNIBUS DIGITANDO 1 PARA CORREDOR OU 2 PARA JANELA E ESCOLHA UMA POLTRONA DE NUMERAÇÃO (1 - 24)\n\n");
    printf("CORREDOR(1) JANELA(2) === > ");
    scanf("%d", &e);
    printf("POLTRONA(1 - 24) === > "RESET);
    scanf("%d", &p);
   
    /*AVALIA CORREDOR E JANELA*/
    while(cont != 0)
    {
        if(e == 1 || e == 2)
        {
            cont = 0;
           
        }
        else
        {
            printf(BRIGHT RED"\nOPÇÃO ' %d ' NÃO VÁLIDA, DIGITE NOVAMENTE...CORREDOR(1) JANELA(2)\n", e);
            printf("OPÇÃO === > "RESET);
            scanf("%d", &e);
            cont++;
        }
    }
    
    printf("                %d               %d", *tmj, *tmc);
    
    /*SE O TMJ OU O TMC ESTIVER > 24 SIGNIFICA QUE O CORREDOR OU A JANELA ESTÃO TODOS OCUPADOS*/
    if(*tmj > 24)
    {
        printf(BRIGHT RED"\nAS POLTRONAS DA JANELA ESTÃO TODAS OCUPADAS, POR FAVOR TENTE NOVAMENTE...\n\n"RESET);
        
        return 0;
    }
    else if(*tmc > 24)
    {
        printf(BRIGHT RED"\nAS POLTRONAS DO CORREDOR ESTÃO TODAS OCUPADAS, POR FAVOR TENTE NOVAMENTE...\n\n"RESET);
        
        return 0;
    }
   
    /*AVALIA POLTRONA*/
    while(cont3 != 0)
    {
        /*CONTA O VETOR CORREDOR E O VETOR JANELA PARA VER SE ESTÃO LOTADOS*/
        if(p >= 1 && p <= 24)
        {
            cont3 = 0;
            /*if(e == 1)
            {
                
            }
            else
            {
                *tmj+=1;
            }*/
           
        }
        else
        {
            printf(BRIGHT RED"\nOPÇÃO ' %d ' PARA POLTRONA NÃO VÁLIDA, DIGITE NOVAMENTE\n", p);
            printf("OPÇÃO === > "RESET);
            scanf("%d", &p);
            cont3++;
        }
        if(vpj[p] == 1 && vpc[p] == 1)
        {
            printf(BRIGHT RED"\nPOLTRONA OCUPADA, TENTE OUTRA\n"
            "POLTRONA === > "RESET);
            scanf("%d", &p);
            cont3++;
        }
        if(e == 1 && vpc[p] == 1)
        {
            printf(BRIGHT RED"\nPOLTRONA OCUPADA, TENTE OUTRA\n"
            "POLTRONA === > "RESET);
            scanf("%d", &p);
            cont3++;
        }
        if(e == 2 && vpj[p] == 1)
        {
            printf(BRIGHT RED"\nPOLTRONA OCUPADA, TENTE OUTRA\n"
            "POLTRONA === > "RESET);
            scanf("%d", &p);
            cont3++;
        }
       
    }
   
    /*CONDIÇÃO QUE OCUPA A POLTRONA*/
    if(e == 1)
    {
        vpc[p] = 1;
        *tmc+=1;
    }
    else
    {
        vpj[p] = 1;
        *tmj+=1;
    }
   
    s = s + 1;
   
    printf(BRIGHT GREEN"\nTUDO REALIZADO COM SUCESSO, BOA VIAGEM!!!\n");
    printf("PARA RETORNAR AO MENU DIGITE QUALQUER NÚMERO...\n"RESET);
    scanf("%d", &g);
   
}

int mapa(int vpj[25], int vpc[25])
{
    int n;
   
    printf(BRIGHT"\nJANELA        CORREDOR\n");
   
    for(int i = 1; i <= 24; i++)
    {
        if(vpj[i] == 0 && vpc[i] == 0)
        {
            printf(BRIGHT GREEN"%d - LIVRE    %d - LIVRE\n"RESET, i, i);
        }
        else if(vpj[i] == 1 && vpc[i] == 0)
        {
            printf(BRIGHT YELLOW"%d - OCUPADO    %d - LIVRE\n"RESET, i, i);
        }
        else if(vpj[i] == 1 && vpc[i] == 1)
        {
            printf(BRIGHT RED"%d - OCUPADO    %d - OCUPADO\n"RESET, i, i);
        }
        else if(vpj[i] == 0 && vpc[i] == 1)
        {
            printf(BRIGHT YELLOW"%d - LIVRE      %d - OCUPADO\n"RESET, i, i);
        }
    }
   
    printf(BRIGHT GREEN"\nPARA RETORNAR AO MENU DIGITE QUALQUER NÚMERO\n"RESET);
    scanf("%d", &n);

}

int montante(int *sp, int *cur, int *flor)
{
    printf(BRIGHT"\nO MONTANTE OBTIDO PELA EMPRESA TENDO EM VISTA O DESTINO FICOU:"
    "\nSÃO PAULOO : %d,00\n", *sp * 28);
    printf("CURITIBA : %d,00\n", *cur * 159);
    printf("FLORIANÓPOLIS : %d,00\n"RESET, *flor * 188);
    printf(BRIGHT GREEN"\nMONTANTE TOTAL : %d,00\n"RESET, (*sp * 28) + (*cur * 159) + (*flor * 188));
   
    printf("\n\n");
}

int main()
{
    int vpj[25] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, vpc[25] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   
    int op;
   
    int sp = 0, cur = 0, flor = 0, tmc = 1, tmj = 1;
   
    printf(BRIGHT GREEN"* * * * * * * * * * * * * * * * * * * * * * * * BEM VINDO(A) * * * * * * * * * * * * * * * * * * * * * * * *\n\n"RESET);
   
    do
    {
       
        printf(BRIGHT"POR FAVOR ESCOLHA UMA DAS SEGUINTES OPÇÕES...\n"
        "1 === > COMPRA DE PASSAGENS\n"
        "2 === > EXIBIR MAPA DAS POLTRONAS DO ÔNIBUS\n"
        "3 === > MONTANTE OBTIDO PELA EMPRESA\n"
        "4 === > ENCERRAR\n");
       
        printf("\nOPÇÃO === > "RESET);
        scanf("%d", &op);
       
        switch(op)
        {
            case 1:
            {
                venda(vpj,vpc,&sp,&cur,&flor,&tmc,&tmj);
                break;
            }
           
            case 2:
            {
                mapa(vpj,vpc);
                break;
            }
           
            case 3:
            {
                montante(&sp,&cur,&flor);
                break;
            }
        }
       
    }while(op != 4);
   

    return 0;
}


