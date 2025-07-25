#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("*** Jogo de Jokenpô ***\n\n");
    printf("Digite o número de uma das opções abaixo:\n");
    printf("1.Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");

    scanf ("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;


    switch (escolhaJogador)
    {
        case 1:
        printf("Jogador: Pedra - ");
        break;

        case 2:
        printf("Jogador: Papel - ");
        break;

        case 3:
        printf("Jogador: Tesoura - ");
        break;

        default:
        printf("Opcão Inválida!\n");
        break;
    } 

    switch (escolhaComputador)
    {
        case 1:
        printf("Computador: Pedra\n");
        break;

        case 2:
        printf("Computador: Papel\n");
        break;

        case 3:
        printf("Computador: Tesoura\n");
        break;
    } 

    if (escolhaJogador == escolhaComputador){
        printf("Empatou, jogue novamente!\n");
    } else if (escolhaJogador == 1) && (escolhaComputador == 3) || 
                (escolhaJogador == 2) && (escolhaComputador == 1) || 
                (escolhaJogador == 3) && (escolhaComputador == 2)
    {
        printf("Parabéns, você é o ganhador!\n");
    } else {
        printf("Que pena, você perdeu a rodada.\n");
    }

    return 0;
}