/******************************************************************************

3.	Definir a estrutura cuja representacao grafica e dada a seguir, definir os
campos com os tipos basicos necessarios.

cadastro:
-----------------------------------------
|   nome   |   endereço   |   salário   |
-----------------------------------------
|identidade|      cpf     |Estado civil |
-----------------------------------------
| Telefone |     Idade    |     Sexo    |
-----------------------------------------

O ENDEREÇO é composto de:
-----------------------------------------
|   rua   |   bairro   |   cidade   |
-----------------------------------------
|  estado |     cep    |
------------------------

(a) Crie um vetor Cadastro com 5 elementos.
(b) Permita ao usuario entrar com dados para preencher esse 5 cadastros.
(c) Encontre a pessoa com maior idade entre os cadastrados.
(d) Encontre as pessoas do sexo masculino.
(e) Encontre as pessoas com salario maior que 1000.
(f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo usuario.

*******************************************************************************/

#include <stdio.h>

struct endereco
{
  char rua[30];
  char bairro[30];
  char cidade[30];
  char estado[30];
  char cep[8];
};

struct Cadastro
{
  char nome[30];
  struct endereco endereço;
  float salario;
  int identidade;
  char cpf[12];
  char estadoCivil[30];
  char telefone[12];
  int idade;
  char sexo;
};

struct ResultadoPesquisa
{
  struct Cadastro pessoasEncontradas[5];
  int tamanho;
};

int menu(int opcao);
void cadastrar(struct Cadastro pessoas[], int tamanho);
struct Cadastro encontrarMaiorIdade(struct Cadastro pessoas[], int tamanho);
struct ResultadoPesquisa buscarHomens(struct Cadastro pessoas[], int tamanho);
struct ResultadoPesquisa encontrarPeloSalario(struct Cadastro pessoas[], int tamanho, float salarioAlvo);
int encontrarPeloRg(struct Cadastro pessoas[], int tamanho, int rg);

int main()
{
  int tamanho = 2, opcao;
  struct Cadastro pessoas[tamanho];

  cadastrar(pessoas, tamanho);

  do
  {
    opcao = menu(opcao);
    switch (opcao)
    {
    case 1:
      cadastrar(pessoas, tamanho);
      break;
    case 2:
    {
      struct Cadastro pessoaVelha;
      pessoaVelha = encontrarMaiorIdade(pessoas, tamanho);
      printf("A pessoa com maior idade encontrada foi: %s \n", pessoaVelha.nome);
      printf("\n");
      break;
    }
    case 3:
    {
      struct ResultadoPesquisa homens;
      homens = buscarHomens(pessoas, tamanho);
      printf("\nOs funcionários do sexo masculino encontrados foram: \n");
      for (int i = 0; i < homens.tamanho; i++)
      {
        printf("%s \n", homens.pessoasEncontradas[i].nome);
      }
      printf("\n");
      break;
    }
    case 4:
    {
      struct ResultadoPesquisa pessoasComSalarioAcima;
      pessoasComSalarioAcima = encontrarPeloSalario(pessoas, tamanho, 1000);
      printf("Os funcionários com sálario acima dos R$1.000,00: \n");
      for (int i = 0; i < pessoasComSalarioAcima.tamanho; i++)
      {
        printf("%s \n", pessoasComSalarioAcima.pessoasEncontradas[i].nome);
      }
      printf("\n");
      break;
    }
    case 5:
    {
      int rg;
      printf("Digite o RG da pessoa desejada: ");
      scanf("%i", &rg);
      encontrarPeloRg(pessoas, tamanho, rg);
      break;
    }
    case 6:
      break;
    default:
      printf("Comando inválido! \n");
      break;
    }
  } while (opcao != 6);

  return 0;
}

int menu(int opcao)
{
  printf("O que você deseja realizar? \n");
  printf("[1] - Cadastrar / substituir cadastro \n");
  printf("[2] - Encontrar pessoa com maior idade \n");
  printf("[3] - Exibir pessoas do sexo masculino \n");
  printf("[4] - Funcionarios com salarios acima de R$1000 \n");
  printf("[5] - Encontrar funcionario pelo RG \n");
  printf("[6] - Sair \n");
  printf("-> ");
  scanf("%d", &opcao);

  return opcao;
}

