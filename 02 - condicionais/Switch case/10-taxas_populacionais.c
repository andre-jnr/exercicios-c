/*
  A taxa de natalidade e a taxa de mortalidade são indicadores
  estatísticos de fundamental importância por ajudar a compreender
  aquilo que os especialistas chamas de dinâmica populacional e a
  entender sua relação com variáveis que influenciam o
  desenvolvimento, como qualidade de vida, migrações, fatores
  socioeconômicos e localização. Sabendo disso, crie um programa que
  calcule os dois indicadores utilizando o comando switch.

  taxa de natalidade =  (número de crianças nascidas x 1000) / número de habitantes

  taxa de mortalidade = (número de óbitos x 1000) / número de habitantes
*/
#include <stdio.h>

int main()
{
  int opcao;
  int numeroHabitantes;

  printf("Digite quantos habitantes ha na cidade: ");
  scanf("%i", &numeroHabitantes);

  printf("Digite o que deseja calcular \n");
  printf("[1] - Taxa de natalidade \n");
  printf("[2] - Taxa de mortaldade \n");
  printf("-> ");
  scanf("%i", &opcao);

  switch (opcao)
  {
  case 1:
  {
    int criancasNascidas;
    float taxaNatalidade;

    printf("Criancas nascidas: ");
    scanf("%i", &criancasNascidas);

    taxaNatalidade = ((float)criancasNascidas * 1000) / (float)numeroHabitantes;

    printf("Taxa de natalidade: %.2f%% \n", taxaNatalidade);
  }
  break;

  case 2:
  {
    int obitos;
    float taxaMortalidade;

    printf("Criancas nascidas: ");
    scanf("%i", &obitos);

    taxaMortalidade = ((float)obitos * 1000) / (float)numeroHabitantes;

    printf("Taxa de mortalidade: %.2f%% \n", taxaMortalidade);
  }
  break;
  default:
    printf("Você digitou um comando inválido! \n");
    break;
  }

  return 0;
}