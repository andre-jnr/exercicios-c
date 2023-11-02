#include <stdio.h>

struct datas
{
  float salario;
  float novoSalario;
};

struct employee
{
  int matricula;
  char nome[30];
  char setor[30];
  struct datas dados;
};

int main()
{
  struct employee funcionario[5][5];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      funcionario[i][j].matricula = i * 5 + j + 1;
      printf("Nome: ");
      scanf("%s", funcionario[i][j].nome);
      printf("Setor: ");
      scanf("%s", funcionario[i][j].setor);
      printf("Salario: ");
      scanf("%f", &funcionario[i][j].dados.salario);
      funcionario[i][j].dados.novoSalario = funcionario[i][j].dados.salario + (funcionario[i][j].dados.salario * 0.10);
      printf("Novo salario: %.2f \n", funcionario[i][j].dados.novoSalario);
    }
  }
  return 0;
}