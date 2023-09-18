/*
  Escreva um algoritmo que armazene em um vetor todos os números
  inteiros do intervalo fechado de 1 a 100. Após isso, o algoritmo
  deve imprimir todos os valores armazenados.
*/
#include <stdio.h>

int main()
{
  int numeros[100];

  for (int i = 1; i <= 100; i++)
  {
    numeros[i] = i;
    printf("%d \n", numeros[i]);
  }

  return 0;
}