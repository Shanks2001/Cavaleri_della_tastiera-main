#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include "GAME.h"

void chiamate_salvate(int *LIFE, int *cake);
void GAMEOVER(int LIFE, int *cake);
void END(int LIFE, int *cake);
void checklife(int LIFE, int *cake);
void ripeti(int *LIFE, int *cake);

void checklife(int LIFE, int *cake)
{
 if (LIFE == 0) 
        {
            system("cls");
            GAMEOVER(LIFE, cake);
        }
}
void GAMEOVER(int LIFE, int *cake){
    printf("\n");
    printf("  \t\t\t\tGGGGGGG   AAAAAA  MMM MMM   EEEEEEE    OOOOO   VV     VV  EEEEEEE  RRRRRR \t \t \n");
    printf("  \t\t\t\tG         A    A  MM M MM   E         O     O   VV   VV   E        R     R\t \t  \n");
    printf("  \t\t\t\tG   GGG   AAAAAA  MM M MM   EEEEE     O     O    VV VV    EEEEE    RRRRRR\t \t   \n");
    printf("  \t\t\t\tG     G   A    A  MM   MM   E         O     O     VVV     E        R   RR\t \t   \n");
    printf("  \t\t\t\tGGGGGGG   A    A  MM   MM   EEEEEEE    OOOOO       V      EEEEEEE  R     R\t \t  \n");
    printf("\n");
    ripeti(&LIFE, cake);
}
void END(int LIFE, int *cake){
    printf("  \t\t\t\t\t\t\tEEEEEEE   NN     NN   DDDDDD\t\t\t   \n");
    printf("  \t\t\t\t\t\t\tE         NNN    NN   D     DD\t\t\t \n");
    printf("  \t\t\t\t\t\t\tEEEEE     NNNN   NN   D      DD\t\t\t\n");
    printf("  \t\t\t\t\t\t\tE         NN NN  NN   D     DD\t\t\t \n");
    printf("  \t\t\t\t\t\t\tEEEEEEE   NN  NN NN   DDDDDD\t\t\t   \n");
    (*cake)=1;
    ripeti(&LIFE, cake);
}
void BENVENUTO(){
    setColor(13, 0);
    printf("  \t\t\t\tBBBBBBB   EEEEEEE   NN     NN  VV     VV  EEEEEEE  NN     NN  UU   UU  TTTTTTT  OOOOO   \t \t \n");
    printf("  \t\t\t\tBB    BB  E         NNN    NN  VV     VV  E        NNN    NN  UU   UU    TTT   O     O  \t \t  \n");
    printf("  \t\t\t\tBBBBBBB   EEEEE     NN NN  NN   VV   VV   EEEEE    NN NN  NN  UU   UU    TTT   O     O  \t \t   \n");
    printf("  \t\t\t\tBB    BB  E         NN  NN NN    VV VV    E        NN  NN NN  UU   UU    TTT   O     O  \t \t   \n");
    printf("  \t\t\t\tBBBBBBB   EEEEEEE   NN    NNN     VVV     EEEEEEE  NN    NNN   UUUUU     TTT    OOOOO   \t \t  \n");
    printf("\n");
    printSlowly("\n\t\t\t\t\tschiacia un tasto e parti", DELAY);
    getchar();
    system("cls");
}

void ripeti(int *LIFE, int *cake){
    char Scelta;
    char buffer[MAX];
    
    while (1) {
        printSlowly("  \t\t\t\tVuoi riprovare? (y/n): ", DELAY);
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        
            Scelta = buffer[0];
        
            if (Scelta == '\n' && buffer[1] == '\0') {
            
             Scelta = ' ';
            }
        } else {
            fprintf(stderr, "Input error.\n");
            exit(1);
        }
        switch (Scelta) {
            case 'y':
            case 'Y':
                *LIFE=3;
                chiamate_salvate(LIFE, cake);
                break; 
            case 'n':
            case 'N':
                exit(0);
            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }        
    }
}

void chiamate_salvate(int *LIFE, int *cake){
    switch(*cake){
        case 1:
        lvl_1(LIFE, cake);
        break;
        case 2:
        lvl_2(LIFE, cake);
        break;
        case 3:
        lvl_3(LIFE, cake);
        break;
        case 4:
        lvl_4(LIFE, cake);
        break;
        case 5:
        lvl_5(LIFE, cake);
        break;
        case 6:
        lvl_6(LIFE, cake);
        break;
        case 7:
        lvl_7(LIFE, cake);
        break;
        case 8:
        lvl_8(LIFE, cake);
        break;
        case 9:
        lvl_9(LIFE, cake);
        break;    
    }
}
