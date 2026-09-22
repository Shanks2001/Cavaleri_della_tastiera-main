#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include "GAME.h"

void lvl_6(int *LIFE, int *cake);
void lvl_7( int *LIFE, int *cake);
void lvl_8(int *LIFE, int *cake);
void lvl_9(int *LIFE, int *cake);

void lvl_6(int *LIFE, int *cake)
{
    char vero[] = "printf";
    char vero2[] = ";";
    char vero1 []="&";
    char scrivi[MAX];
    setColor(3, 0);
    printSlowly("  \t\t\t\t~ ~ LIVELLO 6 ~ ~ \n\n", DELAY);
    
    do {
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
        printSlowly("\t\t\t\t\tscrivi cosa manca per far stampare a schermo\n", DELAY);
        setColor(8, 0);
        printSlowly("\t\t\t\t\t_______(\"franco bibi\");\n", DELAY);//printf")
        printSlowly("\t\t\t\t\trisposta:", DELAY);
        scanf("\t\t\t\t\t%s", scrivi);
        int len = strlen(scrivi);
        if (scrivi[len - 1] == '\n')
        scrivi[len - 1] = '\0';
        while (getchar() != '\n');
    
    if (strcmp(scrivi, vero) != 0){
            (*LIFE)--;
            setColor(4, 0);
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        } 
    checklife(*LIFE, cake);
    } while (strcmp(scrivi, vero) != 0);
    memset(scrivi, '\0', MAX);
    
    setColor(3, 0);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca per far scrivere da tastiera", DELAY);
    setColor(8, 0);
    printSlowly("\n\t\t\t\t\tscanf(\"%d\", _num);\n", DELAY);//&
    

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\trisposta:", DELAY);
        scanf("\t\t\t\t\t%s", scrivi);
        int len = strlen(scrivi);
        if (scrivi[len - 1] == '\n')
        scrivi[len - 1] = '\0';
        while (getchar() != '\n');
        if (strcmp(scrivi, vero1) != 0){
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        } 
         checklife(*LIFE, cake);
    }while(strcmp(scrivi,vero1)!=0);
    memset(scrivi, '\0', MAX);
    setColor(3, 0);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine", DELAY);  //;,&,printf,
    setColor(8, 0);
    printSlowly("\n\t\t\t\t\tprintf(\"scrivi un numero\")_\n", DELAY);
    printSlowly("\t\t\t\t\tscanf(\"%d\", _num);\n", DELAY);
    printSlowly("\t\t\t\t\t______(il numero scritto :%d\", num);\n", DELAY);
    do{
        setColor(8, 0);
        printSlowly("\t\t\t\t\t1:", DELAY);
        scanf("\t\t\t\t\t%s", scrivi);
        int len = strlen(scrivi);
        if (scrivi[len - 1] == '\n')
            scrivi[len - 1] = '\0';
        while (getchar() != '\n');
        if(strcmp(scrivi, vero2)!=0){
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        } 
        checklife(*LIFE, cake);
    }while(strcmp(scrivi, vero2)!=0);
    memset(scrivi, '\0', MAX);
    do{
        setColor(8, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("\t\t\t\t\t%s", scrivi);
      if(strcmp(scrivi, vero1)!=0){
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        } 
        checklife(*LIFE, cake);
    }while(strcmp(scrivi, vero1)!=0);
    memset(scrivi, '\0', MAX);
    do{
        setColor(8, 0);
        printSlowly("\t\t\t\t\t3:", DELAY);
        scanf("\t\t\t\t\t%s", scrivi);    
        if(strcmp(scrivi, vero)!=0){
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        } 
        checklife(*LIFE, cake);
    }while(strcmp(scrivi, vero)!=0);
    memset(scrivi, '\0', MAX);

    system("cls");
    file(cake);
    lvl_7(LIFE, cake);
}


