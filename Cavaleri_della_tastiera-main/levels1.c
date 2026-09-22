#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include "GAME.h"

void lvl_1(int *LIFE, int *cake);
void lvl_2(int *LIFE, int *cake);
void lvl_3(int *LIFE, int *cake);
void lvl_4(int *LIFE, int *cake);
void lvl_5(int *LIFE, int *cake);

void lvl_1(int *LIFE, int *cake)
{
    int risposta;
    setColor(3, 0);
    printSlowly("\n  \t\t\t\t~ ~ LIVELLO 1 ~ ~ \n\n", DELAY);
    do
    {
        setColor(3,0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);//a
        
        printSlowly("  \t\t\t\tA cosa serve la printf?\n", DELAY);
        printSlowly("  \t\t\t\tA) Stampa il testo su schermo\n", DELAY);
        printSlowly("  \t\t\t\tB) Legge un numero intero inserito dall'utente\n", DELAY);
        printSlowly("  \t\t\t\tC) Permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n", DELAY);
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
        setColor(3, 0);
        printSlowly("  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY); //c

        printSlowly("  \t\t\t\tA cosa serve la scanf?\n", DELAY);
        printSlowly("  \t\t\t\tA) Permette di iterare un valore\n", DELAY);
        printSlowly("  \t\t\t\tB) Aggiunge uno spazio prima di inserire l'input\n", DELAY);
        printSlowly("  \t\t\t\tC) Legge un input inserito dall'utente\n", DELAY);
        risposta = Scelta();

        if(risposta != 3)
        {
            setColor(4, 0);
            (*LIFE)--;
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        } 
    
        checklife(*LIFE, cake);
   
    } while(risposta != 3);

    do
    {
        setColor(3, 0);
        printSlowly("  \t\t\t\t--DOMANDA NUMERO 3 --\n", DELAY);//a

        printSlowly("  \t\t\t\tA cosa serve l'if?", DELAY);
        printSlowly("\n\t\t\t\tA) Permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n", DELAY);
        printSlowly("  \t\t\t\tB) Permette di eseguire un altro blocco di istruzioni\n", DELAY);
        printSlowly("  \t\t\t\tC) Permette di verificare ulteriori condizioni\n", DELAY);
        risposta = Scelta();

        if(risposta != 1)
        {
            setColor(4, 0);
            (*LIFE)--;
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        } else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        } 

        checklife(*LIFE, cake);
   
    }while(risposta!=1);
    
    system("cls");
    file(cake);
    lvl_2(LIFE, cake);
}

void lvl_2(int *LIFE, int *cake)
{
        setColor(3, 0);
        printSlowly("  \t\t\t\t~ ~ LIVELLO 2 ~ ~ \n\n", DELAY);
        int risposta;
    do{
        setColor(3, 0);
        printSlowly("  \t\t\t\t--DOMANDA NUMERO 1--\n ", DELAY);//b
        printSlowly("  \t\t\t\tA cosa serve la for?\n", DELAY);
        printSlowly("  \t\t\t\tA) Permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n", DELAY);
        printSlowly("  \t\t\t\tB) E' utilizzato per eseguire un blocco di istruzioni un numero fissato di volte\n", DELAY);
        printSlowly("  \t\t\t\tC) Garantisce l'esecuzione del blocco di istruzioni almeno una volta prima di controllare la condizione.\n", DELAY);
        risposta = Scelta();
        if(risposta != 2)
          {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        } else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        } 
        checklife(*LIFE, cake);
        
    }while (risposta != 2);

    do
    {
        setColor(3, 0);
        printSlowly("  \t\t\t\t--DOMANDA NUMERO 2--\n", DELAY);//b
        printSlowly("  \t\t\t\tA cosa serve la while?", DELAY);
        printSlowly("\n\t\t\t\tA) Permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n", DELAY);
        printSlowly("  \t\t\t\tB) E' utilizzato per eseguire un blocco di istruzioni finche' una condizione specificata e' vera.\n", DELAY);
        printSlowly("  \t\t\t\tC) Permette di verificare ulteriori condizioni\n", DELAY);
        risposta = Scelta();
        if(risposta != 2)
        {
            setColor(4, 0);
            (*LIFE)--;
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        } else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        } 
        checklife(*LIFE, cake);
    
    }while(risposta != 2);

    do{
        setColor(3, 0);
        printSlowly("  \t\t\t\t--DOMANDA NUMERO 3--\n ", DELAY);//c
        printSlowly("  \t\t\t\tA cosa serve la do while?\n", DELAY);
        printSlowly("  \t\t\t\tA) E' utilizzato per eseguire un blocco di istruzioni un numero fissato di volte\n", DELAY);
        printSlowly("  \t\t\t\tB) Permette di eseguire un altro blocco di istruzioni\n", DELAY);
        printSlowly("  \t\t\t\tC) Garantisce l'esecuzione del blocco di istruzioni almeno una volta prima di controllare la condizione.\n", DELAY);
        risposta = Scelta();
        if(risposta != 3)
        {
            setColor(4, 0);
            (*LIFE)--;
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n\t\t\t\tRisposta sbagliata! \n\t\t\t\tHai perso una vita! \n\t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        } else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        } 
        checklife(*LIFE, cake);
    
    }while(risposta != 3);

    system("cls");
    file(cake);
    lvl_3(LIFE, cake);
    
}

