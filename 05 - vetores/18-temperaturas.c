/***
 * Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976
 * (121 dias), não ocorreu temperatura inferior a 15oC nem superior a
 * 40oC. As temperaturas verificadas em cada dia estão disponíveis em
 * uma unidade de entrada de dados.
 * Fazer um algoritmo que calcule e imprima:
        - A menor temperatura ocorrida;
        - A maior temperatura ocorrida;
        - A temperatura média;
      - O número de dias nos quais a temperatura foi inferior à temperatura média.

*/
#include <stdio.h>

int main()
{
  int temperaturas[121];
  float menorTemperatura, maiorTemperatura;
  float mediaTemperatura, somaTemperatura = 0;
  int diasAbaixoDaMedia = 0;

  for (int i = 0; i < 121; i++)
  {
    int temperatura = 1;
    while (temperatura < 15 || temperatura > 40)
    {
      printf("Digite a temperatura do %dº dia: \n", i + 1);
      scanf("%d", &temperatura);
    }

    temperaturas[i] = temperatura;
    printf("Temperatura adicionada com sucesso! \n");

    somaTemperatura += temperatura;

    if (i == 0)
    {
      menorTemperatura = temperatura;
      maiorTemperatura = temperatura;
    }

    if (temperatura > maiorTemperatura)
    {
      maiorTemperatura = temperatura;
    }

    if (temperatura < menorTemperatura)
    {
      menorTemperatura = temperatura;
    }
  }

  mediaTemperatura = (float)somaTemperatura / 121.0;

  for (int i = 0; i < 121; i++)
  {
    if (temperaturas[i] < mediaTemperatura)
    {
      diasAbaixoDaMedia++;
    }
  }

  printf("Menor temperatura ocorrida: %.2f\n C", menorTemperatura);
  printf("Maior temperatura ocorrida: %.2f\n C", maiorTemperatura);
  printf("Temperatura média: %.2f\n C", mediaTemperatura);
  printf("Número de dias com temperatura abaixo da média: %d\n C", diasAbaixoDaMedia);

  return 0;
}