#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define BRIGHT "\x1b[1m"
#define RESET "\x1b[0m"

int mapa(int m1[11][11])
{
    int g;

    for(g = 1; g <= 10; g++)
    {
        printf(BRIGHT CYAN"     %d"RESET, g);
    }

    g = 1;

    printf("\n\n");

    for(int i = 1; i <= 10; i++)
    {
        if(g == 10)
        {
            printf(BRIGHT MAGENTA"%d"RESET, g);
        }
        else
        {
            printf(BRIGHT MAGENTA" %d"RESET, g);
        }

        g++;

        for(int j = 1; j <= 10; j++)
        {
            if(i == 9)
            {
                if(m1[i][j] == 0)
                {
                    printf(BRIGHT"     %d"RESET, m1[i][j]);
                }
                else if(m1[i][j] == 1)
                {
                    printf(BRIGHT BLUE"     %d"RESET, m1[i][j]);
                }
                else if(m1[i][j] == 2)
                {
                    printf(BRIGHT GREEN"     %d"RESET, m1[i][j]);
                }
                else if(m1[i][j] == 3)
                {
                    printf(BRIGHT YELLOW"     %d"RESET, m1[i][j]);
                }
                else if(m1[i][j] == 4)
                {
                    printf(BRIGHT RED"     %d"RESET, m1[i][j]);
                }

            }
            else
            {
                if(m1[i][j] == 0)
                {
                    printf(BRIGHT"     %d"RESET, m1[i][j]);
                }
                else if(m1[i][j] == 1)
                {
                    printf(BRIGHT BLUE"     %d"RESET, m1[i][j]);
                }
                else if(m1[i][j] == 2)
                {
                    printf(BRIGHT GREEN"     %d"RESET, m1[i][j]);
                }
                else if(m1[i][j] == 3)
                {
                    printf(BRIGHT YELLOW"     %d"RESET, m1[i][j]);
                }
                else if(m1[i][j] == 4)
                {
                    printf(BRIGHT RED"     %d"RESET, m1[i][j]);
                }

            }

        }

        printf("\n");
    }
}

int mapa2(int m2[11][11])
{
    int g;

    for(g = 1; g <= 10; g++)
    {
        printf(BRIGHT CYAN"     %d"RESET, g);
    }

    g = 1;

    printf("\n\n");

    for(int i = 1; i <= 10; i++)
    {
        if(g == 10)
        {
            printf(BRIGHT MAGENTA"%d"RESET, g);
        }
        else
        {
            printf(BRIGHT MAGENTA" %d"RESET, g);
        }

        g++;

        for(int j = 1; j <= 10; j++)
        {
            if(i == 9)
            {
                if(m2[i][j] == 0)
                {
                    printf(BRIGHT"     %d"RESET, m2[i][j]);
                }
                else if(m2[i][j] == 1)
                {
                    printf(BRIGHT BLUE"     %d"RESET, m2[i][j]);
                }
                else if(m2[i][j] == 2)
                {
                    printf(BRIGHT GREEN"     %d"RESET, m2[i][j]);
                }
                else if(m2[i][j] == 3)
                {
                    printf(BRIGHT YELLOW"     %d"RESET, m2[i][j]);
                }
                else if(m2[i][j] == 4)
                {
                    printf(BRIGHT RED"     %d"RESET, m2[i][j]);
                }

            }
            else
            {
                if(m2[i][j] == 0)
                {
                    printf(BRIGHT"     %d"RESET, m2[i][j]);
                }
                else if(m2[i][j] == 1)
                {
                    printf(BRIGHT BLUE"     %d"RESET, m2[i][j]);
                }
                else if(m2[i][j] == 2)
                {
                    printf(BRIGHT GREEN"     %d"RESET, m2[i][j]);
                }
                else if(m2[i][j] == 3)
                {
                    printf(BRIGHT YELLOW"     %d"RESET, m2[i][j]);
                }
                else if(m2[i][j] == 4)
                {
                    printf(BRIGHT RED"     %d"RESET, m2[i][j]);
                }

            }

        }

        printf("\n");
    }
}

