#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int option;
    printf("Selecione a peça desejada \n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");

    scanf("%d", &option);

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    if(option == 1)
    {
        // Implementação de Movimentação do Bispo
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        int count_bishop;
        printf("Quantas casas você deseja andar?\n");
        scanf("%d", &count_bishop);
        while(count_bishop > 0){
            printf("Cima\n");
            printf("Direita\n");
            count_bishop--;
        }
    }else if(option == 2)
    {
        // Implementação de Movimentação da Torre
        int count_tower;
        printf("Quantas casas você deseja andar?\n");
        scanf("%d", &count_tower);
        for(int i = 0; i < count_tower; i++) {
            printf("Frente \n");
        }
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    }else if(option == 3)
    {
        // Implementação de Movimentação da Rainha
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        int count_queen;
        printf("Quantas casas você deseja andar?\n");
        scanf("%d", &count_queen);
        do{
            printf("Esquerda \n");
            count_queen--;
        }
        while(count_queen > 0);
    }else{
        printf("Opção inválida\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}