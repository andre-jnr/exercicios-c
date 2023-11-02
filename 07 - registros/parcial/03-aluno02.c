#include <stdio.h>

struct Historic
{
  float nota1;
  float nota2;
  float media;
};

struct Aluno
{
  char nome[30];
  char endereço[30];
  int idade;
  struct Historic historico;
};

int main()
{
  struct Aluno aluno02[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Nome: ");
    scanf("%s", aluno02[i].nome);

    printf("Endereço: ");
    scanf("%s", aluno02[i].endereço);

    printf("Idade: ");
    scanf("%i", &aluno02[i].idade);

    printf("Nota 1: ");
    scanf("%f", &aluno02[i].historico.nota1);

    printf("Nota 2: ");
    scanf("%f", &aluno02[i].historico.nota2);

    aluno02[i].historico.media = (aluno02[i].historico.nota1 + aluno02[i].historico.nota2) / 2;
  }

  return 0;
}