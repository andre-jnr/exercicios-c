#include <stdio.h>

struct Historic
{
  float nota1[3];
  float nota2[3];
  float media[3];
};

struct Aluno
{
  char nome[3][30];
  char endereco[3][30];
  struct Historic historico;
};

int main()
{
  struct Aluno aluno01;

  for (int i = 0; i < 3; i++)
  {
    printf("Nome: ");
    scanf("%s", aluno01.nome[i]);
    printf("Endereço: ");
    scanf("%s", aluno01.endereco[i]);
    printf("Nota 1: ");
    scanf("%f", &aluno01.historico.nota1[i]);
    printf("Nota 2: ");
    scanf("%f", &aluno01.historico.nota2[i]);

    aluno01.historico.media[i] = (aluno01.historico.nota1[i] + aluno01.historico.nota2[i]) / 2;
  }

  return 0;
}