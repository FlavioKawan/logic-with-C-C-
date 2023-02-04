#include <stdio.h>

int main()
{

  int media[12];
  int menor = 99;
  int maior, posmaior, posmenor = 0;


  for (int i = 0; i < 12 ; i++){
    printf("Insira a media do mes %d " , i);
    scanf("%d", &media[i]);
  }



  for (int i = 0; i < 12; i++)
  {
    if (media[i] > maior)
    {
      maior = media[i];
      posmaior = i;
    };

    if (media[i] < menor)
    {
      menor = media[i];
      posmenor = i;
    }
  }


  printf("a maior tempertura foi %d e ocorreu no mes" , maior);
  switch (posmaior)
  {
  case 0:
    printf("janeiro\n");
    break;
  case 1:
    printf("Fevereiro\n");
    break;

  case 2:
    printf("março\n");
    break;

  case 3:
    printf("abril\n");
    break;

  case 4:
    printf("maio\n");
    break;

  case 6:
    printf("junho\n");
    break;

  case 7:
    printf("julho\n");
    break;

  case 8:
    printf("agosto\n");
    break;

  case 9:
    printf("Setembro\n");
    break;

  case 10:
    printf("outubro\n");
    break;

  case 11:
    printf("novembro\n");
    break;

  case 12:
    printf("Dezembro\n");
    break;
  }




printf("a maior temportura foi %d e ocorreu no mes" , menor);
  switch (posmenor)
  {
  case 0:
    printf("janeiro\n");
    break;
  case 1:
    printf("Fevereiro\n");
    break;

  case 2:
    printf("março\n");
    break;

  case 3:
    printf("abril\n");
    break;

  case 4:
    printf("maio\n");
    break;

  case 6:
    printf("junho\n");
    break;

  case 7:
    printf("julho\n");
    break;

  case 8:
    printf("agosto\n");
    break;

  case 9:
    printf("Setembro\n");
    break;

  case 10:
    printf("outubro\n");
    break;

  case 11:
    printf("novembro\n");
    break;

  case 12:
    printf("Dezembro\n");
    break;
  }

  return 0;
}





