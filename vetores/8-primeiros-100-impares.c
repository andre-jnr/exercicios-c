/*
  Escreva um algoritmo que armazene em um vetor os 100
  primeiros números ímpares. Após isso, o algoritmo deve
  imprimir todos os valores armazenados.
*/
#include <stdio.h>

int main()
{
  int impares[100];
  int contador = 0;

  for (int i = 1; i < 200; i += 2)
  {
    impares[contador] = i;
    printf("%d \n", impares[contador]);
  }

  return 0;
}