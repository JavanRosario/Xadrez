# Movimentos de Peças de Xadrez em C

Este programa em linguagem C simula os movimentos de algumas peças de xadrez usando estruturas de repetição como `while`, `for` e `do...while`.

## Peças implementadas

- **Torre**: Move para a direita usando um loop `while`.
- **Rainha**: Move para a esquerda usando um loop `for`.
- **Bispo**: Move na diagonal superior direita usando `for` aninhado dentro de um `do...while`.
- **Cavalo**: Move para baixo com estrutura `while` contendo `for`, seguido de uma ação de finalização.

## Exemplo de saída

```
==================================
MOVIMENTO TORRE:
Movendo torre para direita
Movendo torre para direita
Movendo torre para direita
Movendo torre para direita
Movendo torre para direita
Movendo torre para direita
==================================
MOVIMENTO RAINHA
Movendo rainha para esquerda
... (até 8 vezes)
==================================
MOVIMENTO BISPO
Movendo para cima, direita!
Movendo para cima, direita!
... (até 5 vezes)
==================================
MOVIMENTO CAVALO
Movendo para baixo
Movendo para baixo
Movendo para baixo
Finalizou na esquerda
```

## Compilação

Para compilar e rodar o código:

```bash
gcc xadrez.c -o xadrez
./xadrez
```

## Objetivo

Este código é didático e tem como foco mostrar o uso de diferentes estruturas de repetição em C aplicadas de forma criativa, representando movimentos típicos de peças de xadrez.

## Autor

Javan Oliveira  
📧 oliveiraajavan@hotmail.com
