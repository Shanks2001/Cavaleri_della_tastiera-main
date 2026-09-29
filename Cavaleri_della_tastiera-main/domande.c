#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GAME.h"
#include "domande.h"

// ==========================================================================
// LIVELLO 1
// ==========================================================================
DomandaScelta livello1[] = {
    { "  \t\t\t\tA cosa serve la printf?",
      { "Stampa il testo su schermo",
        "Legge un numero intero inserito dall'utente",
        "Permette di eseguire determinate istruzioni solo se una condizione specificata e' vera" },
      1 },
    { "  \t\t\t\tA cosa serve la scanf?",
      { "Permette di iterare un valore",
        "Aggiunge uno spazio prima di inserire l'input",
        "Legge un input inserito dall'utente" },
      3 },
    { "  \t\t\t\tA cosa serve l'if?",
      { "Permette di eseguire determinate istruzioni solo se una condizione specificata e' vera",
        "Permette di eseguire un altro blocco di istruzioni",
        "Permette di verificare ulteriori condizioni" },
      1 },
};
const int NUM_DOMANDE_LVL1 = 3;

// ==========================================================================
// LIVELLO 2
// ==========================================================================
DomandaScelta livello2[] = {
    { "  \t\t\t\tA cosa serve la for?",
      { "Permette di eseguire determinate istruzioni solo se una condizione specificata e' vera",
        "E' utilizzato per eseguire un blocco di istruzioni un numero fissato di volte",
        "Garantisce l'esecuzione del blocco di istruzioni almeno una volta prima di controllare la condizione." },
      2 },
    { "  \t\t\t\tA cosa serve la while?",
      { "Permette di eseguire determinate istruzioni solo se una condizione specificata e' vera",
        "E' utilizzato per eseguire un blocco di istruzioni finche' una condizione specificata e' vera.",
        "Permette di verificare ulteriori condizioni" },
      2 },
    { "  \t\t\t\tA cosa serve la do while?",
      { "E' utilizzato per eseguire un blocco di istruzioni un numero fissato di volte",
        "Permette di eseguire un altro blocco di istruzioni",
        "Garantisce l'esecuzione del blocco di istruzioni almeno una volta prima di controllare la condizione." },
      3 },
};
const int NUM_DOMANDE_LVL2 = 3;

// ==========================================================================
// LIVELLO 3
// ==========================================================================
DomandaScelta livello3[] = {
    { "  \t\t\t\tcosa manca?\n"
      "  \t\t\t\tfor(i = 0; i < 15; i++){\n"
      "  \t\t\t\t   printf(\" scrivi un numero %d:\", i + 1);\n"
      "  \t\t\t\t   scanf(\"%d\", &serie[i]);\n"
      "  \t\t\t\t}\n"
      "  \t\t\t\t   ___(i = 0; i < 15; i++){\n"
      "  \t\t\t\t   somma += serie[i];\n"
      "  \t\t\t\t}",
      { "scanf", "printf", "for" },
      3 },
    { "  \t\t\t\tcosa manca?\n"
      "  \t\t\t\tchar a;\n"
      "  \t\t\t\tprintf(\"codice ascii di una letere\");\n"
      "  \t\t\t\tprintf(\"scrivi un caratere:\");\n"
      "  \t\t\t\tscanf(\"%c\", _a);\n"
      "  \t\t\t\tprintf(\"ecco il valore in ascii: %d\", a);",
      { ")", ",", "&" },
      3 },
    { "  \t\t\t\tcosa manca?\n"
      "  \t\t\t\tdo {\n"
      "  \t\t\t\t    printf(\"Inserisci il valore %d: \", indice + 1);\n"
      "  \t\t\t\t    scanf(\"%d\", _array[indice]);\n"
      "  \t\t\t\t    indice++;\n"
      "  \t\t\t\t}while (indice < 10 && array[indice - 1] != -1);",
      { ")", ",", "&" },
      3 },
};
const int NUM_DOMANDE_LVL3 = 3;