void cadastrar(struct Cadastro pessoas[], int tamanho)
{
  printf("---- CADASTRO --- \n");

  for (int i = 0; i < tamanho; i++)
  {
    printf("Nome: ");
    scanf("%s", pessoas[i].nome);

    printf("Rua: ");
    scanf("%s", pessoas[i].endereço.rua);

    printf("Bairro: ");
    scanf("%s", pessoas[i].endereço.bairro);

    printf("Cidade: ");
    scanf("%s", pessoas[i].endereço.cidade);

    printf("Estado: ");
    scanf("%s", pessoas[i].endereço.estado);

    printf("CEP: ");
    scanf("%s", pessoas[i].endereço.cep);

    printf("Salario: ");
    scanf("%f", &pessoas[i].salario);

    printf("Identidade (RG): ");
    scanf("%i", &pessoas[i].identidade);

    printf("CPF: ");
    scanf("%s", pessoas[i].cpf);

    printf("Estado civil: ");
    scanf("%s", pessoas[i].estadoCivil);

    printf("Telefone: ");
    scanf("%s", pessoas[i].telefone);

    printf("Idade: ");
    scanf("%d", &pessoas[i].idade);

    printf("Sexo [M/F]: ");
    getchar();
    scanf("%c", &pessoas[i].sexo);

    printf("\n----------------------------------------\n");
  }
}

struct Cadastro encontrarMaiorIdade(struct Cadastro pessoas[], int tamanho)
{
  struct Cadastro PessoaMaiorIdade = pessoas[0];
  for (int i = 0; i < tamanho; i++)
  {
    if (pessoas[i].idade > PessoaMaiorIdade.idade)
    {
      PessoaMaiorIdade = pessoas[i];
    }
  }

  return PessoaMaiorIdade;
}

struct ResultadoPesquisa buscarHomens(struct Cadastro pessoas[], int tamanho)
{
  struct ResultadoPesquisa resultado;
  int contador = 0;

  for (int i = 0; i < tamanho; i++)
  {
    if (pessoas[i].sexo == 'M' || pessoas[i].sexo == 'm')
    {
      resultado.pessoasEncontradas[contador] = pessoas[i];
      contador++;
    }
  }

  resultado.tamanho = contador;

  return resultado;
}

struct ResultadoPesquisa encontrarPeloSalario(struct Cadastro pessoas[], int tamanho, float salarioAlvo)
{
  struct ResultadoPesquisa resultado;
  int contador = 0;

  for (int i = 0; i < tamanho; i++)
  {
    if (pessoas[i].salario > salarioAlvo)
    {
      resultado.pessoasEncontradas[contador] = pessoas[i];
      contador++;
    }
  }

  resultado.tamanho = contador;
  return resultado;
}

int encontrarPeloRg(struct Cadastro pessoas[], int tamanho, int rg)
{
  for (int i = 0; i < tamanho; i++)
  {
    if (pessoas[i].identidade == rg)
      for (int i = 0; i < tamanho; i++)
      {
        printf("Nome: %s \n", pessoas[i].nome);
        printf("Rua: %s \n", pessoas[i].endereço.rua);
        printf("Bairro: %s \n", pessoas[i].endereço.bairro);
        printf("Cidade: %s \n", pessoas[i].endereço.cidade);
        printf("Estado: %s \n", pessoas[i].endereço.estado);
        printf("CEP: %s \n", pessoas[i].endereço.cep);
        printf("Salario: R$%.2f \n", pessoas[i].salario);
        printf("Identidade (RG): %i \n", pessoas[i].identidade);
        printf("CPF: %s \n", pessoas[i].cpf);
        printf("Estado civil: %s \n", pessoas[i].estadoCivil);
        printf("Telefone: %s \n", pessoas[i].telefone);
        printf("Idade: %i \n", pessoas[i].idade);
        printf("Sexo [M/F]: %c \n", pessoas[i].sexo);
        printf("\n----------------------------------------\n");
        return 0;
      }
  }
  printf("Pessoa não encontrada! \n");
  printf("\n");
  return 1;
}