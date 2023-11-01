/******************************************************************************

1.	Faca um programa que realize a leitura dos seguintes dados relativos a um
conjunto de alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2.
Considere uma turma de ate 10 alunos. Após ler todos os dados digitados, e
depois de armazena-los em um vetor  de estrutura, exibir na tela a listagem
final dos alunos com as suas respectivas medias ´ finais (use uma media
ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).

*******************************************************************************/

#include <stdio.h>

struct Aluno
{
  int matricula;
  char nome[30];
  int codDisciplina;
  float n1;
  float n2;
  float media;
};

int main()
{
  int tam = 10;
  struct Aluno alunos[tam];

  for (int i = 0; i < tam; i++)
  {
    alunos[i].matricula = i + 1;
    printf("\nDigite seu nome: \n");
    scanf("%s", alunos[i].nome);

    printf("Digite o código da disciplina: \n");
    scanf("%i", &alunos[i].codDisciplina);

    printf("Digite a n1: \n");
    scanf("%f", &alunos[i].n1);

    printf("Digite a n2: \n");
    scanf("%f", &alunos[i].n2);

    alunos[i].media = (alunos[i].n1 + alunos[i].n2 * 2) / 3;

    printf("\n");

    printf("*** ALUNO CADASTRADO COM SUCESSO *** \n");
    printf("Matricula gerada: %i \n", alunos[i].matricula);
    printf("%s cadastrado com sucesso!!! \n", alunos[i].nome);
  }

  printf("\n Exibindo listagem... \n");

  for (int i = 0; i < tam; i++)
  {
    printf("Matricula: %i \n", alunos[i].matricula);
    printf("Nome: %s \n", alunos[i].nome);
    printf("Código da disciplina: %i \n", alunos[i].codDisciplina);
    printf("N1: %.2f \n", alunos[i].n1);
    printf("N2: %.2f \n", alunos[i].n2);
    printf("Média: %.2f \n", alunos[i].media);
    printf("-------------------------------------------- \n");
  }

  return 0;
}