// ==========================================================================
// LIVELLO 4
// ==========================================================================
DomandaScelta livello4[] = {
    { "  \t\t\t\tcosa manca?\n"
      "  \t\t\t\t___(i = 0; i < 15; i++){\n"
      "  \t\t\t\t    printf(\" scrivi un numero %d:\", i + 1);\n"
      "  \t\t\t\t    scanf(\"%d\", &serie[i]);\n"
      "  \t\t\t\t}\n"
      "  \t\t\t\tfor(i = 0; i < 15; i++){\n"
      "  \t\t\t\t    somma += serie[i];\n"
      "  \t\t\t\t}",
      { "scanf", "printf", "for" },
      3 },
    { "  \t\t\t\tcosa manca?\n"
      "  \t\t\t\tint palindromo(char parola[]){\n"
      "  \t\t\t\t    int l = strlen(parola);\n"
      "  \t\t\t\t    for(int i=0; i<_/2; i++){\n"
      "  \t\t\t\t        if(parola[i]!=parola[l-1-i]){\n"
      "  \t\t\t\t           return 0;\n"
      "  \t\t\t\t         }\n"
      "  \t\t\t\t     }\n"
      "  \t\t\t\t     return 1;\n}",
      { ")", "l", "i++" },
      2 },
    { "  \t\t\t\tcosa manca?\n"
      "  \t\t\t\tint filtro(char a){\n"
      "  \t\t\t\tif((_a_>=_A_ && _a_<=_Z_)){\n"
      "  \t\t\t\t   printf(\"e' una letera maiuscola \");\n"
      "  \t\t\t\t   return 1;\n"
      "  \t\t\t\t   }else if((_a_>=a && _a_<=_z_)){\n"
      "  \t\t\t\t    printf(\"e' una letera minuscola \");\n"
      "  \t\t\t\t    return 0;\n"
      "  \t\t\t\t    }else{\n"
      "  \t\t\t\t    printf(\"non e' una letera\");\n"
      "  \t\t\t\t    return -1;\n"
      "  \t\t\t\t    }\n"
      "   \t\t\t\t   }",
      { "''", ")", ";" },
      1 },
};
const int NUM_DOMANDE_LVL4 = 3;

