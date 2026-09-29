#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "platform.h"
#include "GAME.h"
#include "domande.h"

void lvl_6(int *LIFE, int *cake);
void lvl_7(int *LIFE, int *cake);
void lvl_8(int *LIFE, int *cake);
void lvl_9(int *LIFE, int *cake);

void lvl_6(int *LIFE, int *cake){
    setColor(3, 0);
    printSlowly("  \t\t\t\t~ ~ LIVELLO 6 ~ ~ \n\n", DELAY);
    chiediSequenzaTesto(livello6, NUM_BLANK_LVL6, LIFE, cake);
    clenScreen(*LIFE);
    file(cake);
    lvl_7(LIFE, cake);
}

void lvl_7(int *LIFE, int *cake){
    setColor(3, 0);
    printSlowly("  \t\t\t\t~ ~ LIVELLO 7 ~ ~ \n\n", DELAY);
    chiediSequenzaTesto(livello7, NUM_BLANK_LVL7, LIFE, cake);
    clenScreen(*LIFE);
    file(cake);
    lvl_8(LIFE, cake);
}

void lvl_8(int *LIFE, int *cake){
    setColor(3, 0);
    printSlowly("  \t\t\t\t~ ~ LIVELLO 8 ~ ~ \n\n", DELAY);
    chiediSequenzaTesto(livello8, NUM_BLANK_LVL8, LIFE, cake);
    clenScreen(*LIFE);
    file(cake);
    lvl_9(LIFE, cake);
}

void lvl_9(int *LIFE, int *cake){
    setColor(3, 0);
    printf("  \t\t\t\t~ ~ LIVELLO 9 ~ ~ \n\n");
    chiediSequenzaTesto(livello9, NUM_BLANK_LVL9, LIFE, cake);
    clenScreen(*LIFE);
    file(cake);
    BOSS(LIFE, cake);
}