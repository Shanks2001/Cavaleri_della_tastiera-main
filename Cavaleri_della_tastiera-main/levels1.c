#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "platform.h"
#include "GAME.h"
#include "domande.h"

void lvl_1(int *LIFE, int *cake);
void lvl_2(int *LIFE, int *cake);
void lvl_3(int *LIFE, int *cake);
void lvl_4(int *LIFE, int *cake);
void lvl_5(int *LIFE, int *cake);

void lvl_1(int *LIFE, int *cake){
    
    setColor(3, 0);
    printSlowly("\n  \t\t\t\t~ ~ LIVELLO 1 ~ ~ \n\n", DELAY);
    chiediLivelloScelta(livello1, NUM_DOMANDE_LVL1, LIFE, cake);
    
    clenScreen(*LIFE);
    file(cake);
    lvl_2(LIFE, cake);
}

void lvl_2(int *LIFE, int *cake){
    
    setColor(3, 0);
    printSlowly("  \t\t\t\t~ ~ LIVELLO 2 ~ ~ \n\n", DELAY);
    chiediLivelloScelta(livello2, NUM_DOMANDE_LVL2, LIFE, cake);
    clenScreen(*LIFE);
    file(cake);
    lvl_3(LIFE, cake);

}

void lvl_3(int *LIFE, int *cake){
    
    setColor(3, 0);
    printSlowly("  \t\t\t\t~ ~ LIVELLO 3 ~ ~\n\n", DELAY);
    chiediLivelloScelta(livello3, NUM_DOMANDE_LVL3, LIFE, cake);
    clenScreen(*LIFE);
    file(cake);
    lvl_4(LIFE, cake);
}

void lvl_4(int *LIFE, int *cake){
    
    setColor(3, 0);
    printSlowly("  \t\t\t\t~ ~ LIVELLO 4 ~ ~ \n\n", DELAY);
    chiediLivelloScelta(livello4, NUM_DOMANDE_LVL4, LIFE, cake);
    clenScreen(*LIFE);
    file(cake);
    lvl_5(LIFE, cake);
}

void lvl_5(int *LIFE, int *cake){
    
    setColor(3, 0);
    printf("  \t\t\t\t~ ~ LIVELLO 5 ~ ~ \n\n");
    chiediLivelloScelta(livello5, NUM_DOMANDE_LVL5, LIFE, cake);
    clenScreen(*LIFE);
    file(cake);
    lvl_6(LIFE, cake);
}