// ==========================================================================
// LIVELLO 5
// ==========================================================================
DomandaScelta livello5[] = {
    { "  \t\t\t\tcosa manca?\n"
      "  \t\t\t\t#include<stdio.h>\n"
      "  \t\t\t\ttypedef struct{ \n"
      "  \t\t\t\t   char via[30];\n"
      "  \t\t\t\t   char citta[30];\n"
      "  \t\t\t\t   int CAP[100];\n"
      "  \t\t\t\t}Indirizo;\n"
      "  \t\t\t\ttypedef struct {\n"
      "  \t\t\t\t   char nome[30];\n"
      "  \t\t\t\t   char cognome[30];\n"
      "  \t\t\t\t   int eta;\n"
      "  \t\t\t\t   Indirizo indirizoresidente;\n"
      "  \t\t\t\t}Persona;\n"
      "  \t\t\t\tint main(){\n"
      "  \t\t\t\tPersona persona1;\n"
      "  \t\t\t\tprintf(\"scrivi il nome\");\n"
      "  \t\t\t\tscanf(\"%s\", persona1_nome);\n"
      "  \t\t\t\tprintf(\"scrivi il cognome\");\n"
      "  \t\t\t\tscanf(\"%s\", persona1_cognome);\n"
      "  \t\t\t\tprintf(\"scrivi eta\");\n"
      "  \t\t\t\tscanf(\"%d\", &persona1_eta);\n"
      "  \t\t\t\tprintf(\"scrivi la residenza (via, cita, CAP)\");\n"
      "  \t\t\t\tscanf(\"%s %s %d\", persona1.indirizoresidente.via, persona1.indirizoresidente.citta, &persona1.indirizoresidente.CAP);\n"
      "  \t\t\t\tgetchar();\n"
      "  \t\t\t\t}",
      { "return 0;", ".", ";" },
      2 },
    { "  \t\t\t\tcosa manca?\n"
      "  \t\t\t\t#include<stdio.h>\n\n"
      "  \t\t\t\t_________________\n\n"
      "  \t\t\t\tint main(){\n"
      "  \t\t\t\tint n1=0;\n"
      "  \t\t\t\tint n2=0;\n"
      "  \t\t\t\tint n3=0;\n"
      "  \t\t\t\tprintf(\"scrivi un valore =\", n1);\n"
      "  \t\t\t\tscanf(\"%d\", &n1);\n"
      "  \t\t\t\tprintf(\"scrivi un valore =\", n2);\n"
      "  \t\t\t\tscanf(\"%d\", &n2);\n"
      "  \t\t\t\tn3 = somma(n1,n2);\n"
      "  \t\t\t\tprintf(\"risultato=%d\", n3);\n"
      "  \t\t\t\treturn 0;\n"
      "  \t\t\t\t}\n"
      "  \t\t\t\tint somma(int a, int b){\n"
      "  \t\t\t\tint tottale=0;\n"
      "  \t\t\t\ttottale = a + b;\n"
      "  \t\t\t\treturn tottale;\n"
      "  \t\t\t\t}",
      { "int somma(int a, int b);", "somma(n1,n2)", "getchar();" },
      1 },
    { "  \t\t\t\tcosa manca?\n"
      "  \t\t\t\t#include<stdio.h>\n"
      "  \t\t\t\t#include<string.h>\n"
      "  \t\t\t\tint main (){\n"
      "   \t\t\t\tint a = 5;\n"
      "  \t\t\t\t char b = 'c';\n"
      "  \t\t\t\t int *p1;\n"
      "  \t\t\t\t char *p2;\n"
      "  \t\t\t\t p1 = &a;\n"
      "  \t\t\t\t p2 = &b;\n"
      "  \t\t\t\t printf(\"indirizo di due variabili %p, %p\", p1,p2);\n"
      "  \t\t\t\t printf(\"il valore delle celle di memoria %d, %c\", _p1, _p2);\n"
      "  \t\t\t\t *p1 = 18;\n"
      "  \t\t\t\t *p2 = 'a';\n"
      "   \t\t\t\tprintf(\"indirizo di due variabili %p, %p\", p1, p2);\n"
      "  \t\t\t\t printf(\"il valore delle celle di memoria %d, %c\", *p1, *p2);\n"
      "  \t\t\t\t return 0;\n"
      "  \t\t\t\t}",
      { "%d", "%p", "*" },
      3 },
};
const int NUM_DOMANDE_LVL5 = 3;

// ==========================================================================
// LIVELLO 6 (risposta libera) - 5 blank in totale su 3 "domande"
// domanda 1: 1 blank | domanda 2: 1 blank | domanda 3: 3 blank in sequenza
// ==========================================================================
DomandaTesto livello6[] = {
    { "\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n"
      "\t\t\t\t\tscrivi cosa manca per far stampare a schermo\n"
      "\t\t\t\t\t_______(\"franco bibi\");",
      "printf" },

    { "\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n"
      "\t\t\t\t\tscrivi cosa manca per far scrivere da tastiera\n"
      "\t\t\t\t\tscanf(\"%d\", _num);",
      "&" },

    { "\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n"
      "\t\t\t\t\tscrivi cosa manca, in ordine\n"
      "\t\t\t\t\tprintf(\"scrivi un numero\")_\n"
      "\t\t\t\t\tscanf(\"%d\", _num);\n"
      "\t\t\t\t\t______(il numero scritto :%d\", num);",
      ";" },
    { NULL, "&" },
    { NULL, "printf" },
};
const int NUM_BLANK_LVL6 = 5;

