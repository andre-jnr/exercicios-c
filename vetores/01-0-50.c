/*
  Escreva um algoritmo que armazene em um vetor todos os números
  inteiros de 0 a 50. Após isso, o algoritmo deve imprimir todos
  os valores armazenados.
*/
#include <stdio.h>

int main()
{
  int numeros[51];

  for (int i = 0; i <= 50; i++)
  {
    numeros[i] = i;
    printf("%d \n", numeros[i]);
  }

  return 0;
}