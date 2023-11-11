/*
  Um professor deseja automatizar o processo de avaliação das notas de seus alunos. Ele pede a você para criar um programa em C que irá ler as notas das três provas de um aluno e determinar sua situação acadêmica com base em sua média. O professor adota as seguintes regras:

   - A média mínima para aprovação é 7.0.
   - Se a média estiver entre 4.0 e 6.9 (inclusive), o aluno estará em recuperação.
   - Se a média for menor que 4.0, o aluno será reprovado.

  Você deve criar um programa que solicita ao usuário que insira as notas das três provas, calcula a média das notas e, em seguida, imprime a situação acadêmica do aluno com base nas regras acima.
*/
#include <stdio.h>

int main()
{
  float nota1, nota2, nota3;
  float media;

  printf("Digite a nota da primeira prova: ");
  scanf("%f", &nota1);
  printf("Digite a nota da segunda prova: ");
  scanf("%f", &nota2);
  printf("Digite a nota da terceira prova: ");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  if (media >= 7.0)
  {
    printf("Aprovado com media %.2f\n", media);
  }
  else
  {
    if (media >= 4.0)
    {
      printf("Recuperacao com media %.2f\n", media);
    }
    else
    {
      printf("Reprovado com media %.2f\n", media);
    }
  }

  return 0;
}
