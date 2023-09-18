/*
  Numa corrida há 10 corredores, de número de inscrição de 1 a 10.
  Faça um algoritmo que leia os valores do número do corredor e o seu
  respectivo tempo na corrida. Além disso, o programa deve imprimir a
  qualificação e o tempo de corrida, do primeiro ao décimo colocado,
  identificando o número de inscrição do corredor referente àquela
  colocação. Suponha que não há tempos iguais.
*/
#include <stdio.h>

int main()
{
  int numeroCorredores[10];
  float tempoCorrida[10];

  for (int i = 1; i <= 10; i++)
  {
    printf("Digite o número do %dº corredor: ", i);
    scanf("%d", &numeroCorredores[i]);
    printf("Digite o tempo de corrida do corredor %d: ", i);
    scanf("%f", &tempoCorrida[i]);
  }

  for (int i = 1; i <= 10; i++)
  {
    for (int indice = i + 1; indice <= 10; indice++)
    {
      if (tempoCorrida[i] > tempoCorrida[indice])
      {
        float tempo = tempoCorrida[i];
        tempoCorrida[i] = tempoCorrida[indice];
        tempoCorrida[indice] = tempo;

        int numeroInscricao = numeroCorredores[i];
        numeroCorredores[i] = numeroCorredores[indice];
        numeroCorredores[indice] = numeroInscricao;
      }
    }
  }

  printf("\nClassificação dos corredores:\n");
  for (int i = 1; i <= 10; i++)
  {
    printf("%dº lugar - Corredor %d - Tempo: %.2f segundos\n", i, numeroCorredores[i], tempoCorrida[i]);
  }

  return 0;
}
