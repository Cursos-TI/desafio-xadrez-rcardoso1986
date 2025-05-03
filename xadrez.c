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
    printf("4 - Cavalo\n");

    scanf("%d", &option);

    int count_movements;
    printf("Quantas casas você deseja andar?\n");
    scanf("%d", &count_movements);
    
    switch(option)
    {
        case 1:
            // 🏅 Nível Novato
            // Implementação de Movimentação do Bispo
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
            while(count_movements > 0){
                printf("Cima\n");
                printf("Direita\n");
                count_movements--;
            }
            break;
        case 2:
            // 🏅 Nível Novato
            // Implementação de Movimentação da Torre
            for(int i = 0; i < count_movements; i++) {
                printf("Frente \n");
            }
            break;
        case 3:
            // 🏅 Nível Novato
            // Implementação de Movimentação da Rainha
            do{
                printf("Esquerda \n");
                count_movements--;
            }
            while(count_movements > 0);
            break;
        case 4:
            // 🏅 Nível Aventureiro
            // Implementação de Movimentação do cavalo
            while(count_movements > 0)
            {
                for(int i=0; i<2; i++){
                    printf("Cima\n");
                }
                printf("Direita\n");
                count_movements--;
            }
            break;
        default:
            printf("Opção inválida \n");
            break;
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