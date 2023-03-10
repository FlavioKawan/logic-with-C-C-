#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int matrix [5][5];
    int l , c ;


    for(l=0; l<5; l++){
        for(c = 0; c<5; c++){
            matrix[l][c] = rand() % 100;

        }
    }

    for (l = 0; l<5; l++){
        for(c = 0; c<5; c++){
            printf("%d ", matrix[l][c]);
            }
            printf("\n");
        }



       for (l = 0; l<5; l++){
        for(c = 0; c<5; c++){
            if(l == c){
                printf("%d" , matrix[l][c]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }


}

