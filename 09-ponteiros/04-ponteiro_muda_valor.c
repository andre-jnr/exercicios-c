/*
  Escreva um programa em C que declare uma
  variável inteira e um ponteiro para a mesma,
  altere o valor da variável usando o ponteiro
  e imprima o novo valor da variável.
*/
#include <stdio.h>

int main()
{
  int variavel = 10;
  int *ponteiro = &variavel;

  *ponteiro = 20;

  printf("%i", variavel);

  return 0;
}