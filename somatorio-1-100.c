// soma dos 100 primeiros inteiros

#include <stdio.h>
#include <math.h>

int main()
{
  int controle = 0;
  int soma = 0;

  while (controle < 101)
  {
    soma += controle;
    controle += 1;
  };

  printf("soma: %i", soma);

  return 0;
}