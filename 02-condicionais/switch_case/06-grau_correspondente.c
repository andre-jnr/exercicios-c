/*
Leia um número de 1 a 5 e imprima o grau correspondente.
   1 - Muito fraco
   2 - Fraco
   3 - Moderado
   4 - Forte
   5 - Muito forte
*/

#include <stdio.h>

int main()
{
  int grau;

  printf("Digite um número (1-5): ");
  scanf("%d", &grau);

  switch (grau)
  {
  case 1:
    printf("Muito fraco\n");
    break;
  case 2:
    printf("Fraco\n");
    break;
  case 3:
    printf("Moderado\n");
    break;
  case 4:
    printf("Forte\n");
    break;
  case 5:
    printf("Muito forte\n");
    break;
  default:
    printf("Grau inválido.\n");
  }

  return 0;
}
