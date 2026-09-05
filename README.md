# Sala de Cinema em C

[Contexto](#contexto)  
[Funcionalidades](#funcionalidades)  
[Observações](#observações) 

---

## CONTEXTO

>- Uma sala de cinema é organizada em **5 filas** (A a E), com **9 poltronas** cada, formando uma **matriz 5x9**, em que cada posição corresponde a uma poltrona real.
>
>- Cada poltrona pode estar em um de três estados: **livre**, **ocupada** ou em **manutenção**.
>
>- A poltrona em manutenção permanece visível no mapa, mas não pode ser vendida nem é considerada no cálculo de ocupação da sala.
>
>- Use #define para definir a quantidade de filas e lugares (**#define FILAS 5** e **#define LUGARES 9**).
>
>- No início do programa, todas as poltronas estão livres, exceto três, que devem começar em manutenção (defina quais no código para facilitar os testes).

### O programa exibe o menu abaixo repetidamente, até que o usuário escolha sair:

```
1. Exibir mapa da sala
2. Vender poltrona escolhida
3. Venda rápida (primeira poltrona livre)
4. Cancelar venda
5. Marcar / liberar manutenção
6. Relatório
7. Registrar final de smm               8   mu 8imi ummmmmmmmm  8m d´~;
































































mnjb nmb b b 
]

]ç kçç~jy














0. Sair
```

 ## FUNCIONALIDADES

1. **EXIBIR MAPA:** Imprima a sala em formato de tabela, com a letra da fila à esquerda e o número da poltrona no topo:

```
===== T E L A ======
   1 2 3 4 5 6 7 8 9
A: L L X X L L M L L
B: L L L L L L L L L
C: L M L L X X L L L
D: L L L L L L L L L
E: L L L L L L L M L
```

L = livre  
X = ocupada  
M = manutencao   

2. **VENDER POLTRONA ESCOLHIDA:** Leia a fila (letra de A a E) e o número da poltrona (1 a 9).
Recuse, com mensagem específica para cada caso: fila inválida, número fora do intervalo, poltrona já ocupada e poltrona em manutenção.

3. **VENDA RÁPIDA:** Sem perguntar nada ao usuário, o programa localiza a primeira poltrona livre, percorrendo da fila A até a E e, dentro de cada fila, da esquerda para a direita, ignorando as ocupadas e as em manutenção. A venda é efetivada automaticamente e o programa informa qual poltrona foi vendida (ex.: Vendida: poltrona C5). Se não houver nenhuma livre, avise que a sala está esgotada.

4. **CANCELAR VENDA:** Leia fila e poltrona e marque a poltrona como livre.

5. **MANUTENÇÃO:** Alterna o estado de uma poltrona entre livre e em manutenção. Uma poltrona
ocupada não pode entrar em manutenção antes do cancelamento da venda.

6. **RELATÓRIO:** Informe o total de poltronas ocupadas, livres e em manutenção. A taxa de ocupação, calculada sobre as poltronas disponíveis (total da sala menos as em
manutenção). A quantidade de poltronas livres em cada fila. A fila com o maior número de poltronas livres.

7. **REGISTRAR FINAL DE SESSÃO:** Encerra a sessão atual e prepara a sala para a próxima: todas as poltronas ocupadas voltam ao estado livre. As poltronas em manutenção permanecem em manutenção.

## OBSERVAÇÕES

- Faça cada **funcionalidade em formato de função**.
- O programa **main deve integrar e gerenciar as funções**.
- Utilize apenas a biblioteca **<stdio.h>**.

## COMO COMPILAR E EXECUTAR

Pré-requisitos: ter o Dev C++ instalado.

1. Clone o repositório
2. Abra o Dev C++
3. Vá na pasta do repositório e selecione o `cinema.c`
4. Clique em **Compilar e Executar** (F11), ou separadamente: **Compilar** (F9) e depois **Executar** (F10)

O executável será gerado automaticamente na mesma pasta do projeto.