int mapam1m(int m1m[11][11])
{
    int g;

    for(g = 1; g <= 10; g++)
    {
        printf(BRIGHT CYAN"     %d"RESET, g);
    }

    g = 1;

    printf("\n\n");

    for(int i = 1; i <= 10; i++)
    {
        if(g == 10)
        {
            printf(BRIGHT MAGENTA"%d"RESET, g);
        }
        else
        {
            printf(BRIGHT MAGENTA" %d"RESET, g);
        }

        g++;

        for(int j = 1; j <= 10; j++)
        {
            if(i == 9)
            {
                if(m1m[i][j] == 0)
                {
                    printf(BRIGHT"     %d"RESET, m1m[i][j]);
                }
                else if(m1m[i][j] == 7)
                {
                    printf(BRIGHT BLUE"     %d"RESET, m1m[i][j]);
                }
                else if(m1m[i][j] == 8)
                {
                    printf(BRIGHT RED"     %d"RESET, m1m[i][j]);
                }

            }
            else
            {
                if(m1m[i][j] == 0)
                {
                    printf(BRIGHT"     %d"RESET, m1m[i][j]);
                }
                else if(m1m[i][j] == 7)
                {
                    printf(BRIGHT BLUE"     %d"RESET, m1m[i][j]);
                }
                else if(m1m[i][j] == 8)
                {
                    printf(BRIGHT RED"     %d"RESET, m1m[i][j]);
                }

            }

        }

        printf("\n");
    }
}

int mapam2m(int m2m[11][11])
{
    int g;

    for(g = 1; g <= 10; g++)
    {
        printf(BRIGHT CYAN"     %d"RESET, g);
    }

    g = 1;

    printf("\n\n");

    for(int i = 1; i <= 10; i++)
    {
        if(g == 10)
        {
            printf(BRIGHT MAGENTA"%d"RESET, g);
        }
        else
        {
            printf(BRIGHT MAGENTA" %d"RESET, g);
        }

        g++;

        for(int j = 1; j <= 10; j++)
        {
            if(i == 9)
            {
                if(m2m[i][j] == 0)
                {
                    printf(BRIGHT"     %d"RESET, m2m[i][j]);
                }
                else if(m2m[i][j] == 7)
                {
                    printf(BRIGHT BLUE"     %d"RESET, m2m[i][j]);
                }
                else if(m2m[i][j] == 8)
                {
                    printf(BRIGHT RED"     %d"RESET, m2m[i][j]);
                }

            }
            else
            {
                if(m2m[i][j] == 0)
                {
                    printf(BRIGHT"     %d"RESET, m2m[i][j]);
                }
                else if(m2m[i][j] == 7)
                {
                    printf(BRIGHT BLUE"     %d"RESET, m2m[i][j]);
                }
                else if(m2m[i][j] == 8)
                {
                    printf(BRIGHT RED"     %d"RESET, m2m[i][j]);
                }

            }

        }

        printf("\n");
    }
}