// ==========================================================================
// LIVELLO 7 (risposta libera) - 7 blank: 2 + 2 + 3
// ==========================================================================
DomandaTesto livello7[] = {
    { "\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n"
      "\t\t\t\t\tscrivi cosa manca, in ordine\n"
      "\t\t\t\t\tint n=0;\n"
      "\t\t\t\t\t ___(int i = 0; i <= 10; i++){\n"
      "\t\t\t\t\tprintf(\"%d\", _);\n"
      "\t\t\t\t\t}",
      "for" },
    { NULL, "i" },

    { "\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n"
      "\t\t\t\t\tscrivi cosa manca, in ordine\n"
      "\t\t\t\t\t_____(numero <= 10){\n"
      "\t\t\t\t\tprintf(\"%d\", numero);\n"
      "\t\t\t\t\tnumero+_;\n"
      "\t\t\t\t\t}",
      "while" },
    { NULL, "+" },

    { "\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n"
      "\t\t\t\t\tscrivi cosa manca, in ordine\n"
      "\t\t\t\t\tint a, b, _____;\n"
      "\t\t\t\t\tsomma= a+b;\n"
      "\t\t\t\t\tprintf(\"a =\");\n"
      "\t\t\t\t\tscanf(\"%d\", _a);\n"
      "\t\t\t\t\tprintf(\"b =\");\n"
      "\t\t\t\t\t____(\"%d\", &b);\n"
      "\t\t\t\t\tprintf( \"somma = %d\" , somma);",
      "somma" },
    { NULL, "&" },
    { NULL, "scanf" },
};
const int NUM_BLANK_LVL7 = 7;

// ==========================================================================
// LIVELLO 8 (risposta libera) - 10 blank: 3 + 3 + 4
// ==========================================================================
DomandaTesto livello8[] = {
    { "\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n"
      "\t\t\t\t\tscrivi cosa manca, in ordine\n"
      "\t\t\t\t\tint vet[10];\n"
      "\t\t\t\t\tfor(int i=0;i<n;___){\n"
      "\t\t\t\t\t_____(\"scrivi i valori %d :\", i + 1);\n"
      "\t\t\t\t\tscanf(\"%d\", &vet[i]);\n"
      "\t\t\t\t\tint primo = 1_\n"
      "\t\t\t\t\tfor(j=vet[i]-1; j>1; j--){\n"
      "\t\t\t\t\tif(vet[i]%j==0){\n"
      "\t\t\t\t\tprimo = 0;\n"
      "\t\t\t\t\t}",
      "i++" },
    { NULL, "printf" },
    { NULL, ";" },

    { "\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n"
      "\t\t\t\t\tscrivi cosa manca, in ordine\n"
      "\t\t\t\t\tif(primo =_ 1){\n"
      "\t\t\t\t\tprintf(\"numero primo\"_ j);\n"
      "\t\t\t\t\t} else {\n"
      "\t\t\t\t\tprintf(\"numero non primo\", j)_\n"
      "\t\t\t\t\t}",
      "=" },
    { NULL, "," },
    { NULL, ";" },

    { "\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n"
      "\t\t\t\t\tscrivi cosa manca, in ordine\n"
      "\t\t\t\t\t___(int i = 0; i < 10; ___){\n"
      "\t\t\t\t\tprintf(\"scrivi un valore %d:\"_ i + 1);\n"
      "\t\t\t\t\tscanf(\"%d\", &sequenza[_]);\n"
      "\t\t\t\t\t}",
      "for" },
    { NULL, "i++" },
    { NULL, "," },
    { NULL, "i" },
};
const int NUM_BLANK_LVL8 = 10;

