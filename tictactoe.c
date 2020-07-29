#include <stdio.h>
#include "conio.h"
#include <stdlib.h>
#include <stdbool.h>
        char tosse(char *coin, int eval);
        int columns_crossed();
        int diagonal();
        int rows_crossed();
        int gameplay(char *coin,int row, int col, int dia);
        void gamedisplay();
        void livedisp();
        char a[4][4];
int main()
{
    char coin;
    int col,row,dia;
    char tossprint;
    coin = 'x';
    tossprint = tosse(&coin,1);
    col = columns_crossed();
    row = rows_crossed();
    dia = diagonal();
    gameplay(&coin,row,col,dia);
    return 3;
}

char tosse(char *coin, int eval)
{
    int comp_var;
    comp_var =  eval%2;
            if(comp_var == 0)
            {
                *coin = 'x';
                printf("\n your turn \n");
            }
            else
            {
                *coin = 'o';
                printf("\n computers turn \n");
            }
    return *coin;
}

int gameplay(char *coin,int r, int c, int d)
{
            int sele,w,h;
            gamedisplay();
        while((r==0)||(c==0)||(d==0)){
            printf("press the number to locate the marker:\t");
            scanf("%d",&sele);
            w = sele/3;
            h = sele%3;
                    switch(sele)
                    {
                    case 0:
                        printf("please enter case1:\t");
                        a[w][h] = getch();
                        livedisp();
                        break;
                    case 1:
                        a[w][h] = getch();
                        livedisp();
                        break;
                    case 2:
                        a[w][h] = getch();
                        livedisp();
                        break;
                    case 3:
                        a[w][h] = getch();
                        livedisp();
                        break;
                    case 4:
                        a[w][h] = getch();
                        livedisp();
                        break;
                    case 5:
                        a[w][h] = getch();
                        livedisp();
                        break;
                    case 6:
                        a[w][h] = getch();
                        livedisp();
                        break;
                    case 7:
                        a[w][h] = getch();
                        livedisp();
                        break;
                    case 8:
                        a[w][h] = getch();
                        livedisp();
                        break;
                    }
        ///* feedbacks the game status to declare the winner */
                    if((columns_crossed()==1)||(rows_crossed()==1)||(diagonal()==1))
                        {
                            exit(5);
                        }
                system("cls");
                livedisp();
                gamedisplay();
                }
        return 1;
}
///* displays player markings in the game*/
    void livedisp()
    {
        printf("\n\n\n\n\n");
        printf("\t\t%c|%c|%c\n",a[2][2],a[2][1],a[2][0]);
        printf("\t\t------\n");
        printf("\t\t%c|%c|%c\n",a[1][2],a[1][1],a[1][0]);
        printf("\t\t------\n");
        printf("\t\t%c|%c|%c\n\n\n",a[0][2],a[0][1],a[0][0]);
    }
///* displays the game instructions */
        void gamedisplay()
        {
            printf("\t\t\t8|7|6\n");
            printf("\t\t\t------\n");
            printf("\t\t\t5|4|3\n");
            printf("\t\t\t------\n");
            printf("\t\t\t2|1|0\n\n\n");
        }
///* check the matrix of tic tac toe diagonally */
          int diagonal()
            {
                if((a[0][0]=='x')&&(a[1][1]=='x')&&(a[2][2]=='x'))
                {
                return 1;
                }
                           if((a[0][0]=='o')&&(a[1][1]=='o')&&(a[2][2]=='o'))
                            {
                                return 1;
                            }
            return 0;
            }
///* check the matrix of tic tac toe, row by row */
            int rows_crossed()
            {
                    int i;
                    for(i=0;i<3;i++)
                        {
                        if((a[0][i]=='x')&&(a[1][i]=='x')&&(a[2][i]=='x'))
                        {
                        return 1;
                        }
                                if((a[0][i]=='o')&&(a[1][i]=='o')&&(a[2][i]=='o'))
                                    {
                                        return 1;
                                    }
                        }
                return 0;
            }
///* check the matrix of tic tac toe, column by column */
         int columns_crossed()
            {
                int i;
                for(i=0;i<3;i++)
                    {
                    if((a[i][0]=='x')&&(a[i][1]=='x')&&(a[i][2]=='x'))
                    {
                    return 1;
                    }
                            if((a[i][0]=='o')&&(a[i][1]=='o')&&(a[i][2]=='o'))
                                {
                                    return 1;
                                }
                    }
                return 0;
            }



