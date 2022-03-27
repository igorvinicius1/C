/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
// Variavel global,criada para ser acessada por qualquer função
float memoria[5];

// Outra variavel global...
int contador = 0;

// Função criada para mostrar cada conteúdo das últimas 5 operações
void mostrarhistorico()
{
    printf("\nO histórico e suas respectivas posições...");
    
    for(int i = 0; i < 5; i++)
    {
        printf("\nPosição %d: %.2lf\n", i+1, memoria[i]);
    }
}

// Principal objetivo desta função eh armazenar na memoria cada resultado das operações (no caso as 5 últimas),
// utilizando as variaveis globais, estratégicamente criadas no começo do programa...(pois ela eh acessível por qualquer função)

void  gravahistorico(float resultado)
{
    
    memoria[contador] = resultado;
    
    contador++;
    
    if(contador == 5)
    {
        contador = 0;
    }
    
}

// É possível observar que cada operação matemática chama a função gravahistorico que guarda no vetor memoria[5] o resultado da operação

void soma()
{
    float s = 0, x, y;
    
    printf("Forneça dois números\n");
    scanf("%f %f",&x, &y);
    
    s = x + y;
    
    printf("A soma eh %.2lf\n", s);
    
    gravahistorico(s);
}

void subtracao()
{
    float sub = 0, x, y;
    
    printf("Forneça dois números\n");
    scanf("%f %f",&x, &y);
    
    sub = x - y;
    
    printf("O resultado desta subtração eh %.2lf\n", sub);
    
    gravahistorico(sub);
}

void divisao()
{
    float divi = 0, x, y;
    
    printf("Forneça dois números\n");
    scanf("%f %f",&x, &y);
    
    if(y == 0)
    {
        printf("Divisão com zero é invalida\n");
    }
    else
    {
        divi = x / y;
    
        printf("O resultado desta divisão eh %.2lf\n", divi);
    
        gravahistorico(divi);
    }
    
}

void multiplicacao()
{
    float produto = 0, x, y;
    
    printf("Forneça dois números\n");
    scanf("%f %f",&x, &y);
    
    produto = x*y;
    
    printf("O resultado da multiplicação eh %.2lf\n", produto);
    
    gravahistorico(produto);
}

void raizquadrada()
{
    float raiz1 = 0, x;
    
    printf("Forneça o número\n");
    scanf("%f", &x);
    
    raiz1 = sqrt(x);
    
    if(raiz1 >= 0)
        printf("A raíz é %.2lf \n", raiz1);
    else
        printf("Não calculo raízes negativas!!!\n");
    
    
    gravahistorico(raiz1);
}

void potencia()
{
    float pot = 0, x, y;
    printf("Forneça dois números\n");
    scanf("%f %f",&x, &y);
    
    pot = pow(x,y);
    
    printf("A potencia eh %.2lf\n", pot);
    
    gravahistorico(pot);
}

void seno()
{
    float seno1 = 0, x;
    
    printf("Forneça o número\n");
    scanf("%f", &x);
    
    seno1 = sin(x);
    
    printf("O seno desse número é %.2lf\n", seno1);
    
    gravahistorico(seno1);
    
}

void cosseno()
{
    float cosseno1 = 0, x;

    printf("Forneça o número\n");
    scanf("%f", &x);
   
    cosseno1 = cos(x);

    printf("O cosseno desse número é %.2lf\n", cosseno1);
    
    gravahistorico(cosseno1);
    
}

void logaritmo()
{
    float logaritmo1 = 0, x;
    
    printf("Forneça o número\n");
    scanf("%f", &x);
    
    logaritmo1 = log(x);

    if(logaritmo1 >= 0)
        printf("O logaritmo desse número é %.2lf\n", logaritmo1);
    else
        printf("Não calculo logaritmo negativo!!!\n");

    gravahistorico(logaritmo1);
}

void fatorial()
{
    int fat = 1, x;

    
    printf("Forneça um numero NATURAL POSITIVO\n");
    scanf("%d", &x);
    
    if(x < 0)
    {
        printf("Não existe fatorial de números negativo!!!\n");
    }
    else{
        for(fat = 1; x > 1; x--)
        {
            fat = fat * x;
        }
        printf("O fatorial desse número eh %d", fat);
        
         gravahistorico(fat);
    }
    
}


void opcao()
{
    
    int op;
    do
    {
        
    printf("\nSelecione uma das opções digitando:" 
    "\n[1] --> Adição"  
    "\n[2] --> Subtração"
    "\n[3] --> Divisão"
    "\n[4] --> Multiplicação"
    "\n[5] --> Raiz quadrada"
    "\n[6] --> Potencia"
    "\n[7] --> Seno"
    "\n[8] --> Cosseno"
    "\n[9] --> Logaritmo"
    "\n[10] --> Fatorial"
    "\n[11] --> Historico das 5 últimas operações"
    "\n[12] --> Ou aperte 12 para sair"
    "\nOperação: ");
        
    scanf("%d", &op);   
        
        switch(op)
        {
            case 1:
            {
                soma();
                break;
            }
            case 2:
            {
                subtracao();
                break;
            }
            case 3:
            {
                divisao();
                break;
            }
            case 4:
            {
                multiplicacao();
                break;
            }
            case 5:
            {
                raizquadrada();
                break;
            }
            case 6:
            {
                potencia();
                break;
            }
            case 7:
            {
                seno();
                break;
            }
            case 8:
            {
                cosseno();
                break;
            }
            case 9:
            {
                logaritmo();
                break;
            }
            case 10:
            {
                fatorial();
                break;
            }
            case 11:
            {
                mostrarhistorico();
                break;
            }
            case 12:
            {
                return;
            }
        }
    }while(op != 12);

}

// A função main só chama a funçao opcao,que "invoca" as outras funções de operações matemáticas...

int main()
{
    
    opcao();
    
}






