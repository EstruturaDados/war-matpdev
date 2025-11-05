// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//
// ============================================================================
//
// OBJETIVOS:
// - Modularizar completamente o código em funções especializadas.
// - Implementar um sistema de missões para um jogador.
// - Criar uma função para verificar se a missão foi cumprida.
// - Utilizar passagem por referência (ponteiros) para modificar dados e
//   passagem por valor/referência constante (const) para apenas ler.
// - Foco em: Design de software, modularização, const correctness, lógica de jogo.
//
// ============================================================================

// Inclusão das bibliotecas padrão necessárias para entrada/saída, alocação de memória, manipulação de strings e tempo.

// --- Constantes Globais ---
// Definem valores fixos para o número de territórios, missões e tamanho máximo de strings, facilitando a manutenção.

// --- Estrutura de Dados ---
// Define a estrutura para um território, contendo seu nome, a cor do exército que o domina e o número de tropas.

// --- Protótipos das Funções ---
// Declarações antecipadas de todas as funções que serão usadas no programa, organizadas por categoria.
// Funções de setup e gerenciamento de memória:
// Funções de interface com o usuário:
// Funções de lógica principal do jogo:
// Função utilitária:

// --- Função Principal (main) ---
// Função principal que orquestra o fluxo do jogo, chamando as outras funções em ordem.
#include <stdio.h>
#include <string.h>

#define N 5

typedef struct
{
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main(void)
{
    Territorio territorios[N];
    int i;

    printf("Cadastro de %d territórios\n", N);
    for (i = 0; i < N; i++)
    {
        printf("Território %d\n", i + 1);
        printf("Nome: ");
        if (scanf("%29s", territorios[i].nome) != 1)
        {
            printf("Erro ao ler nome.\n");
            return 1;
        }
        printf("Cor do exército: ");
        if (scanf("%9s", territorios[i].cor) != 1)
        {
            printf("Erro ao ler cor.\n");
            return 1;
        }
        printf("Número de tropas: ");
        if (scanf("%d", &territorios[i].tropas) != 1)
        {
            printf("Erro ao ler tropas.\n");
            return 1;
        }
    }

    printf("\nDados dos territórios cadastrados:\n");
    for (i = 0; i < N; i++)
    {
        printf("Território %d: %s, Cor: %s, Tropas: %d\n",
               i + 1, territorios[i].nome, territorios[i].cor, territorios[i].tropas);
    }

    return 0;
}
