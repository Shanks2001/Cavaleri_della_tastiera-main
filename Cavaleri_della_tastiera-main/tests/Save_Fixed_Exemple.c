#include <stdio.h>
#include <stdlib.h>
#include "GAME.h"

void file(int *cake){
    (*cake)++;
    FILE *fp=fopen("salva.txt","w");
    if(fp==NULL){
        printf("ERROR");
        exit(1);
    }
    fprintf(fp, "%d", *cake);
    fclose(fp);
}
void rea(int *cake){
    FILE *fp=fopen("salva.txt","r");
    if(fp==NULL){
        file(cake);          /* primo avvio: crea il salvataggio */
        return;              /* <-- prima qui si arrivava a fclose(NULL) */
    }
    if(fscanf(fp, "%d", cake) != 1) *cake = 1;   /* file vuoto/corrotto */
    fclose(fp);
}