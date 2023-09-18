/*
    Elaborar um algoritmo que leia uma matriz
    M (6,6) e um valor para A (uma variável).
    Multiplicar a matriz M pelo valor A e
    coloca os valores da matriz multiplicados
    por A em um vetor de V(36) e escreva no
    final o vetor V
*/
#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int matriz[6][6];
  int vetor[36];
  int a;

  for (int linha = 0; linha < 6; linha++)
  {
    for (int coluna = 0; coluna < 6; coluna++)
    {
      printf("Digite um valor para posição[%d][%d]", linha, coluna);
      scanf("%d", &matriz[linha][coluna]);
    }
  }

  printf("Digite um valor inteiro qualquer: \n");
  scanf("%d", &a);

  int contador = 0;

  for (int linha = 0; linha < 6; linha++)
  {
    for (int coluna = 0; coluna < 6; coluna++)
    {
      vetor[contador] = matriz[linha][coluna] * a;
      contador++;
    }
  }

  printf("Vetor: ");

  for (int i = 0; i < 36; i++)
  {
    if (i != i - 1)
    {
      printf("%d, ", vetor[i]);
    }
    else
    {
      printf("%d. \n", vetor[i]);
    }
  }

  return 0;
}