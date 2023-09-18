/*
    Faça um programa que lê um vetor de 3
    elementos e uma matriz de 3 x 3 elementos.
    Em seguida o programa deve fazer a
    multiplicação do vetor pelas colunas da
    matriz.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int vetor[3];
  int matriz[3][3];

  printf("Digite os elementos do vetor de 3 elementos:\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Digite o elemento %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  printf("Digite os elementos da matriz 3x3:\n");
  for (int l = 0; l < 3; l++)
  {
    for (int c = 0; c < 3; c++)
    {
      printf("Digite a posição[%d][%d]: ", l, c);
      scanf("%d", &matriz[l][c]);
    }
  }

  // Escolha a coluna da matriz para multiplicar pelo vetor
  int coluna;
  printf("Escolha a coluna da matriz para multiplicar pelo vetor (0, 1 ou 2): ");
  scanf("%d", &coluna);

  // Multiplica o vetor pela coluna escolhida
  int resultado = 0;
  for (int i = 0; i < 3; i++)
  {
    resultado += vetor[i] * matriz[i][coluna];
  }

  printf("Resultado da multiplicação: %d\n", resultado);

  return 0;
}
