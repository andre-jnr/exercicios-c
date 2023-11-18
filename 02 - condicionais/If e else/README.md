# IF e Else

## Operadores lógicos

Em programação, operadores lógicos são usados para combinar expressões lógicas para formar expressões lógicas mais complexas. Eles podem ser usados para verificar condições e tomar decisões no código.

Os operadores lógicos mais comuns são:

- AND (`&&`): Retorna verdadeiro se ambos os operandos forem verdadeiros.
- OR (`||`): Retorna verdadeiro se pelo menos um dos operandos for verdadeiro.
- NOT (`!`): Retorna verdadeiro se o operando for falso.

### Tabela com comparadores lógicos

| símbolo | significado           |
| ------- | --------------------- |
| \>      | Maior que...          |
| =>      | Maior ou igual a...   |
| ==      | Igual a...            |
| !=      | Diferente...          |
| <       | Menor que...          |
| =<      | Igual ou menor que... |

## Sintaxe

Em C, as instruções `if` e `else` são utilizadas para controlar o fluxo de execução do código. Elas permitem que o programador execute diferentes blocos de código dependendo do valor de uma expressão condicional.

A sintaxe básica de uma instrução `if` é a seguinte:

```c
if (expressão_condicional) {
  // bloco de código executado se a expressão_condicional for verdadeira
}
```

Por exemplo, a seguinte instrução `if` verifica se uma variável `x` é maior que 10:

```c
int x = 15;

if (x > 10) {
  printf("x é maior que 10\n");
}
```

Se o valor de `x` for maior que 10, o bloco de código dentro das chaves será executado. Nesse caso, a mensagem "x é maior que 10" será impressa no console.

A instrução `else` pode ser usada para executar um bloco de código diferente se a expressão condicional for falsa. A sintaxe básica é a seguinte:

```c
if (expressão_condicional) {
  // bloco de código executado se a expressão_condicional for verdadeira
} else {
  // bloco de código executado se a expressão_condicional for falsa
}
```

Por exemplo, a seguinte instrução `if...else` verifica se uma variável `x` é maior que 10. Se o valor de `x` for maior que 10, a mensagem "x é maior que 10" será impressa no console. Se o valor de `x` não for maior que 10, a mensagem "x é menor ou igual a 10" será impressa no console.

```c
int x = 5;

if (x > 10) {
  printf("x é maior que 10\n");
} else {
  printf("x é menor ou igual a 10\n");
}
```

As instruções `if` e `else` podem ser aninhadas para criar estruturas de decisão mais complexas. Por exemplo, a seguinte instrução `if...else` verifica se uma variável `x` é maior que 10. Se o valor de `x` for maior que 10, a instrução `if` interna é executada para verificar se `x` é maior que 20.

```c
int x = 15;

if (x > 10) {
  if (x > 20) {
    printf("x é maior que 20\n");
  } else {
    printf("x é maior que 10, mas menor que 20\n");
  }
} else {
  printf("x é menor ou igual a 10\n");
}
```

Aqui estão alguns exemplos de como as instruções `if` e `else` podem ser usadas:

- Para verificar se um usuário digitou uma entrada válida.
- Para executar um bloco de código apenas se uma determinada condição for atendida.
- Para criar um menu de opções.
- Para controlar o fluxo de um jogo ou aplicativo.

As instruções `if` e `else` são ferramentas poderosas que podem ser usadas para controlar o fluxo de execução do código de forma eficaz.
