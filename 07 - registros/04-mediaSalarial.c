/******************************************************************************

4) Foi realizada uma pesquisa entre 500 habitantes de uma certa região. Dc cada
habitante foram coletados os dados: idade, sexo, salário e número de filhos.
Crie a estrutura de dados adequada para armazenar estas informações e faça uma
função que armazene as informações digitadas pelo usuário na estrutura de dados
criada. Faça também uma I função que calcula a média do salário dos habitantes.

*******************************************************************************/

#include <stdio.h>

struct habitante
{
  int idade;
  char sexo;
  float salario;
  int qtdeFilhos;
};

float Calcmedia(struct habitante pesquisa[], int tamanho);

int main()
{
  int tam = 5;
  struct habitante pesquisa[tam];

  for (int i = 0; i < tam; i++)
  {
    printf("Digite o salario da %d pessoa: ", i + 1);
    scanf("%f", &pesquisa[i].salario);
  }

  float media = Calcmedia(pesquisa, tam);
  printf("Media do salario: %.2f", media);

  return 0;
}

float Calcmedia(struct habitante pesquisa[], int tamanho)
{
  float soma = 0;

  for (int i = 0; i < tamanho; i++)
  {
    soma += pesquisa[i].salario;
  }

  return soma / tamanho;
}