#include <stdio.h>

int main()
{
  int meses, dias, idade;

  printf("Digite quantos anos vc tem: ");
  scanf("%i", &idade);

  meses = idade * 12;
  dias = idade * 364;

  printf("\nMeses: %i", meses);
  printf("\nDias: %i", dias);

  return 0;
}