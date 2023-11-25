# Condicionais

As condicionais são estruturas de controle que permitem a execução de um bloco de código apenas se uma condição for verdadeira. Elas são usadas para verificar o valor de uma expressão ou variável e, com base no resultado, escolher uma das duas opções de execução.

Existem dois tipos principais de condicionais:

**Condicional simples:** É a forma mais básica de condicional e consiste em uma única condição que, se for verdadeira, executa o bloco de código seguinte, e se for falsa, não executa. Por exemplo:

```c
if (a > b)
  printf("a é maior que b");
```

**Condicional composta:** É uma condicional que consiste em duas condições: uma condição principal e uma condição secundária. A condição secundária é executada apenas se a condição principal for falsa. Por exemplo:

```c
if (a > b)
  printf("a é maior que b");
else
  printf("a é menor ou igual a b");
```

> As condicionais também podem ser combinadas para criar estruturas mais complexas. Por exemplo, uma condicional pode ser usada dentro de outra condicional, ou várias condicionais podem ser combinadas usando operadores lógicos.

Aqui estão alguns exemplos de como as condicionais podem ser usadas em lógica de programação:

- **Validar dados**: As condicionais podem ser usadas para validar dados inseridos pelo usuário. Por exemplo, um programa pode usar uma condicional para verificar se um número inserido é válido.
- **Controlar o fluxo de execução**: As condicionais podem ser usadas para controlar o fluxo de execução de um programa. Por exemplo, um programa pode usar uma condicional para executar um bloco de código apenas se uma determinada condição for atendida.
- **Implementar algoritmos**: As condicionais são essenciais para a implementação de algoritmos. Por exemplo, um algoritmo de ordenação pode usar uma condicional para comparar dois elementos e determinar qual deles é maior.

Condicionais estudadas em sala de aula:
- [If / Else](If_e_else/README.md)
- [Switch case](switch_case/README.md)