int alocar(int m1[11][11], int m2[11][11], int m1m[11][11], int m2m[11][11])
{
    int n, d, cont = 0, full = 0, v[5], v2[5], z, x, y, w = 0, h = 0, zz = 1;

    printf("\n\n");

    printf(BRIGHT GREEN"* * * * * PRIMEIRO ALMIRANTE POSICIONE SUA ESQUADRA * * * * *\n\n");
    printf("COMPOSIÇÃO DA ESQUADRA E SUAS RESPECTIVAS CORES 1X PORTA-AVIÕES(AZUL), 2X NAVIO-TANQUE(VERDE), 3X CONTRA-TORPEDEIROS(AMARELO), 4X SUBMARINOS(VERMELHO)\n\n"RESET);
    printf(BRIGHT CYAN"COORDENADAS DO 'X' ESTÃO EM AZUL CLARO\n"RESET);
    printf(BRIGHT MAGENTA"COORDENADAS DO 'Y' ESTÃO EM ROXO CLARO\n\n"RESET);

    mapa(m1);

    printf(BRIGHT"\nPRIMEIRO ALMIRANTE COMEÇE!!!...POSICIONE SEU PORTA-AVIÕES"RESET);

    printf("\n\n");

    while(zz >= 1)
    {

        printf(BRIGHT"SE QUISER POSICIONAR NA VERTICAL DIGITE 1 E PARA HORIZONTAL DIGITE 2.\n"RESET);
        printf(BRIGHT"OPÇÃO ===> "RESET);
        scanf("%d", &d);

        if(d == 1)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x > 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y >= 8)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y < 8)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }

            m1[y][x] = 1;

            for(int k = 1; k < 4; k++)
            {
                m1[y+k][x] = 1;
            }
            zz = 0;
            printf("\n");
        }
        else if(d == 2)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x >= 8)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x < 8)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y >= 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }

            m1[y][x] = 1;

            for(int k = 1; k < 4; k++)
            {
                m1[y][x+k] = 1;
            }
            zz = 0;
            printf("\n");
        }
        else
        {
            printf(BRIGHT RED"\nNÚMERO DA OPÇÃO INCORRETO, FAÇA DE NOVO!\n"RESET);
            zz++;
        }

    }

    cont = 0;
    mapa(m1);

    //AGORA 2 NAVIOS-TANQUE
    printf(BRIGHT"\nAGORA NAVIOS-TANQUE...LEMBRE-SE SÃO DOIS...\n"RESET);


    for(int i = 1; i <= 2; i++)
    {
        if(i == 1)
        {
            printf(BRIGHT"\nPRIMEIRO NAVIO...\n"RESET);
        }
        else
        {
            printf("\n");
            mapa(m1);
            printf("\n");
            printf(BRIGHT"\nSEGUNDO NAVIO...\n"RESET);
        }

        printf(BRIGHT"SE QUISER POSICIONAR NA VERTICAL DIGITE 1 E PARA HORIZONTAL DIGITE 2.\n"RESET);
        printf(BRIGHT"OPÇÃO ===> "RESET);
        scanf("%d", &d);

        if(d == 1)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x > 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y >= 9)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y < 9)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            //AVALIA COORDENADAS
            if(m1[y][x] == 0 && m1[y+1][x] == 0 && m1[y+2][x] == 0)
            {
                m1[y][x] = 2;

                for(int k = 1; k < 3; k++)
                {
                    m1[y+k][x] = 2;
                }
                printf("\n");
            }
            else
            {
                printf(BRIGHT RED"\nPRESTE ATENÇÃO NAS COORDENADAS BIZONHO!!! UM NAVIO NÃO PODE SOBREPOR O OUTRO, COMEÇE DE NOVO\n"RESET);
                i--;
            }
            cont = 0;
            printf("\n");
        }
        else if(d == 2)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x >= 9)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x < 9)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y > 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }

            if(m1[y][x] == 0 && m1[y][x+1] == 0 && m1[y][x+2] == 0)
            {
                m1[y][x] = 2;

                for(int k = 1; k < 3; k++)
                {
                    m1[y][x+k] = 2;
                }
                printf("\n");
            }
            else
            {
               printf(BRIGHT RED"\nPRESTE ATENÇÃO NAS COORDENADAS BIZONHO!!! UM NAVIO NÃO PODE SOBREPOR O OUTRO, COMEÇE DE NOVO\n"RESET);
                i--;
            }
            printf("\n");
        }
        else
        {
            printf(BRIGHT RED"\nNÚMERO DA OPÇÃO INCORRETO, FAÇA DE NOVO!\n"RESET);
            i--;
        }

    }

    mapa(m1);
    cont = 0;

    printf(BRIGHT"\nAGORA CONTRATORPEDEIROS...LEMBRE-SE SÃO TRÊS...\n"RESET);

    for(int i = 1; i <= 3; i++)
    {
        if(i == 1)
        {
            printf(BRIGHT"\nPRIMEIRO NAVIO...\n"RESET);
        }
        else if(i == 2)
        {
            printf("\n");
            mapa(m1);
            printf("\n");
            printf(BRIGHT"\nSEGUNDO NAVIO...\n"RESET);
        }
        else
        {
            printf("\n");
            mapa(m1);
            printf("\n");
            printf(BRIGHT"\nTERCEIRO NAVIO...\n"RESET);
        }

        printf(BRIGHT"SE QUISER POSICIONAR NA VERTICAL DIGITE 1 E PARA HORIZONTAL DIGITE 2.\n"RESET);
        printf(BRIGHT"OPÇÃO ===> "RESET);
        scanf("%d", &d);

        if(d == 1)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x > 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y >= 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y < 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            //AVALIA COORDENADAS
            if(m1[y][x] == 0 && m1[y+1][x] == 0)
            {
                m1[y][x] = 3;

                for(int k = 1; k < 2; k++)
                {
                    m1[y+k][x] = 3;
                }
                printf("\n");
            }
            else
            {
                printf(BRIGHT RED"\nPRESTE ATENÇÃO NAS COORDENADAS BIZONHO!!! UM NAVIO NÃO PODE SOBREPOR O OUTRO, COMEÇE DE NOVO\n"RESET);
                i--;
            }
            cont = 0;
            printf("\n");
        }
        else if(d == 2)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x >= 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x < 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y > 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }

            if(m1[y][x] == 0 && m1[y][x+1] == 0)
            {
                m1[y][x] = 3;

                for(int k = 1; k < 2; k++)
                {
                    m1[y][x+k] = 3;
                }
                printf("\n");
            }
            else
            {
               printf(BRIGHT RED"\nPRESTE ATENÇÃO NAS COORDENADAS BIZONHO!!! UM NAVIO NÃO PODE SOBREPOR O OUTRO, COMEÇE DE NOVO\n"RESET);
                i--;
            }
            printf("\n");
        }
        else
        {
            printf(BRIGHT RED"\nNÚMERO DA OPÇÃO INCORRETO, FAÇA DE NOVO!\n"RESET);
            i--;
        }

    }

    mapa(m1);
    cont = 0;

    printf(BRIGHT"\nAGORA SUBMARINOS...LEMBRE-SE SÃO QUATRO...\n"RESET);

    for(int i = 0; i < 4; i++)
    {
        if(i == 0)
        {
            printf(BRIGHT"\nPRIMEIRO SUBMARINO...\n"RESET);
        }
        else if(i == 1)
        {
            printf("\n");
            mapa(m1);
            printf("\n");
            printf(BRIGHT"\nSEGUNDO SUBMARINO...\n"RESET);
        }
        else if(i == 2)
        {
            printf("\n");
            mapa(m1);
            printf("\n");
            printf(BRIGHT"\nTERCEIRO SUBMARINO...\n"RESET);
        }
        else
        {
            printf("\n");
            mapa(m1);
            printf("\n");
            printf(BRIGHT"\nQUARTO SUBMARINO...\n"RESET);
        }

        printf(BRIGHT"\nCOORDENADAS...\n"RESET);
        printf(BRIGHT"X ===> "RESET);
        scanf("%d", &x);
        printf(BRIGHT"Y ===> "RESET);
        scanf("%d", &y);
        if(y > 10 || y <= 0 || x > 10 || x <= 0)
        {
            printf(BRIGHT RED"\n\nCOORDENADA INVÁLIDA FAÇA DE NOVO!!!\n\n"RESET);
            i--;
            m1[y][x] = 0;
        }
        else if(m1[y][x] != 0)
        {
            printf(BRIGHT RED"\nPOSIÇÃO JÁ OCUPADA!!! TENTE OUTRA...\n"RESET);
            i--;
        }
        else
        {
            m1[y][x] = 4;
        }

    }

    mapa(m1);
    printf("\n\n");

    /////////////////////////////////////////////////////////////////////////////////////////

    printf(BRIGHT"SEGUNDO ALMIRANTE, AGORA É A SUA VEZ...POSICIONE SEU PORTA-AVIÕES"RESET);

    printf("\n\n");

    zz = 1;

    while(zz >= 1)
    {

        printf(BRIGHT"SE QUISER POSICIONAR NA VERTICAL DIGITE 1 E PARA HORIZONTAL DIGITE 2.\n"RESET);
        printf(BRIGHT"OPÇÃO ===> "RESET);
        scanf("%d", &d);

        if(d == 1)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x > 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y >= 8)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y < 8)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }

            m2[y][x] = 1;

            for(int k = 1; k < 4; k++)
            {
                m2[y+k][x] = 1;
            }
            zz = 0;
            printf("\n");
        }
        else if(d == 2)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x >= 8)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x < 8)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y >= 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }

            m2[y][x] = 1;

            for(int k = 1; k < 4; k++)
            {
                m2[y][x+k] = 1;
            }
            zz = 0;
            printf("\n");
        }
        else
        {
            printf(BRIGHT RED"\nNÚMERO DA OPÇÃO INCORRETO, FAÇA DE NOVO!\n"RESET);
            zz++;
        }

    }

    cont = 0;
    mapa2(m2);

    //AGORA 2 NAVIOS-TANQUE
    printf(BRIGHT"\nAGORA NAVIOS-TANQUE...LEMBRE-SE SÃO DOIS...\n"RESET);


    for(int i = 1; i <= 2; i++)
    {
        if(i == 1)
        {
            printf(BRIGHT"\nPRIMEIRO NAVIO...\n"RESET);
        }
        else
        {
            printf("\n");
            mapa2(m2);
            printf("\n");
            printf(BRIGHT"\nSEGUNDO NAVIO...\n"RESET);
        }

        printf(BRIGHT"SE QUISER POSICIONAR NA VERTICAL DIGITE 1 E PARA HORIZONTAL DIGITE 2.\n"RESET);
        printf(BRIGHT"OPÇÃO ===> "RESET);
        scanf("%d", &d);

        if(d == 1)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x > 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y >= 9)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y < 9)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            //AVALIA COORDENADAS
            if(m2[y][x] == 0 && m2[y+1][x] == 0 && m2[y+2][x] == 0)
            {
                m2[y][x] = 2;

                for(int k = 1; k < 3; k++)
                {
                    m2[y+k][x] = 2;
                }
                printf("\n");
            }
            else
            {
                printf(BRIGHT RED"\nPRESTE ATENÇÃO NAS COORDENADAS BIZONHO!!! UM NAVIO NÃO PODE SOBREPOR O OUTRO, COMEÇE DE NOVO\n"RESET);
                i--;
            }
            cont = 0;
            printf("\n");
        }
        else if(d == 2)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x >= 9)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x < 9)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y > 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }

            if(m2[y][x] == 0 && m2[y][x+1] == 0 && m2[y][x+2] == 0)
            {
                m2[y][x] = 2;

                for(int k = 1; k < 3; k++)
                {
                    m2[y][x+k] = 2;
                }
                printf("\n");
            }
            else
            {
               printf(BRIGHT RED"\nPRESTE ATENÇÃO NAS COORDENADAS BIZONHO!!! UM NAVIO NÃO PODE SOBREPOR O OUTRO, COMEÇE DE NOVO\n"RESET);
                i--;
            }
            printf("\n");
        }
        else
        {
            printf(BRIGHT RED"\nNÚMERO DA OPÇÃO INCORRETO, FAÇA DE NOVO!\n"RESET);
            i--;
        }

    }

    mapa2(m2);
    cont = 0;

    printf(BRIGHT"\nAGORA CONTRATORPEDEIROS...LEMBRE-SE SÃO TRÊS...\n"RESET);

    for(int i = 1; i <= 3; i++)
    {
        if(i == 1)
        {
            printf(BRIGHT"\nPRIMEIRO NAVIO...\n"RESET);
        }
        else if(i == 2)
        {
            printf("\n");
            mapa2(m2);
            printf("\n");
            printf(BRIGHT"\nSEGUNDO NAVIO...\n"RESET);
        }
        else
        {
            printf("\n");
            mapa2(m2);
            printf("\n");
            printf(BRIGHT"\nTERCEIRO NAVIO...\n"RESET);
        }

        printf(BRIGHT"SE QUISER POSICIONAR NA VERTICAL DIGITE 1 E PARA HORIZONTAL DIGITE 2.\n"RESET);
        printf(BRIGHT"OPÇÃO ===> "RESET);
        scanf("%d", &d);

        if(d == 1)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x > 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y >= 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y < 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            //AVALIA COORDENADAS
            if(m2[y][x] == 0 && m2[y+1][x] == 0)
            {
                m2[y][x] = 3;

                for(int k = 1; k < 2; k++)
                {
                    m2[y+k][x] = 3;
                }
                printf("\n");
            }
            else
            {
                printf(BRIGHT RED"\nPRESTE ATENÇÃO NAS COORDENADAS BIZONHO!!! UM NAVIO NÃO PODE SOBREPOR O OUTRO, COMEÇE DE NOVO\n"RESET);
                i--;
            }
            cont = 0;
            printf("\n");
        }
        else if(d == 2)
        {
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
            if(x <= 0 || x >= 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"X ===> "RESET);
                scanf("%d", &x);

                if(x > 0 && x < 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
            if(y <= 0 || y > 10)
            {
                cont = 1;
            }
            while(cont >= 1)
            {
                printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                printf(BRIGHT"Y ===> "RESET);
                scanf("%d", &y);

                if(y > 0 && y <= 10)
                {
                    printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                    cont = 0;
                }
                else
                {
                    cont++;
                }
            }

            if(m2[y][x] == 0 && m2[y][x+1] == 0)
            {
                m2[y][x] = 3;

                for(int k = 1; k < 2; k++)
                {
                    m2[y][x+k] = 3;
                }
                printf("\n");
            }
            else
            {
               printf(BRIGHT RED"\nPRESTE ATENÇÃO NAS COORDENADAS BIZONHO!!! UM NAVIO NÃO PODE SOBREPOR O OUTRO, COMEÇE DE NOVO\n"RESET);
                i--;
            }
            printf("\n");
        }
        else
        {
            printf(BRIGHT RED"\nNÚMERO DA OPÇÃO INCORRETO, FAÇA DE NOVO!\n"RESET);
            i--;
        }

    }

    mapa2(m2);
    cont = 0;

    printf(BRIGHT"\nAGORA SUBMARINOS...LEMBRE-SE SÃO QUATRO...\n"RESET);

    for(int i = 0; i < 4; i++)
    {
        if(i == 0)
        {
            printf(BRIGHT"\nPRIMEIRO SUBMARINO...\n"RESET);
        }
        else if(i == 1)
        {
            printf("\n");
            mapa2(m2);
            printf("\n");
            printf(BRIGHT"\nSEGUNDO SUBMARINO...\n"RESET);
        }
        else if(i == 2)
        {
            printf("\n");
            mapa2(m2);
            printf("\n");
            printf(BRIGHT"\nTERCEIRO SUBMARINO...\n"RESET);
        }
        else
        {
            printf("\n");
            mapa2(m2);
            printf("\n");
            printf(BRIGHT"\nQUARTO SUBMARINO...\n"RESET);
        }

        printf(BRIGHT"\nCOORDENADAS...\n"RESET);
        printf(BRIGHT"X ===> "RESET);
        scanf("%d", &x);
        printf(BRIGHT"Y ===> "RESET);
        scanf("%d", &y);
        if(y > 10 || y <= 0 || x > 10 || x <= 0)
        {
            printf(BRIGHT RED"\n\nCOORDENADA INVÁLIDA FAÇA DE NOVO!!!\n\n"RESET);
            i--;
            m2[y][x] = 0;
        }
        else if(m2[y][x] != 0)
        {
            printf(BRIGHT RED"\nPOSIÇÃO JÁ OCUPADA!!! TENTE OUTRA...\n"RESET);
            i--;
        }
        else
        {
            m2[y][x] = 4;
        }

    }

    mapa2(m2);
    printf("\n\n");
    printf(BRIGHT GREEN"NAVIOS POSICIONADOS!!! ALMIRANTES COMEÇEM O JOGO!"RESET);
    printf("\n\n");
    opcao(m1, m2, m1m, m2m);

}

