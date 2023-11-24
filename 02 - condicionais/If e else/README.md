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

## Exercícios

1. [Maior que 10?](/02%20-%20condicionais/If%20e%20else/01-maiorQue10.c): Faça um programa que leia um valor e mostre a mensagem "É maior que 10!" se o valor lido for maior que 10, caso contrário, mostre "Não é maior que 10!".

1. [Maior valor](/02%20-%20condicionais/If%20e%20else/02-maior.c): Faça um programa que leia dois valores e mostre qual o maior (considerando que nãos serão digitados o mesmo valores).

1. [Média com situação](/02%20-%20condicionais/If%20e%20else/03-media_com_situação.c): Leia duas notas, além de mostrar a média, mostre se o aluno foi aprovado (igual e acima de 6), ou reprovado.

1. [Positivo ou negativo?](/02%20-%20condicionais/If%20e%20else/04-positivo_ou_negativo.c): Leia um valor e escreva se ele é positivo ou negativo (considerando 0 como positivo).

1. [Ordem crescente](/02%20-%20condicionais/If%20e%20else/05-ordem_crescente.c): Leia dois valores (considere que não serão lidos valores iguais) e escreve-los e ordem crescente.

1. [Preço de vendas](/02%20-%20condicionais/If%20e%20else/06-valor_maça.c): As maças custam R$1,30 cada se forem compradas menos de uma dúzia, e R$1,00 se forem comprados pelos menos 12. Escreva um programa que leia o número de maças compradas, calcule e escreva o custo total da compra.

1. [Faixa etária](/02%20-%20condicionais/If%20e%20else/07-faixa-etaria.c): Desenvolva um algoritmo que leia a idade de uma pessoa e informe a sua faixa etária:

   - Bebê: entre 0 e 2 anos.
   - Criança: entre 3 e 11 anos.
   - Adolescente: entre 12 e 17 anos.
   - Jovem: entre 18 e 30 anos.
   - Adulto: entre 31 e 59 anos.
   - Idoso: acima de 60 anos.

1. [Duração do jogo](/02%20-%20condicionais/If%20e%20else/08-duracao_xadrez.c): Leia a hora de início e a hora do fim de um jogo de xadrez (considere apenas horas inteiras, sem os minutos) e calcule a duração de jogo em horas, sabendo que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.

1. [Média alinhada](/02%20-%20condicionais/If%20e%20else/09-mediaAlinhada.c): Um professor deseja automatizar o processo de avaliação das notas de seus alunos. Ele pede a você para criar um programa em C que irá ler as notas das três provas de um aluno e determinar sua situação acadêmica com base em sua média. O professor adota as seguintes regras:

   - A média mínima para aprovação é 7.0.
   - Se a média estiver entre 4.0 e 6.9 (inclusive), o aluno estará em recuperação.
   - Se a média for menor que 4.0, o aluno será reprovado.

   Você deve criar um programa que solicita ao usuário que insira as notas das três provas, calcula a média das notas e, em seguida, imprime a situação acadêmica do aluno com base nas regras acima.

1. [É um triangulo?](/02%20-%20condicionais/If%20e%20else/11-triangulo.c): Faça um programa que leia os 3 lados de uma forma e identifique, se é ou não um triangulo. Use if alinhados para treinar.

1. [Operações com idade](/02%20-%20condicionais/If%20e%20else/10-operaceos_com_idades.c): Leia a idade de 2 homens, em seguida leia a idade de 2 mulheres. Em seguida mostre:

   - A soma do homem mais velho com a mulher mais nova.
   - O produto do homem mais novo com a mulher mais velha
   - A soma do homem mais velho com a mulher mais nova.
   - O produto do homem mais novo com a mulher mais velha.
     > Use ifs alinhados para treinar.