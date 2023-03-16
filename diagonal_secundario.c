#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){



int m[5][5];
int l , c;


for(l = 0; l < 5; l++){
    for(c = 0; c < 5; c++){
        m[l][c] = rand() % 100;

    }
}


for(l = 0; l < 5; l++){
    for(c = 0; c < 5; c++){
        printf("%d ",m[l][c]);
    }
    printf("\n");
}



printf("\nDiagonal Secundario\n");
for(l = 0; l < 5; l++){
    printf("%d ",m[l][5 - 1 - l]);
    } 

    return 0;  
}