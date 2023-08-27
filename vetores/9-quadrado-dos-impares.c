/*
  Escreva um algoritmo que armazene em um vetor o quadrado
  dos números ímpares no intervalo fechado de 1 a 20. Após
  isso, o algoritmo deve imprimir todos os valores armazenados.
*/
#include <stdio.h>

int main()
{
  int numeros[10];
  int contador = 0;

  for (int i = 1; i <= 20; i++)
  {
    if (i % 2 != 0)
    {
      numeros[contador] = i * i;
      printf("%d \n", numeros[contador]);
      contador++;
    }
  }

  return 0;
}