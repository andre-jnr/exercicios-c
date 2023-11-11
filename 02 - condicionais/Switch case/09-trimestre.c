// Leia um número inteiro de 1 a 12 e imprima o número do trimestre ao qual esse mês pertence.
#include <stdio.h>

int main()
{
  int mes;

  printf("Digite o numero do mes (1-12): ");
  scanf("%d", &mes);

  switch (mes)
  {
  case 1:
  case 2:
  case 3:
    printf("Primeiro trimestre\n");
    break;
  case 4:
  case 5:
  case 6:
    printf("Segundo trimestre\n");
    break;
  case 7:
  case 8:
  case 9:
    printf("Terceiro trimestre\n");
    break;
  case 10:
  case 11:
  case 12:
    printf("Quarto trimestre\n");
    break;
  default:
    printf("Mes invalido.\n");
  }

  return 0;
}
