/******************************************************************************

2.	Faça um programa que armazene em um registro de dados (estrutura composta) com
os dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F),
CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa
(string de até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário,
armazenados na estrutura e exibidos na tela

*******************************************************************************/

#include <stdio.h>

struct funcionario
{
  char nome[30];
  int idade;
  char sexo;
  char cpf[12];
  char dataNasc[10];
  int codSetor;
  char cargo[30];
  float salario;
};

int main()
{
  struct funcionario colaborador;

  printf("---- CADASTRO DE COLABORADOR ---- \n");
  printf("Nome: ");
  scanf("%s", colaborador.nome);

  printf("Idade: ");
  scanf("%d", &colaborador.idade);

  printf("Sexo[M/F]: ");
  getchar();
  scanf("%c", &colaborador.sexo);

  printf("CPF: ");
  scanf("%s", colaborador.cpf);

  printf("Data de nascimento: ");
  scanf("%s", colaborador.dataNasc);

  printf("Codigo do setor: ");
  scanf("%d", &colaborador.codSetor);

  printf("Cargo: ");
  scanf("%s", colaborador.cargo);

  printf("Salario: ");
  scanf("%f", &colaborador.salario);

  printf("\nCadastro concluido, informações apresentadas: \n");

  printf("Nome:  %s \n", colaborador.nome);
  printf("Idade: %d \n", colaborador.idade);
  printf("Sexo[M/F]: %c \n", colaborador.sexo);
  printf("CPF: %s \n", colaborador.cpf);
  printf("Data de nascimento: %s \n", colaborador.dataNasc);
  printf("Codigo do setor: %d \n", colaborador.codSetor);
  printf("Cargo: %s \n", colaborador.cargo);
  printf("Salario: %f \n", colaborador.salario);
}