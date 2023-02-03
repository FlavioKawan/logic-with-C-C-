#include <stdio.h>
#include <stdlib.h>
int main(){

int vetor[10];
int vetor2[10];

for (int i = 0; i < 10; i++){
   printf("Digite os valores");
   scanf("%d",&vetor[i]);
}



for (int i = 0; i < 10; i++){
    vetor2[i] = vetor[i] * vetor[i];
}

printf("Vetor1");
for (int i = 0; i < 10; i++){
    printf("%d \n" , vetor[i]);

}


printf("Vetor2");
for (int i = 0; i < 10; i++){
    printf("%d \n" , vetor2[i]);

}




return 0;
}