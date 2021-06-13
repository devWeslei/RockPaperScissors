#include <stdio.h>
#include <stdlib.h>

int main()
{
   //strcmp(strg1, strg2)==0
   //Pedra,papel,tesoura!
   char player[256];
   char player2[256];

   printf("Player 1, sua vez...");
   scanf("%s",&player);

   printf("\nPlayer 2, sua vez...");
   scanf("%s",player2);

   printf("\nAguarde, estamos calculando o resultado...\n");
   if(strcmp(player,"papel")==0){

            if(strcmp(player2,"papel")==0){
                printf("\nEmpate!");
           }else if(strcmp(player2,"tesoura")==0){
               printf("\nPlayer 2 ganhou, porque corta papel!");
           }else if(strcmp(player2,"pedra")==0){
               printf("\nplayer 2 perdeu, porque embrulha/ganha pedra!");
           }else{
               printf("\nO player 2 jogou uma informacao invalida!");
           }


   }else if(strcmp(player,"tesoura")==0){

            if(strcmp(player2,"tesoura")==0){
                printf("\nEmpate!");
           }else if(strcmp(player2,"papel")==0){
               printf("\nPlayer 2 perdeu, porque corta papel!");
           }else if(strcmp(player2,"pedra")==0){
               printf("\nplayer 2 ganhou, porque esmaga tesoura!");
           }else{
               printf("\nO player 2 jogou uma informacao invalida!");

           }
   }else if(strcmp(player,"pedra")==0){

            if(strcmp(player2,"pedra")==0){
                printf("\nEmpate!");
           }else if(strcmp(player2,"papel")==0){
               printf("\nPlayer 2 ganhou, porque embrulha/ganha pedra!");
           }else if(strcmp(player2,"tesoura")==0){
               printf("\nplayer 1 ganhou, porque esmaga tesoura!");
           }else{
               printf("\nO player 2 jogou uma informacao invalida!");
           }

   }else{
       printf("\nPlayer 1 jogou uma informacao invalida!");
   }
    return 0;
}
