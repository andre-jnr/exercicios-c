/*
  Escreva um algoritmo que leia um conjunto de 50 fichas correspondente
  à alunos e armazene-as em vetores, cada uma contendo, a altura e o código
  do sexo de uma pessoa (código = 1 se for masculino e 2 se  for feminino), e
  calcule e imprima:
         - A maior e a menor altura da turma;
         - As mulheres com altura acima da média da altura das mulheres;
         - As pessoas com altura abaixo da média da turma.

*/
#include <stdio.h>

int main()
{
  float menorAltura, maiorAltura, SomaAlturas = 0;
  float alturas[50], mediaAlturas;
  float SomaAlturasMulheres = 0, mediaAlturasMulheres, qtdeMulheres = 0;
  int sexo[50];

  for (int i = 0; i < 50; i++)
  {
    printf("Digite a altura: \n");
    scanf("%f", &alturas[i]);

    if (i == 0)
    {
      menorAltura = alturas[i];
      maiorAltura = alturas[i];
    }
    else if (menorAltura > alturas[i])
    {
      menorAltura = alturas[i];
    }

    if (maiorAltura < alturas[i])
    {
      maiorAltura = alturas[i];
    }

    SomaAlturas += alturas[i];

    printf("[1] - Masculino \n");
    printf("[2] - Feminino \n");
    printf("Digite o sexo: \n");
    scanf("%d", &sexo[i]);

    if (sexo[i] == 2)
    {
      qtdeMulheres += 1;
      SomaAlturasMulheres += alturas[i];
    }
  }

  mediaAlturas = SomaAlturas / 50;
  mediaAlturasMulheres = SomaAlturasMulheres / qtdeMulheres;

  printf("A menor altura foi: %f \n", menorAltura);
  printf("A maior altura foi: %f \n", maiorAltura);

  printf("Alturas das mulheres acima da média: ");

  for (int i = 0; i < 50; i++)
  {
    if (sexo[i] == 2 && alturas[i] > mediaAlturasMulheres)
    {
      printf("%f, ", alturas[i]);
    }
  }
  printf("\n");

  printf("As alturas com maior que a média foram: ");

  for (int i = 0; i < 50; i++)
  {
    if (alturas[i] > mediaAlturas)
    {
      printf("%f, ", alturas[i]);
    }
  }
  printf("\n");

  return 0;
}