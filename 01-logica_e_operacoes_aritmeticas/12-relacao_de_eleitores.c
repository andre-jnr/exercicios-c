#include <stdio.h>
/*
  Escreva um algoritmo para ler o número total de eleitores de um
  minicípio, o número de votos brancos, nulos e válidos. Calcular
  e escrever o percentual de cada um em relação ao total de eleitores.
*/

int main(void)
{
  int total_eleitores, votos_brancos, votos_nulos, votos_validos;
  float porcetagem_votos_brancos, porcetagem_votos_nulos, porcentagem_votos_validos;
  int teste;

  printf("APURACAO DA ELEICAO\n");

  printf("Digite o total de votos validos: ");
  scanf("%i", &votos_validos);

  printf("Digite o total de votos brancos: ");
  scanf("%i", &votos_brancos);

  printf("Digite o total de votos nulos: ");
  scanf("%i", &votos_nulos);

  teste = 5 * 5;
  printf("%i", teste);
  total_eleitores = votos_brancos + votos_nulos + votos_validos;
  porcetagem_votos_brancos = votos_brancos * 100 / total_eleitores;
  porcetagem_votos_nulos = votos_nulos * 100 / total_eleitores;
  porcentagem_votos_validos = votos_validos * 100 / total_eleitores;

  printf("RELATORIO\n");
  printf("Porcetagem de votos brancos: %.0f%%\n", porcetagem_votos_brancos);
  printf("Porcetagem de votos nulos: %.0f%%\n", porcetagem_votos_nulos);
  printf("Porcentagem de votos validos: %.0f%%\n", porcentagem_votos_validos);
  printf("Total de eleitores: %i\n", total_eleitores);

  return 0;
}