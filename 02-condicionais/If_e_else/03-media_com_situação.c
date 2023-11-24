/*
  Leia duas notas, além de mostrar a média, mostre se
  o aluno foi aprovado (igual e acima de 6), ou reprovado.
*/

#include <stdio.h>

int main(void)
{
  float média, n1, n2;

  printf("Digite a 1° nota: ");
  scanf("%f", &n1);

  printf("Digite a 2° nota: ");
  scanf("%f", &n2);

  média = (n1 + n2) / 2;

  if (média >= 6)
  {
    printf("Sua média foi: %.2f\n", média);
    printf("Sua situação: APROVADO!");
  }
  else
  {
    printf("Sua média foi: %.2f\n", média);
    printf("Sua situação: REPROVADO!");
  }
  return 0;
}