void lvl_7( int *LIFE, int *cake)
{
    setColor(3, 0);
     printSlowly("  \t\t\t\t~ ~ LIVELLO 7 ~ ~ \n\n", DELAY);
    char Scelta[MAX];
    char vero[] = "for";
    char vero2[]= "i";
    char vero3[] = "while";
    char vero1[]= "+";
    char vero4[] = "somma";
    char vero5[]= "&";
    char vero6[] = "scanf";
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);
    setColor(8, 0);
    printSlowly("\t\t\t\t\tint n=0;\n\t\t\t\t\t ___(int i = 0; i <= 10; i++){\n\t\t\t\t\tprintf(\"%d\", _);\n\t\t\t\t\t}\n", DELAY);//for,i
        do
        {
            setColor(8, 0);
            printSlowly("\t\t\t\t\t1:", DELAY);
            scanf("%s", Scelta);
         int len = strlen(Scelta);

             if (Scelta[len - 1] == '\n')
                {
                    Scelta[len - 1] = '\0';
                }
                while(getchar() != '\n');

             if(strcmp(Scelta, vero)!=0)
                {
                    (*LIFE)--;
                    char formattedMessage[100];
                    setColor(4, 0);
                    snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                    printSlowly(formattedMessage, DELAY);
                }else{
                    setColor(2, 0);
                    printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
                }
            checklife(*LIFE, cake);

        }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero2)!=0)
            {
                (*LIFE)--;
                char formattedMessage[100];
                setColor(4, 0);
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE, cake);
    
    }while(strcmp(Scelta, vero2)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    setColor(3, 0);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);
    setColor(8, 0);
    printSlowly("\t\t\t\t\t_____(numero <= 10){\n\t\t\t\t\tprintf(\"%d\", numero);\n\t\t\t\t\tnumero+_;\n\t\t\t\t\t}\n", DELAY);//while,+

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t1:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero3)!=0)
            {
                (*LIFE)--;
                char formattedMessage[100];
                setColor(4, 0);
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE, cake);

    }while(strcmp(Scelta, vero3)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while(getchar() != '\n');

        if(strcmp(Scelta, vero1)!=0)
            {
                (*LIFE)--;
                char formattedMessage[100];
                setColor(4, 0);
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE, cake);
    
    }while(strcmp(Scelta, vero1)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    setColor(3, 0);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);//somma,&,scanf,;
    setColor(8, 0);
    printSlowly("\t\t\t\t\tint a, b, _____;\n\t\t\t\t\tsomma= a+b;\n\t\t\t\t\tprintf(\"a =\");\n\t\t\t\t\tscanf(\"%d\", _a);\n\t\t\t\t\tprintf(\"b =\");\n\t\t\t\t\t____(\"%d\", &b);\n\t\t\t\t\tprintf( \"somma = %d\" , somma);\n", DELAY);
    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t1:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while(getchar() != '\n');

        if(strcmp(Scelta, vero4)!=0)
            {
                (*LIFE)--;
                char formattedMessage[100];
                setColor(4, 0);
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE, cake);

    }while(strcmp(Scelta, vero4)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while(getchar() != '\n');

        if(strcmp(Scelta, vero5)!=0)
            {
                    (*LIFE)--;
                    char formattedMessage[100];
                    setColor(4, 0);
                    snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                    printSlowly(formattedMessage, DELAY);
                }else{
                    setColor(2, 0);
                    printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
                }
            checklife(*LIFE, cake);
    
    }while(strcmp(Scelta, vero5)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t3:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero6)!=0)
            {
                    (*LIFE)--;
                    char formattedMessage[100];
                    setColor(4, 0);
                    snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                    printSlowly(formattedMessage, DELAY);
                }else{
                    setColor(2, 0);
                    printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
                }
            checklife(*LIFE, cake);
    
    }while(strcmp(Scelta, vero6)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    system("cls");
    file(cake);
    lvl_8(LIFE, cake);
    
}

