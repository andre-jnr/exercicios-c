// Leia um número inteiro (1 a 7) e imprima se é dia útil ou fim de semana.
#include <stdio.h>

int main()
{
  int dia;

  printf("Digite um numero (1-7): ");
  scanf("%d", &dia);

  switch (dia)
  {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    printf("Dia util\n");
    break;
  case 7:
  case 1:
    printf("Fim de semana\n");
    break;
  default:
    printf("Dia invalido.\n");
  }

  return 0;
}
