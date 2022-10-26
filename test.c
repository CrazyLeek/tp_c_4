#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct
{
    int score;
    char jeu[100];
    char alias[40];
}donnee_t;

int main_2()
{
    donnee_t essai;

    essai.score = 4;
    strcpy(essai.jeu, "Flappy bird");
    strcpy(essai.alias, "fortnite the bosse");

    printf("%d\n", essai.score);
    printf("%s\n", essai.jeu);
    printf("%s\n", essai.alias);

    return 0;
}