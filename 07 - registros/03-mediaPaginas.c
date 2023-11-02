/******************************************************************************

Exercicio de fixação 3: fazer um programa que cria uma estrutura livro, que
contém os elementos título, ano de edição, número de páginas e preço. Criar uma
variável desta estrutura que é um vetor de 5 elementos. Ler os valores para a
estrutura e imprimir a média do número de páginas do livros.

*******************************************************************************/

#include <stdio.h>

struct livro
{
  char titulo[30];
  int anoEdicao;
  int numeroPag;
  float preco;
};

int main()
{
  struct livro vetor[5];
  float media = 0;
  int soma = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o numero de paginas do %d livro: ", i + 1);
    scanf("%d", &vetor[i].numeroPag);
    soma += vetor[i].numeroPag;
  }

  media = (float)soma / 5;
  printf("A media de pagina é: %f", media);

  return 0;
}