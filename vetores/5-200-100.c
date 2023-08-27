/*
  Escreva um algoritmo que armazene em um vetor todos os números inteiros
  de 200 a 100 (em ordem decrescente). Após isso, o algoritmo deve imprimir
  todos os valores armazenados.
*/
#include <stdio.h>

int main()
{
  int numeros[100];

  for (int i = 200; i >= 100; i--)
  {
    numeros[i] = i;
    printf("%d \n", numeros[i]);
  }

  return 0;
}