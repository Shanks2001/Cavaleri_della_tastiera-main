#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include "GAME.h"


void file(int *cake);
void rea(int *cake);

void file(int *cake){
    (*cake)++;
    FILE *fp=fopen("salva.txt","w");
    if(fp==NULL){
        printf("ERROR");
        exit(1);
    }else{
        fprintf(fp, "%d", *cake);
    }
    fclose(fp);
}
void rea(int *cake){
    FILE *fp=fopen("salva.txt","r");
    if(fp==NULL){
        file(cake);
    }else{
        fscanf(fp, "%d", cake);
    }
    fclose(fp);
}
