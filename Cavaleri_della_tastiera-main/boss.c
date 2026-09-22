#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include "GAME.h"

void BOSS(int *LIFE, int *cake);


void BOSS(int *LIFE, int *cake){
    char Scelt[MAX];
     char vero2[]= ",";
    char vero[]= "array[i]";
    char vero1[]="s_ptr";
    int risposta;
    setColor(3, 0);
    printSlowly("\n  \t\t\t\t~ ~ BOSS ~ ~ \n\n", DELAY);
    do
    {
        setColor(3,0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);//a
        printSlowly("  \t\t\t\tA cosa serva manca a questo codice?\n", DELAY);
        setColor(8, 0);
        printSlowly("  \t\t\t\tvoid elimina(int *array, int *n){\n\t\t\t\t\tint k=0;\n\t\t\t\tfor (int i = 0; i < *n; i++) {\n\t\t\t\t\t\tint g = 0;\n\t\t\t\t\t\tfor (int j = 0; j < k; j++) {\n\t\t\t\t\t\t\tif (== array[j]) {\n\t\t\t\t\t\t\t\tg = 1;\n\t\t\t\t\t\t\t\tbreak;\n\t\t\t\t\t\t\t}\n\t\t\t\t\t\t}\n\t\t\t\t\t\tif (!g) {\n\t\t\t\t\t\t\tarray[k] = array[i];\n\t\t\t\t\t\t\t k++;\n\t\t\t\t\t\t}\n\t\t\t\t\t}\n\t\t\t\t\t*n=k;\n\t\t\t\t\tvisualiza(array, *n);\n\t\t\t\t}\n", DELAY);
        setColor(3,0);
        printSlowly("  \t\t\t\tA) la condizione nel if\n", DELAY);
        printSlowly("  \t\t\t\tB) i punti e virgola\n", DELAY);
        printSlowly("  \t\t\t\tC) l'incremento\n", DELAY);
        risposta = Scelta();
        if(risposta != 1)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        }

    checklife(*LIFE, cake);
    }while (risposta != 1);

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t1:");
        scanf("%s", Scelt);
        int len = strlen(Scelt);

        if (Scelt[len - 1] == '\n')
            {
                Scelt[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelt, vero)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE, cake);
    }while(strcmp(Scelt, vero)!=0);

    memset(Scelt, '\0', MAX);

    do
    {
        setColor(3,0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);//b
        printSlowly("  \t\t\t\tA cosa serva manca a questo codice?\n", DELAY);
        setColor(8,0);
        printSlowly("  \t\t\t\tvoid visualiza(int *v, int n){\n\t\t\t\t\tfor(int i=0; i<n; i++){\n\t\t\t\t\t\tprintf(\"valore %d:%d\", i+1, v[i]);\n\t\t\t\t\t}\n\t\t\t\t}\n\t\t\t\tvoid inverti(int *v, int n){\n\t\t\t\t\t\tint *s_ptr = v;\n\t\t\t\t\t\tint *d_ptr = v+n-1;\n\t\t\t\t\t\twhile( < d_ptr){\n\t\t\t\t\t\t\tint t=*s_ptr;\n\t\t\t\t\t\t\t*s_ptr=*d_ptr;\n\t\t\t\t\t\t\t*d_ptr=t;\n\t\t\t\t\t\t\td_ptr--;\n\t\t\t\t\t\t\ts_ptr++;\n\t\t\t\t\t\t}\n\t\t\t\t\t\t\tvisualiza(v, n);\n\t\t\t\t}\n", DELAY);
        setColor(3,0);
        printSlowly("  \t\t\t\tA) la condizione nel ciclo for\n", DELAY);
        printSlowly("  \t\t\t\tB) la condizione nel ciclo while\n", DELAY);
        printSlowly("  \t\t\t\tC) l'incremento dei cilsi\n", DELAY);
        risposta = Scelta();
        if(risposta != 2)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        }

    checklife(*LIFE, cake);
    }while (risposta != 2);

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t1:");
        scanf("%s", Scelt);
        int len = strlen(Scelt);

        if (Scelt[len - 1] == '\n')
            {
                Scelt[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelt, vero1)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE, cake);
    }while(strcmp(Scelt, vero1)!=0);

    memset(Scelt, '\0', MAX);

     do
    {
        setColor(3,0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);//b
        printSlowly("  \t\t\t\tCosa manca a questo codice?\n", DELAY);
        setColor(8,0);
        printSlowly("  \t\t\t\tvoid carica_dati_da_file(){ \n  \t\t\t\t\tFILE *fp = fopen(\"utenti.csv\", \"r\");\n  \t\t\t\t \tif (fp == 0) {\n  \t\t\t\t\t\tprintf(\"Errore nell'apertura del file\");\n  \t\t\t\t\t\texit(1);\n  \t\t\t\t\t}\n  \t\t\t\t     \tprintf(\"Dati letti dal file:\");\n  \t\t\t\t\tchar line[50];\n  \t\t\t\t\twhile (fgets(line, 50, fp) != 0){\n  \t\t\t\t\tprintf(\"%s\", line);\n  \t\t\t\t\t}\n  \t\t\t\t \tfclose(fp);\n\t\t\t\t}\n  \t\t\t\tvoid esiste(dbu arrayDBU[], int pt){\n  \t\t\t\t \tFILE *fp = fopen(\"utenti.csv\", \"r\");\n  \t\t\t\t\tif (fp == 0) {\n  \t\t\t\t \t\tprintf(\"Errore il file non essiste\");\n  \t\t\t\t \t\tfile(arrayDBU pt);\n  \t\t\t\t\t\tprintf(\"file creato\");\n  \t\t\t\t\t\treturn;\n  \t\t\t\t\t}\n  \t\t\t\t\tprintf(\"file essiste\");\n  \t\t\t\t\tfclose(fp);\n \t\t\t\t}\n", DELAY);
        setColor(3,0);
        printSlowly("  \t\t\t\tA) il un punto\n", DELAY);
        printSlowly("  \t\t\t\tB) la una virgola\n", DELAY);
        printSlowly("  \t\t\t\tC) il punto e virgola\n", DELAY);
        risposta = Scelta();
        if(risposta != 2)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        }

    checklife(*LIFE, cake);
    }while (risposta != 2);
    
    do
    {
        setColor(8, 0);
        printf("\t\t\t\t1:");
        scanf("%s", Scelt);
        int len = strlen(Scelt);

        if (Scelt[len - 1] == '\n')
            {
                Scelt[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelt, vero2)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE, cake);
    }while(strcmp(Scelt, vero2)!=0);
    file(cake);
    END(*LIFE, cake);
}


