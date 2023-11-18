/*
  Faixa etária: Desenvolva um algoritmo que leia a idade de uma pessoa e informe a sua faixa etária:

  - Bebê: entre 0 e 2 anos.
  - Criança: entre 3 e 11 anos.
  - Adolescente: entre 12 e 17 anos.
  - Jovem: entre 18 e 30 anos.
  - Adulto: entre 31 e 59 anos.
  - Idoso: acima de 60 anos.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int idade;

  printf("Digite a idade: ");
  scanf("%d", &idade);

  if (idade <= 2)
  {
    printf("Eh um bebe! \n");
  }
  else if (idade <= 11)
  {
    printf("Eh uma crianca");
  }
  else if (idade <= 17)
  {
    printf("Eh um adolescente!");
  }
  else if (idade <= 30)
  {
    printf("Eh um jovem!");
  }
  else if (idade <= 59)
  {
    printf("Eh um adulto");
  }
  else
  {
    printf("Eh um idoso!");
  }

  return 0;
}