// ==========================================================================
// LIVELLO 9 (risposta libera) - 10 blank: 3 + 3 + 4
// ==========================================================================
DomandaTesto livello9[] = {
    { "\n\t\t\t\t\t -- DOMANDA NUMERO 1 -- \n"
      "\n\t\t\t\t\tscrivi cosa manca, in ordine\n"
      "\n\t\t\t\tvoid aggiungi(Clienti *c, int *f){\n"
      "\t\t\t\tif(*f<50){\n"
      "\t\t\t\t\t int b=0;\n"
      "\t\t\t\t   do {\n"
      "\t\t\t\t   printf(\"scrivi quante prenotazioni vuoi aggiungere:\");\n"
      "\t\t\t\t   scanf(\"%d\", &b);\n"
      "\t\t\t\t   }while(b<=0);\n"
      "\t\t\t\tfor(int i=0; i<b; ___){\n"
      "\t\t\t\t   printf(\"scrivi il nome:\");\n"
      "\t\t\t\t   scanf(\"%99s\", c[*f].nome);\n"
      "\t\t\t\t   printf(\"scrivi il numero di persone:\");\n"
      "\t\t\t\t   scanf(\"%d\", _c[*f].npersone);\n"
      "\t\t\t\t   printf(\"scrivi il numero del tavolo:\");\n"
      "\t\t\t\t   scanf(\"%d\", &c[*f].tavolo)_\n"
      "\t\t\t\t   (*f)++;\n"
      "\t\t\t\t}else{\n\t\t\t\tprintf(\"ristorante pieno\");\n\t\t\t\t}\n\t\t\t\t}",
      "i++" },
    { NULL, "&" },
    { NULL, ";" },

    { "\n \t\t\t\t -- DOMANDA NUMERO 2 -- \n"
      "\t\t\t\t\tscrivi cosa manca, in ordine\n"
      "\n\t\t\t\tvoid stampa(Clienti *c, int f){\n"
      "\t\t\t\t   for(int i=0; i<f; ___){\n"
      "\t\t\t\t       printf(\"%d) nome:%s numero persone:%d numero del tavolo:%d orario:%d:%d\",\n"
      "\t\t\t\ti+1,c[i].nome, c[i].npersone, c[i].tavolo, c[i].data.ora, c[i].data.minuti);\n\t\t\t\t  }\n\t\t\t\t  }\n"
      "\t\t\t\t      int MAX = 0;\n"
      "\t\t\t\t      int j = 0;\n"
      "\t\t\t\t   for(int i=0; i < f; i++){\n\t\t\t\t  __(MAX < c[i].npersone){\n  \t\t\t\tMAX=c[_].npersone;\t\t\t\t\n"
      "\t\t\t\tvoid ricerca( Clienti *c, int f){\n \t\t\t\tj=i;\n \t\t\t\t}\n \t\t\t\t}\n"
      " \t\t\t\tprintf(\"nome:%s numero di persone:%d numero del tavolo:%d\", c[j].nome, c[j].npersone, c[j].tavolo);\n}",
      "i++" },
    { NULL, "if" },
    { NULL, "i" },

    { "\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n"
      "\n\t\t\t\t\tscrivi cosa manca, in ordine\n\n"
      "\t\t\t\t void ordinamento(Clienti *c, int f){\n\t\t\t\t for(int i=0; i<f-1; i++){\n"
      "\t\t\t\t  ___(int j=0; j<f-i-1; j++){\n\t\t\t\t   if(c[j].data.ora < c[j+1].data.ora){\n"
      "\t\t\t\t  Clienti MAX=c[j+1];\n\t\t\t\t  c[j+1]=c[j];\n\t\t\t\t  c[j]=MAX;\n\t\t\t\t   }\n"
      "\t\t\t\tif(c[j].data.ora == c[j+1].data.ora && c[j].data.minuti < c[j+1].data.minuti){\n"
      "\t\t\t\tClienti MAX=c[j+1];\n\t\t\t\tc[j+1]=c[j];\n\t\t\t\tc[j]=MAX;\n\t\t\t\t  }\n\t\t\t\t }\n\t\t\t\t }\n\t\t\t\t}\n"
      "\t\t\t\tvoid file(Clienti *c, int f){\n\t\t\t\tFILE _____=fopen(\"prenotazioni.txt\", \"w\");\n"
      "\t\t\t\tif(file==NULL){\n\t\t\t\tprintf(\"ERROR\");\n\t\t\t\t}else{\n\t\t\t\tprintf(\"file aperto con succeso\");\n\t\t\t\t}\n"
      "\t\t\t\tfprintf(file, \"numero prenotazioni %d\", f);\n\t\t\t\tfor(int i=0; i<f; i++){\n"
      "\t\t\t\tfprintf(file, \"%d) nome:%s numero persone:%d numero tavolo:%d orario:%d:%d\",\n"
      "\t\t\t\ti+1, c[i].nome, c[i].npersone, c[i].tavolo, c[i].data.ora, c[i].data.minuti);\n\t\t\t\t}\n\n"
      "\t\t\t\t_________________\n\t\t\t\tprintf(\"file salvato\");\n\t\t\t\t}",
      "for" },
    { NULL, "*file" },
    { NULL, "fclose(file)" },
    { NULL, ";" },
};
const int NUM_BLANK_LVL9 = 10;

