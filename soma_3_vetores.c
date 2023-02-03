#include <stdio.h>
#include <stdlib.h>
int main(){


int vetor1[5];
int vetor2[5];
int vetor3[5];
int i ;
for(i = 0 ; i < 5 ; i++){
    printf("Digite os valores do vetor1: ");
    scanf("%d", &vetor1[i]);
}

for(i = 0 ; i < 5 ; i++){
    printf("Digite os valores do vetor2: ");
    scanf("%d", &vetor2[i]);
}


for(i = 0 ; i < 5 ; i++){
    vetor3[i] = vetor1[i] + vetor2[i];

}
printf("Vetor1");
for(i = 0 ; i < 5 ; i++){
    printf("%d \n" , vetor1[i]);
}

printf("Vetor2");
for(i = 0 ; i < 5 ; i++){
    printf("%d \n" , vetor2[i]);
}

printf("Vetor3");
for(i = 0 ; i < 5 ; i++){
    printf("%d \n" , vetor3[i]);

}










return 0 ;
}