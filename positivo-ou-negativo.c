/*
  Leia um valor e escreva se ele é positivo ou negativo
  (considerando 0 como positivo).
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
  int x;

  setlocale(LC_ALL, "portuguese");
  printf("Digite um número: ");
  scanf("%i", &x);

  if (x > -1)
  {
    printf("%i é positivo", x);
  }
  else
  {
    printf("%i é negativo", x);
  }
  return 0;
}