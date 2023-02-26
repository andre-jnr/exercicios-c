#include <stdio.h>

/*
  Faça um algoritmo que leia três notas de um aluno, calcule
  e escreva a média final deste aluno. Considerando que a
  média é ponderada e que o peso das notas é 2, 3 e 5.

  - media_ponderada = (n1 * 2 + n2 * 3 + n3 * 5) / 10
*/

int main()
{
  float n1, n2, n3, media_ponderada;

  printf("Digite a nota 1: ");
  scanf("%f", &n1);

  printf("Digite a nota 2: ");
  scanf("%f", &n2);

  printf("Digite a nota 3: ");
  scanf("%f", &n3);

  media_ponderada = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

  printf("Média: %.2f", media_ponderada);

  return 0;
}