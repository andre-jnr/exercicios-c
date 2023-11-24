// Leia um número inteiro (1 a 12) e imprima a estação do ano correspondente.

#include <stdio.h>

int main()
{
  int mes;

  printf("Digite o numero do mes (1-12): ");
  scanf("%d", &mes);

  switch (mes)
  {
  case 3:
  case 4:
  case 5:
    printf("Primavera\n");
    break;
  case 6:
  case 7:
  case 8:
    printf("Verão\n");
    break;
  case 9:
  case 10:
  case 11:
    printf("Outuno\n");
    break;
  case 12:
  case 1:
  case 2:
    printf("Inverno\n");
    break;
  default:
    printf("Mês inválido.\n");
  }

  return 0;
}
