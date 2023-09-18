/*
  Escreva um algoritmo que armazene em um vetor todos os
  números múltiplos de 5, no intervalo fechado de 1 a 500.
  Após isso, o algoritmo deve imprimir todos os valores
  armazenados.
*/
#include <stdio.h>

int main()
{
  int multiplos5[100];
  int contador = 0;

  for (int i = 1; i <= 500; i++)
  {
    if (i % 5 == 0)
    {
      multiplos5[contador] = i;
      printf("%d \n", multiplos5[contador]);
      contador++;
    }
  }

  return 0;
}