int iniciar(int m1[11][11], int m2[11][11], int m1m[11][11], int m2m[11][11])
{
    int x, y, cont = 0, cont2 = 1, a = 0, b = 0;

    printf(BRIGHT GREEN"\n\nAGORA COMEÇAREMOS A GUERRA, FORNEÇA AS COORDENADAS DE ARTILHARIA PARA AFUNDAR TODA A FROTA DO OPONENTE, UM TIRO POR VEZ.\n"RESET);
    printf(BRIGHT GREEN"PRESTE ATENÇÃO NAS COORDENADAS,NÃO DISPERDIÇE SEUS TIROS!!!\n\n"RESET);
    printf(BRIGHT BLUE"7 ===> REPRESENTA AS EMBARCAÇÕES ATINGIDAS...\n"RESET);
    printf(BRIGHT RED"8 ===> REPRESENTA TIROS NA ÁGUA...\n\n"RESET);

    while(cont2 >= 1)
    {
        if(cont2 >= 1)
        {
            printf(BRIGHT GREEN"\n\nPRIMEIRO JOGADOR...\n"RESET);
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
                if(x <= 0 || x > 10)
                {
                    cont = 1;
                }
                while(cont >= 1)
                {
                    printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                    printf(BRIGHT"X ===> "RESET);
                    scanf("%d", &x);

                    if(x > 0 && x <= 10)
                    {
                        printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                        cont = 0;
                    }
                    else
                    {
                        cont++;
                    }
                }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
                if(y <= 0 || y > 10)
                {
                    cont = 1;
                }
                while(cont >= 1)
                {
                    printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                    printf(BRIGHT"Y ===> "RESET);
                    scanf("%d", &y);

                    if(y > 0 && y <= 10)
                    {
                        printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                        cont = 0;
                    }
                    else
                    {
                        cont++;
                    }
                }

            if(m2[y][x] == 1 || m2[y][x] == 2 || m2[y][x] == 3 || m2[y][x] == 4)
            {
                m2m[y][x] = 7;
                a++;
            }
            else
            {
                m2m[y][x] = 8;
            }
            printf("\n\n");

            mapam2m(m2m);

            /////////////////////////////////////////////
            printf(BRIGHT YELLOW"\n\nSEGUNDO JOGADOR...\n"RESET);
            printf(BRIGHT"\nCOORDENADAS...\n"RESET);
            printf(BRIGHT"X ===> "RESET);
            scanf("%d", &x);
                if(x <= 0 || x > 10)
                {
                    cont = 1;
                }
                while(cont >= 1)
                {
                    printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                    printf(BRIGHT"X ===> "RESET);
                    scanf("%d", &x);

                    if(x > 0 && x <= 10)
                    {
                        printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n"RESET);
                        cont = 0;
                    }
                    else
                    {
                        cont++;
                    }
                }
            printf(BRIGHT"Y ===> "RESET);
            scanf("%d", &y);
                if(y <= 0 || y > 10)
                {
                    cont = 1;
                }
                while(cont >= 1)
                {
                    printf(BRIGHT RED"COORDENADA INVÁLIDA!\n"RESET);
                    printf(BRIGHT"Y ===> "RESET);
                    scanf("%d", &y);

                    if(y > 0 && y <= 10)
                    {
                        printf(BRIGHT GREEN"COORDENADA VÁLIDA CONTINUE...\n\n"RESET);
                        cont = 0;
                    }
                    else
                    {
                        cont++;
                    }
                }

            if(m1[y][x] == 1 || m1[y][x] == 2 || m1[y][x] == 3 || m1[y][x] == 4)
            {
                m1m[y][x] = 7;
                b++;
            }
            else
            {
                m1m[y][x] = 8;
            }
            printf("\n\n");

            mapam1m(m1m);
            
            if(a == 20 || b == 20)
            {
                cont2 = 0;
            }

        }
    }

    printf(BRIGHT GREEN"\n\nO JOGO ACABOU !!! OBSERVE OS MAPAS E VEJA QUEM VENCEU !!!\n\n"RESET);

    printf(BRIGHT CYAN"TODOS OS ALVOS ABATIDOS PELO PRIMEIRO JOGADOR...\n\n"RESET);
    mapam2m(m2m);
    printf(BRIGHT CYAN"\n\nTODOS OS ALVOS ABATIDOS PELO SEGUNDO JOGADOR...\n\n"RESET);
    mapam1m(m1m);

}

