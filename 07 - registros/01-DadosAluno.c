/*
  Criar uma estrutura chamada DadosAluno, que armazena
  a média e idade de um aluno. Na função main: criar uma
  variável que é uma estrutura DadosAluno; ler a média e
  a idade de um aluno e armazenar na variável criada; exibir
  na tela a média e a idade do aluno.
*/
#include <stdio.h>

struct DadosAluno
{
  float media;
  int idade;
};

int main()
{
  struct DadosAluno aluno;
  float n1, n2;

  printf("Digite a N1: ");
  scanf("%f", &n1);

  printf("Digite a N2: ");
  scanf("%f", &n2);

  aluno.media = (n1 + n2) / 2;

  printf("Digite sua idade: ");
  scanf("%i", &aluno.idade);

  printf("Média: %f \n", aluno.media);
  printf("Idade: %i \n", aluno.idade);

  return 0;
}