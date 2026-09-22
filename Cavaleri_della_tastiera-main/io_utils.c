#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include "GAME.h"

void setColor(int textColor, int bgColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}

int Scelta() {
    char buffer[MAX];
    char Scelta;
    int riprova=0;
    
    do{
        printf("  \t\t\t\t:");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        
            Scelta = buffer[0];
        
        
            if (Scelta == '\n' && buffer[1] == '\0') {
            
                Scelta = ' ';
            }
        } else {
        
            fprintf(stderr, "Input error.\n");
            exit(1);
        }
 
        switch(Scelta) {
            case 'a':
            case 'A':
                return 1;
            case 'b':
            case 'B':
                return 2;
            case 'c':
            case 'C':
                return 3;
            default:
            printSlowly("\n \t\t\t\t il caratere inserito non e' corretto\n\t\t\t\t usa un caretere in sovrimpressione\n", DELAY);
            riprova++;

        }
    }while(riprova!=4);
    printSlowly("\n \t\t\t\t hai rotto il ca**o ", DELAY);
    return 4;
}

void printSlowly(const char *text, unsigned int delay) 
{
    while (*text) {
        printf("%c", *text++);
        fflush(stdout); 
        Sleep(delay/1000); 
    }
}