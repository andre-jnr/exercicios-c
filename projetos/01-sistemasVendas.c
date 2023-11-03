/******************************************************************************

Segue orientações para o PROJETO I - EDI.
Escolher um dos dois projetos abaixo e implementar conforme
CRITÉRIOS
ESTRUTURA DE DADOS 1 - Projeto de Programação
PROJETO 1
I. Criação de um Sistema de Venda de Produtos.
a. Cadastro de Produtos.
b. Estoque de Produtos
c. Baixa na venda - Identificação de Cliente
d. Pesquisa Produto por nome | Cliente
e. Listagem da venda de produtos
outras funcionalidades que possam otimizar ou complementar
podem ser acrescentados

*CRITÉRIOS
-IDE DEV-C++
-PRAZO/ENTREGA:
-ENVIAR CÓDIGO-FONTE: professor.israel
-PONTUAÇÃO:
TECNOLOGIA EM ANÁLISE E DESENVOLVIMENTO DE SISTEMAS
ESTRUTURA DE DADOS I
professor Israel Costa

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct Venda
{
  char cliente[30];
  int qtdeVendida;
  float totalPago;
};

struct Produto
{
  char descricao[30];
  int estoque;
  float valorUn;
  struct Venda vendas[100];
  int qtdeVendas;
};

int menu();
int cadastrarProdutos(struct Produto estoque[], int qtdeCadastrada);
int listarProdutos(struct Produto estoque[], int qtdeCadastrada);
int entradaProdutos(struct Produto estoque[], int qtdeCadastrada);
int realizarVenda(struct Produto estoque[], int qtdeCadastrada, char produto[]);
int pesquisarPorNome(struct Produto estoque[], int qtdeCadastrada, char produto[]);
int listarVendas(struct Produto estoque[], int qtdeCadastrada, char produto[]);

int main()
{
  struct Produto estoque[100];
  int qtdeProdutosCadastrados = 0;
  int opcao;

  do
  {
    opcao = menu();

    switch (opcao)
    {
    case 1:
      printf("### CADASTRO DE PRODUTO ### \n");
      qtdeProdutosCadastrados = cadastrarProdutos(estoque, qtdeProdutosCadastrados);
      break;
    case 2:
      printf("### ENTRADA DE PRODUTOS ### \n");
      entradaProdutos(estoque, qtdeProdutosCadastrados);
      break;
    case 3:
    {
      char produtoVendido[30];
      printf("### VENDA ### \n");
      printf("Que produto deseja vender: ");
      scanf("%s", produtoVendido);
      realizarVenda(estoque, qtdeProdutosCadastrados, produtoVendido);
      break;
    }
    case 4:
    {
      char produtoPesquisado[30];
      printf("### Pesquisar por nome ### \n");
      printf("Que produto deseja visualizar os dados: ");
      scanf("%s", produtoPesquisado);
      pesquisarPorNome(estoque, qtdeProdutosCadastrados, produtoPesquisado);
      break;
    }
    case 5:
      printf("\n");
      listarProdutos(estoque, qtdeProdutosCadastrados);
      break;
    case 6:
    {
      char produtoPesquisado[30];
      printf("### Encontrar vendas do produto ### \n");
      printf("Que produto deseja visualizar os dados: ");
      scanf("%s", produtoPesquisado);
      listarVendas(estoque, qtdeProdutosCadastrados, produtoPesquisado);
      break;
    }
    default:
      break;
    }

  } while (opcao != 7);

  return 0;
}

int menu()
{
  int opcao;
  printf("O que deseja fazer? \n");
  printf("[1] - Cadastrar produtos \n");
  printf("[2] - Entrada de produto \n");
  printf("[3] - Venda \n");
  printf("[4] - Pesquisar por nome \n");
  printf("[5] - Listagem de produtos \n");
  printf("[6] - Lista vendas do produto \n");
  printf("[7] - Sair \n");
  printf("-> ");
  scanf("%d", &opcao);
  return opcao;
}

int cadastrarProdutos(struct Produto estoque[], int qtdeCadastrada)
{
  printf("Digite o nome do produto: ");
  scanf("%s", estoque[qtdeCadastrada].descricao);
  printf("Digite o valor unitario do produto: ");
  scanf("%f", &estoque[qtdeCadastrada].valorUn);
  estoque[qtdeCadastrada].estoque = 0;
  estoque[qtdeCadastrada].qtdeVendas = 0;
  qtdeCadastrada++;
  return qtdeCadastrada;
}

int entradaProdutos(struct Produto estoque[], int qtdeCadastrada)
{
  char nome[30];
  int qtde;
  printf("Digite o nome do produto: ");
  scanf("%s", nome);
  for (int i = 0; i < qtdeCadastrada; i++)
  {
    if (strcmp(nome, estoque[i].descricao) == 0)
    {
      printf("Digite a quantidade que vai entrar no estoque: ");
      scanf("%i", &qtde);
      estoque[i].estoque += qtde;
      return 0;
    }
  }
  printf("Produto não encontrada :( \n");
  printf("- Verifique se o nome está escrito corretamente. \n");
  printf("- Liste os produtos para verificar como o produto foi salvo. \n");
  printf("- Se o produto não existir, é necessário cadastrar ele e depois dar entrada \n");
  return 1;
}

int listarProdutos(struct Produto estoque[], int qtdeCadastrada)
{
  if (qtdeCadastrada == 0)
  {
    printf("Nenhum produto cadastrado \n");
    return 1;
  }
  else
  {
    for (int i = 0; i < qtdeCadastrada; i++)
    {
      printf("Codigo: %i \n", i);
      printf("Descricao: %s \n", estoque[i].descricao);
      printf("Quantidade em estoque: %i \n", estoque[i].estoque);
      printf("Valor unitario: R$%.2f \n", estoque[i].valorUn);
      printf("--------------------------- \n");
    }
    printf("\n");
    return 0;
  }
}

int listarVendas(struct Produto estoque[], int qtdeCadastrada, char produto[])
{
  for (int i = 0; i < qtdeCadastrada; i++)
  {
    if (strcmp(estoque[i].descricao, produto) == 0)
    {
      printf("TOTAL DE VENDAS: %i \n", estoque[i].qtdeVendas);
      for (int j = 0; j < estoque[i].qtdeVendas; j++)
      {
        printf("%i venda: \n", j + 1);
        printf("Cliente: %s \n", estoque[i].vendas[j].cliente);
        printf("Valor unitario: R$%.2f \n", estoque[i].valorUn);
        printf("Quantidade vendida: %i \n", estoque[i].vendas[j].qtdeVendida);
        printf("Total pago: R$%.2f \n", estoque[i].vendas[j].totalPago);
        printf("------------------------------------- \n");
      }
    }
  }
  return 0;
}

int realizarVenda(struct Produto estoque[], int qtdeCadastrada, char produto[])
{
  int qtdeVenda;
  for (int i = 0; i < qtdeCadastrada; i++)
  {
    if (strcmp(estoque[i].descricao, produto) == 0)
    {
      printf("Digite o nome do cliente: ");
      scanf("%s", estoque[i].vendas[estoque[i].qtdeVendas].cliente);
      printf("Digite a quantidade da venda: ");
      scanf("%i", &qtdeVenda);
      printf("Valor unitario: R$%.2f \n", estoque[i].valorUn);
      estoque[i].vendas[estoque[i].qtdeVendas].totalPago = estoque[i].valorUn * qtdeVenda;
      printf("Totol a ser pago: R$%.2f \n", estoque[i].vendas[estoque[i].qtdeVendas].totalPago);
      estoque[i].vendas[estoque[i].qtdeVendas].qtdeVendida = qtdeVenda;
      estoque[i].qtdeVendas++;
      estoque[i].estoque -= qtdeVenda;
      printf("Venda concluida com sucesso! \n");
      return 0;
    }
  }
  printf("Produto não encontrado :( \n");
  printf("\n");
  return 1;
}

int pesquisarPorNome(struct Produto estoque[], int qtdeCadastrada, char produto[])
{
  for (int i = 0; i < qtdeCadastrada; i++)
  {
    if (strcmp(estoque[i].descricao, produto) == 0)
    {
      printf("Codigo: %i \n", i);
      printf("Descricao: %s \n", estoque[i].descricao);
      printf("Quantidade em estoque: %i \n", estoque[i].estoque);
      printf("Valor unitario: R$%.2f \n", estoque[i].valorUn);
      printf("--------------------------- \n");
      return 0;
    }
  }

  printf("Produto não encontrado :( \n");
  return 1;
}