// ==========================================================================
// BOSS - 3 domande, ognuna: scelta multipla + un blank di testo di conferma
// ==========================================================================
DomandaScelta bossScelte[] = {
    { "  \t\t\t\tA cosa serva manca a questo codice?\n"
      "  \t\t\t\tvoid elimina(int *array, int *n){\n\t\t\t\t\tint k=0;\n"
      "\t\t\t\tfor (int i = 0; i < *n; i++) {\n\t\t\t\t\t\tint g = 0;\n"
      "\t\t\t\t\t\tfor (int j = 0; j < k; j++) {\n\t\t\t\t\t\t\tif (== array[j]) {\n"
      "\t\t\t\t\t\t\t\tg = 1;\n\t\t\t\t\t\t\t\tbreak;\n\t\t\t\t\t\t\t}\n\t\t\t\t\t\t}\n"
      "\t\t\t\t\t\tif (!g) {\n\t\t\t\t\t\t\tarray[k] = array[i];\n\t\t\t\t\t\t\t k++;\n\t\t\t\t\t\t}\n"
      "\t\t\t\t\t}\n\t\t\t\t\t*n=k;\n\t\t\t\t\tvisualiza(array, *n);\n\t\t\t\t}",
      { "la condizione nel if", "i punti e virgola", "l'incremento" },
      1 },
    { "  \t\t\t\tA cosa serva manca a questo codice?\n"
      "  \t\t\t\tvoid visualiza(int *v, int n){\n\t\t\t\t\tfor(int i=0; i<n; i++){\n"
      "\t\t\t\t\t\tprintf(\"valore %d:%d\", i+1, v[i]);\n\t\t\t\t\t}\n\t\t\t\t}\n"
      "\t\t\t\tvoid inverti(int *v, int n){\n\t\t\t\t\t\tint *s_ptr = v;\n\t\t\t\t\t\tint *d_ptr = v+n-1;\n"
      "\t\t\t\t\t\twhile( < d_ptr){\n\t\t\t\t\t\t\tint t=*s_ptr;\n\t\t\t\t\t\t\t*s_ptr=*d_ptr;\n"
      "\t\t\t\t\t\t\t*d_ptr=t;\n\t\t\t\t\t\t\td_ptr--;\n\t\t\t\t\t\t\ts_ptr++;\n\t\t\t\t\t\t}\n"
      "\t\t\t\t\t\t\tvisualiza(v, n);\n\t\t\t\t}",
      { "la condizione nel ciclo for", "la condizione nel ciclo while", "l'incremento dei cilsi" },
      2 },
    { "  \t\t\t\tCosa manca a questo codice?\n"
      "  \t\t\t\tvoid carica_dati_da_file(){ \n  \t\t\t\t\tFILE *fp = fopen(\"utenti.csv\", \"r\");\n"
      "  \t\t\t\t \tif (fp == 0) {\n  \t\t\t\t\t\tprintf(\"Errore nell'apertura del file\");\n"
      "  \t\t\t\t\t\texit(1);\n  \t\t\t\t\t}\n  \t\t\t\t     \tprintf(\"Dati letti dal file:\");\n"
      "  \t\t\t\t\tchar line[50];\n  \t\t\t\t\twhile (fgets(line, 50, fp) != 0){\n"
      "  \t\t\t\t\tprintf(\"%s\", line);\n  \t\t\t\t\t}\n  \t\t\t\t \tfclose(fp);\n\t\t\t\t}\n"
      "  \t\t\t\tvoid esiste(dbu arrayDBU[], int pt){\n  \t\t\t\t \tFILE *fp = fopen(\"utenti.csv\", \"r\");\n"
      "  \t\t\t\t\tif (fp == 0) {\n  \t\t\t\t \t\tprintf(\"Errore il file non essiste\");\n"
      "  \t\t\t\t \t\tfile(arrayDBU pt);\n  \t\t\t\t\t\tprintf(\"file creato\");\n  \t\t\t\t\t\treturn;\n"
      "  \t\t\t\t\t}\n  \t\t\t\t\tprintf(\"file essiste\");\n  \t\t\t\t\tfclose(fp);\n \t\t\t\t}",
      { "il un punto", "la una virgola", "il punto e virgola" },
      2 },
};

