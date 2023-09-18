/*
  Escreva um algoritmo que receba a altura de 10 atletas.
  Esse algoritmo deve imprimir a altura daqueles atletas
  que tem altura maior que a média.
*/
#include <stdio.h>

int main()
{
  float alturas[10], somaAlturas = 0;

  for (int i = 1; i <= 10; i++)
  {
    printf("Digite o valor do %dº atleta: \n", i);
    scanf("%f", &alturas[i]);
    somaAlturas += alturas[i];
  }

  float media = somaAlturas / 10;

  printf("A média foi %f, e as alturas que passam são: ", media);

  for (int i = 0; i <= 10; i++)
  {
    if (alturas[i] > media)
    {
      printf("%f, ", alturas[i]);
    }
  }

  return 0;
}