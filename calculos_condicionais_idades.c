#include <stdio.h>
#include <locale.h>

int main()
{
  int idadeHomem1, idadeHomem2;
  int idadeMulher1, idadeMulher2;

  printf("Digite as idades dos homens: ");
  scanf("%i %i", &idadeHomem1, &idadeHomem2);

  printf("Digite as idades das mulheres: ");
  scanf("%i %i", &idadeMulher1, &idadeMulher2);

  if (idadeHomem1 > idadeHomem2)
  {
    if (idadeMulher1 > idadeMulher2)
    {
      printf("A soma do homem mais velho com a mulher mais nova: %i\n", idadeHomem1 + idadeMulher2);
      printf("O produto do homem mais novo com a mulher mais velha: %i\n", idadeHomem2 * idadeMulher1);
    }
    else
    {
      printf("A soma do homem mais velho com a mulher mais nova: %i\n", idadeHomem1 + idadeMulher1);
      printf("O produto do homem mais novo com a mulher mais velha: %i\n", idadeHomem2 * idadeMulher2);
    }
  }
  else
  {
    if (idadeMulher1 > idadeMulher2)
    {
      printf("A soma do homem mais velho com a mulher mais nova: %i\n", idadeHomem2 + idadeMulher2);
      printf("O produto do homem mais novo com a mulher mais velha: %i\n", idadeHomem1 * idadeMulher1);
    }
    else
    {
      printf("A soma do homem mais velho com a mulher mais nova: %i\n", idadeHomem2 + idadeMulher1);
      printf("O produto do homem mais novo com a mulher mais velha: %i\n", idadeHomem1 * idadeMulher2);
    }
  }

  return 0;
}
