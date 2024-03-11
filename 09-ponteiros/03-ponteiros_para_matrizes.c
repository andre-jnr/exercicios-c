/*
  Faça um programa em C que declare uma matriz de
  inteiros 2x2 e um ponteiro para a matriz, leia
  os valores da matriz e imprima os valores usando
  o ponteiro.
*/
#include <stdio.h>

int main()
{
  int matriz[2][2] = {
      {1, 2},
      {3, 4}};

  int(*ponteiro)[2] = matriz;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%i, ", *((*(ponteiro + i)) + j));
    }
    printf("\n");
  }

  return 0;
}