void lvl_3(int *LIFE, int *cake)
{
    setColor(3, 0);
        int risposta;
        printSlowly("  \t\t\t\t~ ~ LIVELLO 3 ~ ~\n\n", DELAY);
    do
    {
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
        printSlowly("  \t\t\t\tcosa manca?\n", DELAY);
        setColor(8, 0);
        printSlowly("  \t\t\t\tfor(i = 0; i < 15; i++){\n", DELAY);
        printSlowly("  \t\t\t\t   printf(\" scrivi un numero %d:\", i + 1);\n", DELAY);
        printSlowly("  \t\t\t\t   scanf(\"%d\", &serie[i]);\n", DELAY);
        printSlowly("  \t\t\t\t}\n", DELAY);
        printSlowly("  \t\t\t\t   ___(i = 0; i < 15; i++){\n", DELAY);
        printSlowly("  \t\t\t\t   somma += serie[i];\n", DELAY);
        printSlowly("  \t\t\t\t}\n", DELAY);
        setColor(3, 0);
        printSlowly("  \t\t\t\tA)scanf\n", DELAY);//c
        printSlowly("  \t\t\t\tB)printf\n", DELAY);
        printSlowly("  \t\t\t\tC)for\n", DELAY);
        risposta = Scelta();
        if(risposta != 3){
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
        
    }while (risposta != 3);

    do
    {   
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
        printSlowly("  \t\t\t\tcosa manca?\n", DELAY);
        setColor(8, 0);
        printSlowly("  \t\t\t\tchar a;\n", DELAY);
        printSlowly("  \t\t\t\tprintf(\"codice ascii di una letere\");\n", DELAY);
        printSlowly("  \t\t\t\tprintf(\"scrivi un caratere:\");\n", DELAY);
        printSlowly("  \t\t\t\tscanf(\"%c\", _a);\n", DELAY);
        printSlowly("  \t\t\t\tprintf(\"ecco il valore in ascii: %d\", a);\n", DELAY);
        setColor(3, 0);
        printSlowly("  \t\t\t\tA);\n", DELAY);
        printSlowly("  \t\t\t\tB),\n", DELAY);
        printSlowly("  \t\t\t\tC)&\n", DELAY);//c
        risposta = Scelta();
        if(risposta != 3){
            setColor(4, 0);
            (*LIFE)--;
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE, cake);
    
    }while(risposta != 3);
    do
    {
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);
        printSlowly("  \t\t\t\tcosa manca?\n", DELAY);
        setColor(8, 0);
        printSlowly("  \t\t\t\tdo {\n", DELAY);
        printSlowly("  \t\t\t\t    printf(\"Inserisci il valore %d: \", indice + 1);\n", DELAY);
        printSlowly("  \t\t\t\t    scanf(\"%d\", _array[indice]);\n", DELAY);
        printSlowly("  \t\t\t\t    indice++;\n", DELAY);
        printSlowly("  \t\t\t\t}while (indice < 10 && array[indice - 1] != -1);\n", DELAY);
        setColor(3, 0);
        printSlowly("  \t\t\t\tA);\n", DELAY);
        printSlowly("  \t\t\t\tB),\n", DELAY);
        printSlowly("  \t\t\t\tC)&\n", DELAY);//c
        risposta= Scelta();
        if(risposta != 3){
            (*LIFE)--;
            setColor(4, 0);
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        }
    
        checklife(*LIFE, cake);
   
    }while(risposta != 3);

    system("cls");
    file(cake);
    lvl_4(LIFE, cake);
}