int opcao(int m1[11][11], int m2[11][11], int m1m[11][11], int m2m[11][11])
{
    int op;

    printf(BRIGHT CYAN"* * * * * * * * * * * * * * * BATALHA NAVAL * * * * * * * * * * * * * * *\n"RESET);
    printf(BRIGHT CYAN"\n\nESCOLHA UMA DAS OPÇÕES...\n\n"
    "1 ===> POSICIONAR NAVIOS\n"
    "2 ===> INICIAR A BATALHA\n"
    "3 ===> SAIR DO JOGO\n"RESET);
    printf(BRIGHT"\nOPÇÃO ===> "RESET);
    scanf("%d", &op);

    switch(op)
    {
        case 1:
        {
            alocar(m1, m2, m1m, m2m);
            break;
        }

        case 2:
        {
            iniciar(m1, m2, m1m, m2m);
            break;
        }

        case 3:
        {
            if(op == 3)
            {
                return 0;
            }
        }
    }
}


int main()
{

    int m1[11][11], m2[11][11], m1m[11][11], m2m[11][11];


    for(int i = 0; i < 11; i++)
    {
        for(int j = 0; j < 11; j++)
        {
            m1[i][j] = 0;
            m2[i][j] = 0;
            m1m[i][j] = 0;
            m2m[i][j] = 0;
        }
    }

    opcao(m1, m2, m1m, m2m);

}




