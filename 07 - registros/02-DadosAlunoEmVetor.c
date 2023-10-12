/*
  Considerado o exercício 1, crie uma variável que é um
  vetor da estrutura DadosAluno. O programa deve obter a
  média e a idade de 10 alunos. Depois, estes dadis devem
  ser exubudos.
*/
#include <stdio.h>
#include <locale.h>

struct DadosAluno
{
  float media;
  int idade;
};

int main()
{
  setlocale(LC_ALL, "pt_BR");

  struct DadosAluno aluno[10];
  float n1, n2;

  for (int i = 0; i < 10; i++)
  {
    printf("Dados do aluno número %i \n", i + 1);

    printf("Digite a N1: ");
    scanf("%f", &n1);

    printf("Digite a N2: ");
    scanf("%f", &n2);

    aluno[i].media = (n1 + n2) / 2;

    printf("Digite sua idade: ");
    scanf("%i", &aluno[i].idade);

    printf("\n");
  }

  printf("--------------------------------------");

  for (int i = 0; i < 10; i++)
  {
    printf("\n Dados do %dº aluno \n", i + 1);
    printf("Média: %f \n", aluno[i].media);
    printf("Idade: %i \n", aluno[i].idade);
  }

  return 0;
}