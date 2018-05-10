#include "paravia.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <curses.h>
#include <iostream>

int main(void) {
    char CityList[7][15]= {"Santa Paravia", "Fiumaccio", "Torricella", "Molinetto",
        "Fontanile", "Romanga", "Monterana"};
    Player MyPlayers[6];
    char string[255], name[25];
    
    srand(time(NULL));
    
    printf("Santa Paravia and Fiumaccio\n");
    printf("\nDo you wish to read the instructions? (Y/N) ");
    
    fgets(string, 254, stdin);
    if (string[0] == 'y' || string[0] == 'Y')
        PrintInstructions();
    
    printf("How many people want to play (1 to 6)? ");
    fgets(string, 254, stdin);
    
    int NumOfPlayers = atoi(string);
    if (NumOfPlayers < 1 || NumOfPlayers > 6) {
        printf("Thanks for playing.\n");
        return 0;
    }
    
    printf("What will be the difficulty of this game:\n1. Apprentice\n");
    printf("2. Journeyman\n3. Master\n4. Grand Master\n\nChoose: ");
    fgets(string, 254, stdin);
    int level = atoi(string);
    
    if (level < 1)
        level = 1;
    if (level > 4)
        level = 4;
    
    for (int i = 0; i < NumOfPlayers; i++) {
        printf("Who is the ruler of %s? ", CityList[i]);
        fgets(name, 24, stdin);
        
        /* Strip off the trailing \n. */
        name[strlen(name) - 1] = '\0';
        
        printf("Is %s male or female? (M or F) ", name);
        fgets(string, 3, stdin);
        
        bool isMale = (*string == 'm' || *string == 'M');
        
        InitializePlayer(&MyPlayers[i], 1400, i, level, name, isMale);
    }
    
    PlayGame(MyPlayers, NumOfPlayers);
    
    return 0;
}
