#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int ladoA, ladoB, ladoC;
  int somaAB, somaBC, somaAC;

  printf("Digite o valor do lado A: ");
  scanf("%i", &ladoA);

  printf("Digite o valor do lado B: ");
  scanf("%i", &ladoB);

  printf("Digite o valor do lado C: ");
  scanf("%i", &ladoC);

  somaAB = ladoA + ladoB;
  somaAC = ladoA + ladoC;
  somaBC = ladoB + ladoC;

  if (ladoA < somaBC)
  {
    if (ladoB < somaAC)
    {
      if (ladoC < somaAB)
      {
        printf("Os valores formam um triangulo.");
      }
      else
      {
        printf("Os valores não formam um triangulo.");
      }
    }
    else
    {
      printf("Os valores não formam um triangulo");
    }
  }
  else
  {
    printf("Os valore não formam um triangulo");
  }

  return 0;
}