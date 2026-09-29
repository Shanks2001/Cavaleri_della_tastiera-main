#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "platform.h"
#include "GAME.h"
#include "domande.h"

void BOSS(int *LIFE, int *cake);


void BOSS(int *LIFE, int *cake){
    
    setColor(3, 0);
    printSlowly("\n  \t\t\t\t~ ~ BOSS ~ ~ \n\n", DELAY);

    for(int i = 0; i < NUM_DOMANDE_BOSS; i++){
        chiediScelta(bossScelte[i], LIFE, cake);
        chiediTesto(bossBlank[i], 1, LIFE, cake);
    }
    file(cake);
    END(*LIFE, cake);
}