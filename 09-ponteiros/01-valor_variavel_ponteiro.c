/*
  Escreva um programa em C que declare uma variável inteira
  e um ponteiro para a mesma, leia um valor para a variável
  e imprima o valor da variável e o valor apontado pelo ponteiro.
*/
#include <stdio.h>

int main()
{
  int variavel = 10;
  int *ponteiro = &variavel;

  *ponteiro = 30;

  printf("Valor da variavel: %i \n", variavel);
  printf("Valor apontado pelo ponteiro: %i \n", *ponteiro);

  return 0;
}