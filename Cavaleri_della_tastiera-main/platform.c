#include <stdio.h>
#include "platform.h"
#ifdef _WIN32
    #include<windows.h>
#else
    #include <unistd.h>
#endif

void clearScreen(void){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void sleepMs(unsigned int ms){
    #ifdef _WIN32
        Sleep(ms);
    #else
        usleep( ms * 1000);
    #endif
}

void setColor(int textColor, int bgColor){
    #ifdef _WIN32
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
    #else
        static const int ansi[8] = {30, 34, 32, 36, 31, 35, 33,37};
        printf("\033[%dm", (textColor >= 0 && textColor <8) ? ansi[textColor] : 37);
    #endif
}

void printSlowly(const char *text, unsigned int delay) 
{
    while (*text) {
        printf("%c", *text++);
        fflush(stdout); 
        sleepMs(delay/1000); 
    }
}