DomandaTesto bossBlank[] = {
    { NULL, "array[i]" },
    { NULL, "s_ptr" },
    { NULL, "," },
};

const int NUM_DOMANDE_BOSS = 3;

// ==========================================================================
// FUNZIONI GENERICHE DI QUIZ
// (sostituiscono la logica ripetuta identica in ogni livello/nel boss)
// ==========================================================================

void chiediScelta(DomandaScelta d, int *LIFE, int *cake){
    int risposta;
    char msg[200];
    do {
        mostraVite(*LIFE);
        setColor(3, 0);
        printSlowly((char*)d.testo, DELAY);
        printf("\n");
        printf("  \t\t\t\tA) %s\n", d.opzioni[0]);
        printf("  \t\t\t\tB) %s\n", d.opzioni[1]);
        printf("  \t\t\t\tC) %s\n", d.opzioni[2]);

        risposta = Scelta();

        if(risposta != d.corretta){
            (*LIFE)--;
            setColor(4, 0);
            snprintf(msg, sizeof(msg),
                "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(msg, DELAY);
        } else {
            setColor(2, 0);
            printSlowly("\n  \t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE, cake);
    } while(risposta != d.corretta);
}

void chiediLivelloScelta(DomandaScelta *domande, int n, int *LIFE, int *cake){
    for(int i = 0; i < n; i++){
        chiediScelta(domande[i], LIFE, cake);
    }
}

void chiediTesto(DomandaTesto d, int numeroBlank, int *LIFE, int *cake){
    char scrivi[MAX];
    char msg[200];

    if(d.testo != NULL){
        setColor(3, 0);
        printSlowly((char*)d.testo, DELAY);
        printf("\n");
    }

    do {
        mostraVite(*LIFE);
        setColor(8, 0);
        printf("\t\t\t\t%d:", numeroBlank);
        scanf("%99s", scrivi);

        int len = strlen(scrivi);
        if(len > 0 && scrivi[len - 1] == '\n') scrivi[len - 1] = '\0';
        while (getchar() != '\n');

        if(strcmp(scrivi, d.risposta) != 0){
            (*LIFE)--;
            setColor(4, 0);
            snprintf(msg, sizeof(msg),
                "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(msg, DELAY);
        } else {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE, cake);
    } while(strcmp(scrivi, d.risposta) != 0);
}

void chiediSequenzaTesto(DomandaTesto *domande, int n, int *LIFE, int *cake){
    for(int i = 0; i < n; i++){
        chiediTesto(domande[i], i + 1, LIFE, cake);
    }
}