#include <stdio.h>
#include <stdlib.h>

int main()
{
    char player[256];
    char player2[256];

    printf("\nSejam Bem-vindos ao jogo de Pedra, papel e tesoura\n");
    printf("\n------------------------\n");

    printf("\nPlayer 1 sua vez: \n");
    scanf("%s",player);

    printf("\nPlayer 2 sua vez: \n");
    scanf("%s",player2);

    printf("\nAguarde enquanto calculamos o resultado\n");
    printf("\n------------------------\n");

    if(strcmp(player,"papel") == 0){

        if(strcmp(player2,"papel") == 0){
            printf("Empate!");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("Player 2 Venceu!");
        }else if(strcmp(player2,"pedra") == 0){
            printf("Player 1 venceu!");
        }else{
            printf("O player 2 jogou uma informação invalida");
        }


    }else if(strcmp(player,"tesoura") == 0){

      if(strcmp(player2,"papel") == 0){
            printf("Player 1 Venceu!");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("Empate!");
        }else if(strcmp(player2,"pedra") == 0){
            printf("Player 2 Venceu!");
        }else{
            printf("O player 2 jogou uma informação invalida");
        }


    }else if(strcmp(player,"pedra") == 0){
        if(strcmp(player2,"papel") == 0){
            printf("Player 2 Venceu!");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("Player 1 Venceu!");
        }else if(strcmp(player2,"pedra") == 0){
            printf("Empate");
        }else{
            printf("O player 2 jogou uma informação invalida");

        }




    }else{printf("O player 1 jogou uma informação invalida");}

    return 0;
}
