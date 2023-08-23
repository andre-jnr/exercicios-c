/*
  Escreva um algoritmo que armazene em um vetor todos os números
  inteiros de 100 a 200. Após isso, o algoritmo deve imprimir
  todos os valores armazenados.
*/
#include <stdio.h>

int main()
{
  int numeros[100];

  for (int i = 100; i <= 200; i++)
  {
    numeros[i] = i;
    printf("%d \n", numeros[i]);
  }
  return 0;
}