#include "paravia.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <curses.h>
#include <iostream>

int main(void)
{
    player MyPlayers[6];
    int NumOfPlayers, i, level;
    char string[255], name[25];
    bool MorF;
    /* Initialize the random number generator seed. */
    srand(time(NULL));
    /* Start the game. */
    printf("Santa Paravia and Fiumaccio\n");
    printf("\nDo you wish instructions (Y or N)? ");
    fgets(string, 254, stdin);
    if(string[0] == 'y' || string[0] == 'Y')
        PrintInstructions();
    printf("How many people want to play (1 to 6)? ");
    fgets(string, 254, stdin);
    NumOfPlayers = (int)atoi(string);
    if(NumOfPlayers < 1 || NumOfPlayers > 6)
    {
        printf("Thanks for playing.\n");
        return(0);
    }
    printf("What will be the difficulty of this game:\n1. Apprentice\n");
    printf("2. Journeyman\n3. Master\n4. Grand Master\n\nChoose: ");
    fgets(string, 254, stdin);
    level = (int)atoi(string);
    if(level < 1)
        level = 1;
    if(level > 4)
        level = 4;
    for(i = 0; i < NumOfPlayers; i++)
    {
        printf("Who is the ruler of %s? ", CityList[i]);
        fgets(name, 24, stdin);
        /* Strip off the trailing \n. */
        name[strlen(name) - 1] = '\0';
        printf("Is %s a man or a woman (M or F)? ", name);
        fgets(string, 3, stdin);
        if(string[0] == 'm' || string[0] == 'M')
            MorF = True;
        else
            MorF = False;
        InitializePlayer(&MyPlayers[i], 1400, i, level, name, MorF);
    }
    /* Enter the main game loop. */
    PlayGame(MyPlayers, NumOfPlayers);
    /* We're finished. */
    return(0);
}
