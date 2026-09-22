#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include "GAME.h"

#define DELAY 10000
#define MAX 100


void setColor(int textColor, int bgColor);
void chiamate_salvate(int *LIFE, int *cake);
void file(int *cake);
void rea(int *cake);
void BENVENUTO();
void GAMEOVER(int LIFE, int *cake);
void END(int LIFE, int *cake);
void checklife(int LIFE, int *cake);
void ripeti(int *LIFE, int *cake);
int Scelta(); 
void lvl_1(int *LIFE, int *cake);
void lvl_2(int *LIFE, int *cake);
void lvl_3(int *LIFE, int *cake);
void lvl_4(int *LIFE, int *cake);
void lvl_5(int *LIFE, int *cake);
void lvl_6(int *LIFE, int *cake);
void lvl_7( int *LIFE, int *cake);
void lvl_8(int *LIFE, int *cake);
void lvl_9(int *LIFE, int *cake);
void BOSS(int *LIFE, int *cake);

int main(){
    BENVENUTO();
    int cake=0;
    int LIFE=3;
    rea(&cake);
    chiamate_salvate(&LIFE, &cake);
    
    return 0;
}
