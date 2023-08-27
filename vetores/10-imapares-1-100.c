/*
  Escreva um algoritmo que armazene em um vetor todos
  os números ímpares do intervalo fechado de 1 a 100.
  Após isso, o algoritmo deve imprimir todos os valores
  armazenados.
*/
#include <stdio.h>

int main()
{
  int impares[50];

  for (int i = 1; i < 100; i += 2)
  {
    impares[i] = i;
    printf("%d \n", impares[i]);
  }
}