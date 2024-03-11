/*
  Crie um programa em C que declare um
  vetor de 5 elementos e um ponteiro
  para o vetor.
*/
#include <stdio.h>

int main()
{
  int vetor[5] = {1, 2, 3, 4, 5};
  int *ponteiro = vetor;

  for (int i = 0; i < 5; i++)
  {
    printf("%i \n", *(ponteiro + i));
  }

  return 0;
}