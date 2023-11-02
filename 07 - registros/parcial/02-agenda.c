#include <stdio.h>

struct mail
{
  char pessoal[30];
  char empresarial[30];
};

struct Agenda
{
  char nome[30];
  char telefone[30];
  struct mail email;
};

int main()
{
  struct Agenda agenda[5][1];

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 1; j++)
    {
      printf("Nome: ");
      scanf("%s", agenda[i][j].nome);
      printf("Telefone: ");
      scanf("%s", agenda[i][j].telefone);
      printf("E-mail pessoal: ");
      scanf("%s", agenda[i][j].email.pessoal);
      printf("E-mail empresarial: ");
      scanf("%s", agenda[i][j].email.empresarial);
    }
  }
}