void lvl_8(int *LIFE, int *cake){
    char vero[]= "i++";
    char vero1[] = ";";
    char vero2[] = "printf";
    char vero3[]= "=";
    char vero4[] = ",";
    char vero5[]= ";";
    char vero6[] = "for";
    char vero7[]= "i";
    setColor(3, 0);
    char Scelta[MAX];

    printSlowly("  \t\t\t\t~ ~ LIVELLO 8 ~ ~ \n\n", DELAY);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
    setColor(3, 0);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY); //i++,printf,;
    setColor(8, 0);
    printSlowly("\t\t\t\t\tint vet[10];\n\t\t\t\t\tfor(int i=0;i<n;___){\n\t\t\t\t\t_____(\"scrivi i valori %d :\", i + 1);\n\t\t\t\t\tscanf(\"%d\", &vet[i]);\n\t\t\t\t\tint primo = 1_\n\t\t\t\t\tfor(j=vet[i]-1; j>1; j--){\n\t\t\t\t\tif(vet[i]%%j==0){\n\t\t\t\t\tprimo = 0;\n\t\t\t\t\t}\");\n", DELAY);
    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t1:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');
        if(strcmp(Scelta, vero)!=0)
            {
                (*LIFE)--;
                char formattedMessage[100];
                setColor(4, 0);
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE, cake);

    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero2)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE, cake);

    }while(strcmp(Scelta, vero2)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t3:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
        {
            Scelta[len - 1] = '\0';
        }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero1)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE, cake);
    }while(strcmp(Scelta, vero1)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

   setColor(3, 0);
   printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
   printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);//=,",",;
   setColor(8, 0);
   printSlowly("\t\t\t\t\tif(primo =_ 1){\n\t\t\t\t\tprintf(\"numero primo\"_ j);\n\t\t\t\t\t} else {\n\t\t\t\t\tprintf(\"numero non primo\", j)_\n\t\t\t\t\t}\n", DELAY);
    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t1:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero3)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE, cake);
    }while(strcmp(Scelta, vero3)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero4)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
            checklife(*LIFE, cake);
    
    }while(strcmp(Scelta, vero4)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t3:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero5)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
            checklife(*LIFE, cake);
    
    }while(strcmp(Scelta, vero5)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    setColor(3, 0); 
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);       
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);//for,i++,",",i
    setColor(8, 0);
    printSlowly("\t\t\t\t\t___(int i = 0; i < 10; ___){\n\t\t\t\t\tprintf(\"scrivi un valore %d:\"_ i + 1);\n\t\t\t\t\tscanf(\"%d\", &sequenza[_]);\n\t\t\t\t\t}\n", DELAY);    
    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t1:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero6)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
            checklife(*LIFE, cake);

    }while(strcmp(Scelta, vero6)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
            checklife(*LIFE, cake);

    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t3:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
        {
            Scelta[len - 1] = '\0';
        }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero4)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE, cake);

    }while(strcmp(Scelta, vero4)!=0);

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t4:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero7)!=0)
            {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE, cake);

    }while(strcmp(Scelta, vero7)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY
    system("cls");
    file(cake);
    lvl_9(LIFE, cake);
}
void lvl_9(int *LIFE, int *cake){
    setColor(3, 0);
    printf("  \t\t\t\t~ ~ LIVELLO 9 ~ ~ \n\n");
    char vero[]= "i++";
    char vero1[] = "&";
    char vero2[] = ";";
    char vero3[]= "if";
    char vero4[] = "*file";
    char vero5[]= "fclose(file)";
    char vero6[] = "for";
    char vero7[]= "i";
    char Scelta[MAX];
    printSlowly("\n\t\t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
    printSlowly("\n\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);
   //i++,&,;
   setColor(8, 0);
    printSlowly("\n\t\t\t\tvoid aggiungi(Clienti *c, int *f){\n", DELAY);
    printSlowly("\t\t\t\tif(*f<50){\n", DELAY);
    printSlowly("\t\t\t\t\t int b=0;\n", DELAY);        
    printSlowly("\t\t\t\t   do {\n", DELAY);
    printSlowly("\t\t\t\t   printf(\"scrivi quante prenotazioni vuoi aggiungere:\");\n", DELAY);
    printSlowly("\t\t\t\t   scanf(\"%d\", &b);\n", DELAY);
    printSlowly("\t\t\t\t   }while(b<=0);\n", DELAY);
    printSlowly("\t\t\t\tfor(int i=0; i<b; ___){\n", DELAY);
    printSlowly("\t\t\t\t   printf(\"scrivi il nome:\");\n", DELAY);
    printSlowly("\t\t\t\t   scanf(\"%99s\", c[*f].nome);\n", DELAY);
    printSlowly("\t\t\t\t   printf(\"scrivi il numero di persone:\");\n", DELAY);
    printSlowly("\t\t\t\t   scanf(\"%d\", _c[*f].npersone);\n", DELAY);
    printSlowly("\t\t\t\t   printf(\"scrivi il numero del tavolo:\");\n", DELAY);
    printSlowly("\t\t\t\t   scanf(\"%d\", &c[*f].tavolo)_\n", DELAY);
    printSlowly("\t\t\t\t   (*f)++;", DELAY);
    printSlowly("\n\t\t\t\t}else{\n\t\t\t\tprintf(\"ristorante pieno\");\n\t\t\t\t}\n\t\t\t\t}\n", DELAY);
    do
    {
        setColor(8, 0);
        printf("\n\t\t\t\t1:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero)!=0)
            {
                (*LIFE)--;
                setColor(4, 0);
               char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);   
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            
            checklife(*LIFE, cake);

    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t2:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero1)!=0)
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
    
    }while(strcmp(Scelta, vero1)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t3:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero2)!=0)
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
    
    }while(strcmp(Scelta, vero2)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY
    setColor(3, 0);
    printSlowly("\n \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);//i++,if,i,;
    setColor(8, 0);
    printSlowly("\n\t\t\t\tvoid stampa(Clienti *c, int f){\n", DELAY);
    printSlowly("\t\t\t\t   for(int i=0; i<f; ___){\n", DELAY);
    printSlowly("\t\t\t\t       printf(\"%d) nome:%s numero persone:%d numero del tavolo:%d orario:%d:%d\",\n\t\t\t\ti+1,c[i].nome, c[i].npersone, c[i].tavolo, c[i].data.ora, c[i].data.minuti);\n\t\t\t\t  }\n\t\t\t\t  }\n", DELAY);
    printSlowly("\t\t\t\t      int MAX = 0;\n", DELAY);
    printSlowly("\t\t\t\t      int j = 0;\n", DELAY);
    printSlowly("\t\t\t\t   for(int i=0; i < f; i++){\n\t\t\t\t  __(MAX < c[i].npersone){\n  \t\t\t\tMAX=c[_].npersone;\t\t\t\t\n", DELAY);
    printSlowly("\t\t\t\tvoid ricerca( Clienti *c, int f){\n \t\t\t\tj=i;\n \t\t\t\t}\n \t\t\t\t}\n \t\t\t\tprintf(\"nome:%s numero di persone:%d numero del tavolo:%d\", c[j].nome, c[j].npersone, c[j].tavolo);\n}\n", DELAY);
    do
    {
        setColor(8, 0);
        printf("\t\t\t\t1:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero)!=0)
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

    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t2:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero3)!=0)
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
    
    }while(strcmp(Scelta, vero3)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t3:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero7)!=0)
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
    }while(strcmp(Scelta, vero7)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY
    setColor(3, 0);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);//a
    printSlowly("\n\t\t\t\t\tscrivi cosa manca, in ordine\n\n", DELAY);//for,*file,fclose(file),;
    setColor(8, 0);
    printSlowly("\t\t\t\t void ordinamento(Clienti *c, int f){\n\t\t\t\t for(int i=0; i<f-1; i++){\n\t\t\t\t  ___(int j=0; j<f-i-1; j++){\n\t\t\t\t   if(c[j].data.ora < c[j+1].data.ora){\n\t\t\t\t  Clienti MAX=c[j+1];\n\t\t\t\t  c[j+1]=c[j];\n\t\t\t\t  c[j]=MAX;\n\t\t\t\t   }\n\t\t\t\tif(c[j].data.ora == c[j+1].data.ora && c[j].data.minuti < c[j+1].data.minuti){\n\t\t\t\tClienti MAX=c[j+1];\n\t\t\t\tc[j+1]=c[j];\n\t\t\t\tc[j]=MAX;\n\t\t\t\t  }\n\t\t\t\t }\n\t\t\t\t }\n\t\t\t\t}\n\t\t\t\tvoid file(Clienti *c, int f){\n\t\t\t\tFILE _____=fopen(\"prenotazioni.txt\", \"w\");\n\t\t\t\tif(file==NULL){\n\t\t\t\tprintf(\"ERROR\");\n\t\t\t\t}else{\n\t\t\t\tprintf(\"file aperto con succeso\");\n\t\t\t\t}\n\t\t\t\tfprintf(file, \"numero prenotazioni %d\", f);\n\t\t\t\tfor(int i=0; i<f; i++){\n\t\t\t\tfprintf(file, \"%d) nome:%s numero persone:%d numero tavolo:%d orario:%d:%d\",\n\t\t\t\ti+1, c[i].nome, c[i].npersone, c[i].tavolo, c[i].data.ora, c[i].data.minuti);\n\t\t\t\t}\n\n\t\t\t\t_________________\n\t\t\t\tprintf(\"file salvato\");\n\t\t\t\t}\n", DELAY);
    do
    {
        setColor(8, 0);
        printf("\t\t\t\t1:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero6)!=0)
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
    }while(strcmp(Scelta, vero6)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t2:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero4)!=0)
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
    }while(strcmp(Scelta, vero4)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t3:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero5)!=0)
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
    }while(strcmp(Scelta, vero5)!=0);

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t4:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero2)!=0)
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

    }while(strcmp(Scelta, vero2)!=0);
    memset(Scelta, '\0', MAX); //RESET ARRAY

    system("cls");
    file(cake);
    BOSS(LIFE, cake);
}