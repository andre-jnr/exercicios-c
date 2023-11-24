# Switch case

O comando `switch case` em C é uma estrutura de decisão que permite executar um bloco de código específico, dependendo do valor de uma variável. A sintaxe básica do comando `switch case` é a seguinte:

```c
switch (variável) {
  case valor1:
    // bloco de código para o valor 1
    break;
  case valor2:
    // bloco de código para o valor 2
    break;
  ...
  default:
    // bloco de código para o valor não especificado
}
```

Podemos definir um bloco de código para 2 casos distintos, basta não adicionar um `break`.

```c
switch (variável) {
  case valor1:
  case valor2:
    // bloco de código para o valor 1 e 2
    break;
  case valor3:
    // bloco de código para o valor 3
  ...
  default:
    // bloco de código para o valor não especificado
}
```

Podemos declarar variáveis de escopo local para cada `case`, basta usar chaves (`{`, `}`).

```c
switch (variável) {
  case valor1: {
    // bloco de código para o valor 1
    break;
  }
  case valor2: {
    // bloco de código para o valor 2
    break;
  }
  ...
  default:
    // bloco de código para o valor não especificado
}
```

Em resumo, a `variável` vai ser comparada em cada caso, e se for valor da `variável` for igual ao caso específicado, o bloco de código será executado.

O comando `switch case` pode ser usado para implementar uma variedade de tarefas, como:

- Implementar menus
- Realizar testes de condição
- Executar ações específicas para diferentes valores

> Lembrando que o tipo primitivo dos casos tem que ser igual ao da variável.

## Exercícios

1. [Dia da semana](/02%20-%20condicionais/Switch%20case/01-dia_da_semana.c): Leia o número que representa o dia da semana e imprima o nome do dia da semana

1. [Mês](/02%20-%20condicionais/Switch%20case/02-mes.c): Leia o número que representa um mês do ano e imprima o nome do mês.

1. [Consolante ou vogal?](/02%20-%20condicionais/Switch%20case/03-consoante_ou_vogal.c): Leia uma letra e imprima se ela é uma vogal ou uma consoante.

1. [Estação do ano](/02%20-%20condicionais/Switch%20case/04-estacao.c): Leia um número inteiro (1 a 12) e imprima a estação do ano correspondente.

1. [Dia útil](/02%20-%20condicionais/Switch%20case/05-dia_util.c): Leia um número inteiro (1 a 7) e imprima se é dia útil ou fim de semana.

1. [Grau correspondente](/02%20-%20condicionais/Switch%20case/06-grau_correspondente.c): Leia um número de 1 a 5 e imprima o grau correspondente.

   - 1 - Muito fraco
   - 2 - Fraco
   - 3 - Moderado
   - 4 - Forte
   - 5 - Muito forte

1. [Quantos dias tem o mês?](/02%20-%20condicionais/Switch%20case/07-dias_do_mes.c): Leia um número inteiro de 1 a 12 e imprima o número de dias no mês correspondente.

1. [Maiúscula ou minúscula](/02%20-%20condicionais/Switch%20case/08-maiuscula_minuscula.c): Leia uma letra e imprima se é uma letra maiúscula, minúscula ou um caractere não alfabético.

1. [Trimestre](/02%20-%20condicionais/Switch%20case/09-trimestre.c): Leia um número inteiro de 1 a 12 e imprima o número do trimestre ao qual esse mês pertence.

1. [Menu com taxas populacionais](/02%20-%20condicionais/Switch%20case/10-taxas_populacionais.c): A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental importância por ajudar a compreender aquilo que os especialistas chamas de dinâmica populacional e a entender sua relação com variáveis que influenciam o desenvolvimento, como qualidade de vida, migrações, fatores socioeconômicos e localização. Sabendo disso, crie um programa que calcule os dois indicadores utilizando o comando `switch`.

   ```
   taxa de natalidade =  (número de crianças nascidas x 1000) / número de habitantes
   ```

   ```
   taxa de mortalidade = (número de óbitos x 1000) / número de habitantes
   ```

1. [Senhor dos aneis](/02%20-%20condicionais/Switch%20case/11-senhor_dos_aneis.c): No dia da estreia do filme "Senhor dos Anéis", uma grande emissora de TV realizou uma pesquisa logo após o encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade e sua opinião em relação ao filme:

   - 3 - Excelente;
   - 2 - Bom;
   - 1 - Regular;

   Criar um algoritmo que receba a idade e opinião de vários espectadores, calcule e imprima:

   - A média das idades das pessoas que responderam excelente;
   - A quantidade de pessoas que responderam regular;
   - A percentagem de pessoas que responderam bom entre todos os expectadores analisados.
