/*
  Uma grande firma deseja saber quais os três empregados mais recentes.
  Fazer um algoritmo para ler um número indeterminado de informações
  (máximo de 300) contendo o número do empregado e o número de meses de
  trabalho deste empregado e imprimir os três mais recentes.
  Observações: A última informação contém os dois números iguais a zero.
  Não existem dois empregados admitidos no mesmo mês.
*/
#include <stdio.h>

int main()
{
  int mesesTrabalhadosDosFuncionarios[300];
  int numeroIndentificacaoFuncionario[300];
  int mesesTrabalhados;
  int contador = 0;
  int validador = 0;

  for (int i = 0; i < 300; i++)
  {
    do
    {
      printf("Digite 0 para sair! \n");
      printf("Digite quantos meses o funcionário %d trabalhou: \n", i + 1);
      scanf("%d", &mesesTrabalhados);

      for (int i = 0; i < contador; i++)
      {
        if (mesesTrabalhados == mesesTrabalhadosDosFuncionarios[i])
        {
          printf("Não existem funcionários contratados no mesmo mês! \n");
          printf("\n");
          validador = 1;
          break;
        }
        else
        {
          validador = 0;
        }
      }

    } while (validador == 1);

    if (mesesTrabalhados == 0)
      break;

    contador++;
    mesesTrabalhadosDosFuncionarios[i] = mesesTrabalhados;
    numeroIndentificacaoFuncionario[i] = i + 1;
  }

  for (int i = 0; i < contador; i++)
  {
    for (int indice = i + 1; indice < contador; indice++)
    {
      if (mesesTrabalhadosDosFuncionarios[i] > mesesTrabalhadosDosFuncionarios[indice])
      {
        int mesesTrabalhados = mesesTrabalhadosDosFuncionarios[i];
        mesesTrabalhadosDosFuncionarios[i] = mesesTrabalhadosDosFuncionarios[indice];
        mesesTrabalhadosDosFuncionarios[indice] = mesesTrabalhados;

        int numeroIndentificacao = numeroIndentificacaoFuncionario[i];
        numeroIndentificacaoFuncionario[i] = numeroIndentificacaoFuncionario[indice];
        numeroIndentificacaoFuncionario[indice] = numeroIndentificacao;
      }
    }
  }

  printf("------------------------------\n");

  if (contador < 3)
  {
    printf("OS %d FUNCIONARIOS MAIS RECENTES \n", contador);
    for (int i = 0; i < contador; i++)
    {
      printf("Número de indentificação: %d \n", numeroIndentificacaoFuncionario[i]);
      printf("Meses trabalhados: %d \n", mesesTrabalhadosDosFuncionarios[i]);
      printf("------------------------------\n");
    }
  }
  else
  {
    printf("OS 3 FUNCIONARIOS MAIS RECENTES \n");
    for (int i = 0; i < 3; i++)
    {
      printf("Número de indentificação: %d \n", numeroIndentificacaoFuncionario[i]);
      printf("Meses trabalhados: %d \n", mesesTrabalhadosDosFuncionarios[i]);
      printf("------------------------------\n");
    }
  }

  return 0;
}