/*
  Escreva um algoritmo que armazene em um vetor todos os
  números pares do intervalo fechado de 1 a 100. Após isso,
  o algoritmo deve imprimir todos os valores armazenados.
*/
#include <stdio.h>

int main()
{
  int pares[50];
  int contador = 0;

  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      pares[contador] = i;

      printf("%d \n", pares[contador]);
      contador++;
    }
  }

  return 0;
}