void lvl_4(int *LIFE, int *cake)
{
    setColor(3, 0);
        printSlowly("  \t\t\t\t~ ~ LIVELLO 4 ~ ~ \n\n", DELAY);
        int risposta;
    do
    {
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
        printSlowly("  \t\t\t\tcosa manca?\n", DELAY);
        setColor(8, 0);
        printSlowly("  \t\t\t\t___(i = 0; i < 15; i++){\n", DELAY);
        printSlowly("  \t\t\t\t    printf(\" scrivi un numero %d:\", i + 1);\n", DELAY);
        printSlowly("  \t\t\t\t    scanf(\"%d\", &serie[i]);\n", DELAY);
        printSlowly("  \t\t\t\t}\n", DELAY);
        printSlowly("  \t\t\t\tfor(i = 0; i < 15; i++){\n", DELAY);
        printSlowly("  \t\t\t\t    somma += serie[i];\n", DELAY);
        printSlowly("  \t\t\t\t}\n", DELAY);
        setColor(3, 0);
        printSlowly("  \t\t\t\tA)scanf\n", DELAY);//c
        printSlowly("  \t\t\t\tB)printf\n", DELAY);
        printSlowly("  \t\t\t\tC)for\n", DELAY);
        risposta = Scelta();
        if(risposta != 3){
            (*LIFE)--;
            setColor(4, 0);
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
            }else
            {
                setColor(2, 0);
                printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
            }
        checklife(*LIFE, cake);
        
    }while (risposta != 3);

    do
    {
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
        printSlowly("  \t\t\t\tcosa manca?\n", DELAY);
        setColor(8, 0);
        printSlowly("  \t\t\t\tint palindromo(char parola[]){\n", DELAY);
        printSlowly("  \t\t\t\t    int l = strlen(parola);\n", DELAY);
        printSlowly("  \t\t\t\t    for(int i=0; i<_/2; i++){\n", DELAY);
        printSlowly("  \t\t\t\t        if(parola[i]!=parola[l-1-i]){\n", DELAY);
        printSlowly("  \t\t\t\t           return 0;\n", DELAY);
        printSlowly("  \t\t\t\t         }\n", DELAY);
        printSlowly("  \t\t\t\t     }\n", DELAY);
        printSlowly("  \t\t\t\t     return 1;\n}", DELAY);
        setColor(3, 0);
        printSlowly("  \t\t\t\tA);\n", DELAY);//b
        printSlowly("  \t\t\t\tB)l\n", DELAY);
        printSlowly("  \t\t\t\tC)i++\n", DELAY);
        risposta= Scelta();
        if(risposta != 2){
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
    
    }while(risposta != 2);
    do
    {
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);
        printSlowly("  \t\t\t\tcosa manca?\n", DELAY);
        setColor(8, 0);
        printSlowly("  \t\t\t\tint filtro(char a){\n", DELAY);
        printSlowly("  \t\t\t\tif((_a_>=_A_ && _a_<=_Z_)){\n", DELAY);
        printSlowly("  \t\t\t\t   printf(\"e' una letera maiuscola \");\n", DELAY);
        printSlowly("  \t\t\t\t   return 1;\n", DELAY);
        printSlowly("  \t\t\t\t   }else if((_a_>=a && _a_<=_z_)){\n", DELAY);
        printSlowly("  \t\t\t\t    printf(\"e' una letera minuscola \");\n", DELAY);
        printSlowly("  \t\t\t\t    return 0;\n", DELAY);
        printSlowly("  \t\t\t\t    }else{\n", DELAY);
        printSlowly("  \t\t\t\t    printf(\"non e' una letera\");\n", DELAY);
        printSlowly("  \t\t\t\t    return -1;\n", DELAY);
        printSlowly("  \t\t\t\t    }\n", DELAY);
        printSlowly("   \t\t\t\t   }\n", DELAY);
        setColor(3, 0);
        printSlowly("  \t\t\t\tA)''\n", DELAY);//a
        printSlowly("  \t\t\t\tB))\n", DELAY);
        printSlowly("  \t\t\t\tC);\n", DELAY);
        risposta= Scelta();
        if(risposta != 1){
            (*LIFE)--;
            setColor(4, 0);
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
            }else
            {
                setColor(2, 0);
                printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
            }

        checklife(*LIFE, cake);
    
    }while(risposta!=1);

    system("cls");
    file(cake);
    lvl_5(LIFE, cake);
    
}

