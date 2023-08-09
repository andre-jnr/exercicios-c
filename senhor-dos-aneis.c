#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");

  int idade = 1, opniao;
  float mediaIdadeExcelente = 0, contadorExcelentes = 0;
  int contadorRegulares = 0;
  int contador = 0;
  int contadorBons = 0;
  float PercentualBons;

  while (idade > 0 && idade < 111)
  {
    printf("Pesquisa de satisfação\n");
    printf("\n");

    printf("Digite qualquer número fora da faixa entre 1 e 110 para sair\n");
    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade > 0 && idade < 111)
    {
      printf("Digite sua opnião sobre o filme...\n");
      printf("[1] - Regular\n");
      printf("[2] - Bom\n");
      printf("[3] - Excelente\n");
      printf("Digite qualquer outro número para sair\n");
      scanf("%i", &opniao);

      contador++;

      switch (opniao)
      {
      case 1:
        contadorRegulares++;
        break;
      case 2:
        contadorBons++;
        break;
      case 3:
        mediaIdadeExcelente += idade;
        contadorExcelentes++;
        break;
      default:
        break;
      }
    }
  }

  if (contadorExcelentes > 0)
    mediaIdadeExcelente /= contadorExcelentes;
  PercentualBons = (contadorBons / (float)contador) * 100;

  printf("Média da idade de Excelentes: %.2f \n", mediaIdadeExcelente);
  printf("Quantidade de pessoas que votaram regular: %i\n", contadorRegulares);
  printf("O percentual de pessoas que responderam bom: %.2f%%\n", PercentualBons);

  return 0;
}
