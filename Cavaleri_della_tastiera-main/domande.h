#ifndef DOMANDE_H
#define DOMANDE_H

// ==========================================================================
// Domanda a scelta multipla (A/B/C) - usata nei livelli 1-5 e in parte del BOSS
// ==========================================================================
typedef struct {
    const char *testo;        // domanda + eventuale blocco di codice, gia' formattato con \n e \t
    const char *opzioni[3];   // opzione A, B, C
    int corretta;              // 1 = A, 2 = B, 3 = C
} DomandaScelta;

// ==========================================================================
// Domanda a risposta libera - usata nei livelli 6-9 e in parte del BOSS
// (il giocatore scrive una singola parola/simbolo che manca nel codice)
// ==========================================================================
typedef struct {
    const char *testo;        // testo/codice da mostrare PRIMA di questo blank.
                               // NULL se questo blank fa parte della stessa
                               // domanda del blank precedente (nessun nuovo
                               // testo da stampare, solo un nuovo prompt "N:")
    const char *risposta;     // stringa esatta attesa (case/spazi sensibili)
} DomandaTesto;

// ---- Livelli a scelta multipla ----
extern DomandaScelta livello1[];
extern const int NUM_DOMANDE_LVL1;

extern DomandaScelta livello2[];
extern const int NUM_DOMANDE_LVL2;

extern DomandaScelta livello3[];
extern const int NUM_DOMANDE_LVL3;

extern DomandaScelta livello4[];
extern const int NUM_DOMANDE_LVL4;

extern DomandaScelta livello5[];
extern const int NUM_DOMANDE_LVL5;

// ---- Livelli a risposta libera ----
extern DomandaTesto livello6[];
extern const int NUM_BLANK_LVL6;

extern DomandaTesto livello7[];
extern const int NUM_BLANK_LVL7;

extern DomandaTesto livello8[];
extern const int NUM_BLANK_LVL8;

extern DomandaTesto livello9[];
extern const int NUM_BLANK_LVL9;

// ---- BOSS (misto: scelta multipla + un blank di testo dopo ognuna) ----
extern DomandaScelta bossScelte[];
extern DomandaTesto bossBlank[];
extern const int NUM_DOMANDE_BOSS;

// ==========================================================================
// Funzioni generiche che "fanno il quiz": sostituiscono il codice ripetuto
// che oggi trovi identico decine di volte in ogni livello.
// ==========================================================================
void chiediScelta(DomandaScelta d, int *LIFE, int *cake);
void chiediLivelloScelta(DomandaScelta *domande, int n, int *LIFE, int *cake);

void chiediTesto(DomandaTesto d, int numeroBlank, int *LIFE, int *cake);
void chiediSequenzaTesto(DomandaTesto *domande, int n, int *LIFE, int *cake);

#endif // DOMANDE_H