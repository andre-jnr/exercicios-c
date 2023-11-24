#include <stdio.h>

int main()
{
  int numero, antecessor;

  printf("Digite um numero: ");
  scanf("%i", &numero);

  antecessor = numero - 1;

  printf("O antecessor de %i eh %i", numero, antecessor);

  return 0;
}