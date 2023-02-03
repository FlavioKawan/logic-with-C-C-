#include <stdio.h>
#include<conio.h>

int main(void){


    int mat[3][3];
    int l, c ;

    for (l = 0; l < 3; l++) 
        for(c = 0; c < 3; c++)
        {
            printf("Digite o valor da casa [%d][%d] ", c, l);
            scanf("%d", &mat[l][c]);
        }

    for (l = 0; l < 3 ; l++)
        for (c = 0; c < 3; c++)
    {
            printf("elemento [%d] [%d] = [%d] \n ", l , c , mat[l][c]);  
    }
getch();
return 0 ;
}