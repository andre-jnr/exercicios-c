/*
  Faça um programa que leia dois valores e mostre qual
  o maior (considerando que nãos serão digitados o mesmo valores).
*/

#include <stdio.h>

int main(void)
{
  int v1, v2;

  printf("Por favor, não digite valores iguais\n");

  printf("Digite o 1° valor: ");
  scanf("%i", &v1);

  printf("Digite o 2° valor: ");
  scanf("%i", &v2);

  if (v1 > v2)
  {
    printf("%i é maior que %i", v1, v2);
  }
  else
  {
    printf("%i é menor que %i", v1, v2);
  }

  return 0;
}