void lvl_5(int *LIFE, int *cake)
{
    setColor(3, 0);
     printf("  \t\t\t\t~ ~ LIVELLO 5 ~ ~ \n\n");
      int risposta;
    do
    {
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
        printSlowly("  \t\t\t\tcosa manca?\n}", DELAY);
        setColor(8, 0);
        printSlowly("  \t\t\t\t#include<stdio.h>\n", DELAY);
        printSlowly("  \t\t\t\ttypedef struct{ \n", DELAY);
        printSlowly("  \t\t\t\t   char via[30];\n", DELAY);
        printSlowly("  \t\t\t\t   char citta[30];\n", DELAY);
        printSlowly("  \t\t\t\t   int CAP[100];\n", DELAY);
        printSlowly("  \t\t\t\t}Indirizo;\n", DELAY);
        printSlowly("  \t\t\t\ttypedef struct {\n", DELAY);
        printSlowly("  \t\t\t\t   char nome[30];\n", DELAY);
        printSlowly("  \t\t\t\t   char cognome[30];\n", DELAY);
        printSlowly("  \t\t\t\t   int eta;\n", DELAY);
        printSlowly("  \t\t\t\t   Indirizo indirizoresidente;\n", DELAY);
        printSlowly("  \t\t\t\t}Persona;\n", DELAY);
        printSlowly("  \t\t\t\tint main(){\n", DELAY);
        printSlowly("  \t\t\t\tPersona persona1;\n", DELAY);
        printSlowly("  \t\t\t\tprintf(\"scrivi il nome\");\n", DELAY);
        printSlowly("  \t\t\t\tscanf(\"%s\", persona1_nome);\n", DELAY);
        printSlowly("  \t\t\t\tprintf(\"scrivi il cognome\");\n", DELAY);
        printSlowly("  \t\t\t\tscanf(\"%s\", persona1_cognome);\n", DELAY);
        printSlowly("  \t\t\t\tprintf(\"scrivi eta\");\n", DELAY);
        printSlowly("  \t\t\t\tscanf(\"%d\", &persona1_eta);\n", DELAY);
        printSlowly("  \t\t\t\tprintf(\"scrivi la residenza (via, cita, CAP)\");\n", DELAY);
        printSlowly("  \t\t\t\tscanf(\"%s %s %d\", persona1.indirizoresidente.via, persona1.indirizoresidente.citta, &persona1.indirizoresidente.CAP);\n", DELAY);
        printSlowly("  \t\t\t\tgetchar();\n", DELAY);
        printSlowly("  \t\t\t\t}\n", DELAY);
        setColor(3, 0);
        printSlowly("  \t\t\t\tA)return 0;\n", DELAY);//b
        printSlowly("  \t\t\t\tB).\n", DELAY);
        printSlowly("  \t\t\t\tC);\n", DELAY);
        risposta = Scelta();
        if(risposta != 2){
            (*LIFE)--;
            setColor(4, 0);
            char formattedMessage[100];
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
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
        printSlowly("  \t\t\t\tcosa manca?\n", DELAY);
        setColor(8, 0);
        printSlowly("  \t\t\t\t#include<stdio.h>\n\n", DELAY);
        printSlowly("  \t\t\t\t_________________\n\n", DELAY);
        printSlowly("  \t\t\t\tint main(){\n", DELAY);
        printSlowly("  \t\t\t\tint n1=0;\n", DELAY);
        printSlowly("  \t\t\t\tint n2=0;\n", DELAY);
        printSlowly("  \t\t\t\tint n3=0;\n", DELAY);
        printSlowly("  \t\t\t\tprintf(\"scrivi un valore =\", n1);\n", DELAY);
        printSlowly("  \t\t\t\tscanf(\"%d\", &n1);\n", DELAY);
        printSlowly("  \t\t\t\tprintf(\"scrivi un valore =\", n2);\n", DELAY);
        printSlowly("  \t\t\t\tscanf(\"%d\", &n2);\n", DELAY);
        printSlowly("  \t\t\t\tn3 = somma(n1,n2);\n", DELAY);
        printSlowly("  \t\t\t\tprintf(\"risultato=%d\", n3);\n", DELAY);
        printSlowly("  \t\t\t\treturn 0;\n", DELAY);
        printSlowly("  \t\t\t\t}\n", DELAY);
        printSlowly("  \t\t\t\tint somma(int a, int b){\n", DELAY);
        printSlowly("  \t\t\t\tint tottale=0;\n", DELAY);
        printSlowly("  \t\t\t\ttottale = a + b;\n", DELAY);
        printSlowly("  \t\t\t\treturn tottale;\n", DELAY);
        printSlowly("  \t\t\t\t}\n", DELAY);
        setColor(3, 0);
        printSlowly("  \t\t\t\tA)int somma(int a, int b);\n", DELAY);//a
        printSlowly("  \t\t\t\tB)somma(n1,n2)\n", DELAY);
        printSlowly("  \t\t\t\tC)getchar();\n", DELAY);
        risposta = Scelta();
        if(risposta != 1){
            (*LIFE)--;
            setColor(4, 0);
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            }else
            {
                setColor(2, 0);
                printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
            }
    
        checklife(*LIFE, cake);
    
    }while(risposta != 1);
    
    do
    {
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);
        printSlowly("  \t\t\t\tcosa manca?\n", DELAY);
        setColor(8, 0);
        printSlowly("  \t\t\t\t#include<stdio.h>\n", DELAY);
        printSlowly("  \t\t\t\t#include<string.h>\n", DELAY);
        printSlowly("  \t\t\t\tint main (){\n", DELAY);
        printSlowly("   \t\t\t\tint a = 5;\n", DELAY);
        printSlowly("  \t\t\t\t char b = 'c';\n", DELAY);
        printSlowly("  \t\t\t\t int *p1;\n", DELAY);
        printSlowly("  \t\t\t\t char *p2;\n", DELAY);
        printSlowly("  \t\t\t\t p1 = &a;\n", DELAY);
        printSlowly("  \t\t\t\t p2 = &b;\n", DELAY);
        printSlowly("  \t\t\t\t printf(\"indirizo di due variabili %p, %p\", p1,p2);\n", DELAY);
        printSlowly("  \t\t\t\t printf(\"il valore delle celle di memoria %d, %c\", _p1, _p2);\n", DELAY);
        printSlowly("  \t\t\t\t *p1 = 18;\n", DELAY);
        printSlowly("  \t\t\t\t *p2 = 'a';\n", DELAY);
        printSlowly("   \t\t\t\tprintf(\"indirizo di due variabili %p, %p\", p1, p2);\n", DELAY);
        printSlowly("  \t\t\t\t printf(\"il valore delle celle di memoria %d, %c\", *p1, *p2);\n", DELAY);
        printSlowly("  \t\t\t\t return 0;\n", DELAY);
        printSlowly("  \t\t\t\t}\n", DELAY); 
        setColor(3, 0);
        printSlowly("  \t\t\t\tA)%d\n", DELAY);//c
        printSlowly("  \t\t\t\tB)%p\n", DELAY);
        printSlowly("  \t\t\t\tC)*\n", DELAY);
        risposta = Scelta();
        if(risposta != 3){
            (*LIFE)--;
            setColor(4, 0);
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        }
    
        checklife(*LIFE, cake);
    
    }while(risposta != 3);

    system("cls");
    file(cake);
    lvl_6(LIFE, cake);
    
}
