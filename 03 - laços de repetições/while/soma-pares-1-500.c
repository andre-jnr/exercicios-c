// somatório pares de 1 até 500

#include <stdio.h>
#include <math.h>

int main()
{
  int controle = 0;
  int soma = 0;

  while (controle < 501)
  {
    soma += controle;
    controle += 2;
  };

  printf("soma dos pares: %i", soma);

  return 0;
}