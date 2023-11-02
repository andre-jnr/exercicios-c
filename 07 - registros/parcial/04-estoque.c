#include <stdio.h>
#include <string.h>

struct sale
{
  char descricao[30];
  int quantidade;
  float valorAPagar;
};

struct stock
{
  char descricao[30];
  int qtde;
  float valorUni;
  struct sale venda;
};

int realizarVenda(struct stock estoque[], int indice, int quantidade);
void listaProdutos(struct stock estoque[]);

int main()
{
  struct stock estoque[5];
  int escolha, qtde;

  for (int i = 0; i < 5; i++)
  {
    printf("Nome do produto: ");
    scanf("%s", estoque[i].descricao);
    printf("Quantidade do estoque: ");
    scanf("%i", &estoque[i].qtde);
    printf("Valor unitário: R$");
    scanf("%f", &estoque[i].valorUni);
    printf("\n");
  }

  printf("[1] - Sim \n");
  printf("[2] - Não \n");
  printf("Deseja realizar uma venda: ");
  scanf("%i", &escolha);
  printf("\n");

  switch (escolha)
  {
  case 1:
    listaProdutos(estoque);
    do
    {
      printf("Venda de qual produto: ");
      scanf("%i", &escolha);
    } while (escolha < 1 || escolha > 5);
    escolha--;
    printf("Quantidade da venda: ");
    scanf("%i", &qtde);
    realizarVenda(estoque, escolha, qtde);
    break;

  case 2:
    break;

  default:
    printf("Escolha inválida! \n");
    break;
  }

  return 0;
}

void listaProdutos(struct stock estoque[])
{
  for (int i = 0; i < 5; i++)
    printf("[%i] - %s \n", i + 1, estoque[i].descricao);
}

int realizarVenda(struct stock estoque[], int i, int quantidade)
{
  estoque[i].venda.quantidade = quantidade;
  estoque[i].qtde -= estoque[i].venda.quantidade;
  estoque[i].venda.valorAPagar = estoque[i].valorUni * estoque[i].venda.quantidade;
  printf("Total a pagar: R$ %.2f \n", estoque[i].venda.valorAPagar);

  return 0;
}