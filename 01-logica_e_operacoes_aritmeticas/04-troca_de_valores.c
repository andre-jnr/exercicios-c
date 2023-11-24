#include <stdio.h>

int main()
{
  int a = 10;
  int b = 20;
  int variavel_troca;

  printf("valor de variavel A: %i \n", a);
  printf("valor de variavel B: %i \n", b);

  variavel_troca = a;
  a = b;
  b = variavel_troca;

  printf("\n");
  printf("Depois da troca... \n");

  printf("valor de variavel A: %i \n", a);
  printf("valor de variavel B: %i \n", b);

  return 0;
}