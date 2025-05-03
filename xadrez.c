#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


void moveBishop(int quantity_movements)
{
    if(quantity_movements > 0)
    {
        printf("Cima\n");
        printf("Direita\n");
        moveBishop(quantity_movements - 1);
    }
}

void moveQueen(int quantity_movements)
{
    if(quantity_movements > 0)
    {
        printf("Esquerda \n");
        moveQueen(quantity_movements - 1);
    }
}

void moveTower(int quantity_movements)
{
    if(quantity_movements > 0)
    {
        printf("Frente \n");
        moveTower(quantity_movements - 1);
    }
}

void moveHorse(int quantity_movements) {
    while(quantity_movements > 0)
    {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if ((i == 2 && j == 1)) {
                    printf("Cima\n");
                    printf("Cima\n");
                    printf("Direita\n");
                    break;
                } else {
                    continue;
                }
            }
        }

        quantity_movements--;
    }

}

void moveBishopWithLoop(int quantity_movements) {
    printf("Bispo com loop aninhado\n");
    for (int i = 0; i < quantity_movements; i++) {
        for (int j = 0; j < quantity_movements; j++) {
            if (i == j) {
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }
}

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
        // Implementação de Movimentação do Bispo
        case 1:
            // 🏅 Nível Novato
            /*
            while(count_movements > 0){
                printf("Cima\n");
                printf("Direita\n");
                count_movements--;
            }
            */


            //🏅 Nível Aventureiro
            // moveBishop(count_movements);


            //🏅 Nível Mestre
            moveBishopWithLoop(count_movements);
            break;
        
        // Implementação de Movimentação da Torre
        case 2:
            // 🏅 Nível Novato
            /*
            for(int i = 0; i < count_movements; i++) {
                printf("Frente \n");
            }
            */


            /*
            * 🏅 Nível Aventureiro
            *  Não há implementação - para esse nivel
            */


            //🏅 Nível Mestre
            moveTower(count_movements);
            break;

        // Implementação de Movimentação da Rainha
        case 3:
            // 🏅 Nível Novato
            /*
            do{
                printf("Esquerda \n");
                count_movements--;
            }
            while(count_movements > 0);
            */


            /*
            * 🏅 Nível Aventureiro
            *  Não há implementação - para esse nivel
            */


            //🏅 Nível Mestre
            moveQueen(count_movements);
            break;

        // Implementação de Movimentação do cavalo
        case 4:
            /*
            * 🏅 Nível Novato
            *  Não há implementação - para esse nivel
            */


            // 🏅 Nível Aventureiro
            /*
            while(count_movements > 0)
            {
                for(int i=0; i<2; i++){
                    printf("Cima\n");
                }
                printf("Direita\n");
                count_movements--;
            }
            */

            
            //🏅 Nível Mestre 
            moveHorse(count_movements);
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