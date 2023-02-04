#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    int vetor[20];
    int fim = 19 ;
    int copia;

    for(int i = 0 ; i < 20 ; i++){
        printf("Valores gerados");
        vetor[i] = rand() % 100;
        
    }

    printf("\nVetor\n");
    for (int i = 0; i < 20; i ++){
        printf(" %d " , vetor[i]);
    

    }

    for (int i = 0 ; i < 10; i++){
        copia = vetor[i]; /*copia para não perder o primeiro indice*/
        vetor[i] = vetor[fim]; /*feito a troca do primeiro e ultimo indice*/
        vetor[fim] = copia; /*busca o indice 0 na copia e faz a troca para o ultimo indice*/
        fim--;  /*como o fim tem inicio indice 19, para o indice 18 ter a troca com o proximo indice, ele tem que decrementar*/
    }

    printf("\nVetor-Inverso\n");
    for (int i = 0; i < 20; i ++){
        printf(" %d " , vetor[i]);
    }

    return 0 ;
}