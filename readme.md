# Cavalieri della Tastiera

![build](https://github.com/<tuo-utente>/<tuo-repo>/actions/workflows/build.yml/badge.svg)

Un gioco da terminale in C, in cui il giocatore affronta una serie di livelli a quiz sulla programmazione, culminando in uno scontro finale contro il "BOSS". Il progresso viene salvato su file e il giocatore ha un numero limitato di vite, mostrate a schermo in ogni domanda.

> Sostituisci `<tuo-utente>/<tuo-repo>` nel badge qui sopra con il percorso reale del tuo repository GitHub perché la spunta di build si aggiorni correttamente.

## Requisiti

- Un compilatore C (**gcc**). Il progetto è multipiattaforma: compila sia su **Windows** (con MinGW) sia su **Linux/Mac** (gcc/clang preinstallati).
- Facoltativo: **GNU Make** per usare il `Makefile` incluso (`mingw32-make` su Windows con MinGW, `make` su Linux/Mac).

## Struttura del progetto

| File | Contenuto |
|---|---|
| `GAME.h` | Include comuni, costanti (`DELAY`, `MAX`) e prototipi di tutte le funzioni |
| `main.c` | Punto di ingresso del gioco (`main`) |
| `platform.h` / `platform.c` | Livello di astrazione multipiattaforma: pulizia schermo, attesa, colori del testo (`clearScreen`, `sleepMs`, `setColor`) |
| `io_utils.c` | Input utente e stampa "lettera per lettera" (`Scelta`, `printSlowly`, `mostraVite`, `pulisciSchermo`) |
| `save.c` | Salvataggio e caricamento del progresso (`file`, `rea`) |
| `screens.c` | Schermate e flusso di gioco: `chiamate_salvate`, `checklife`, `BENVENUTO`, `GAMEOVER`, `END`, `ripeti` |
| `domande.h` / `domande.c` | Tutte le domande dei livelli 1-9 e del BOSS come **dati** (struct), più il motore di quiz generico (`chiediScelta`, `chiediTesto`) |
| `levels1.c` | Livelli 1-5 (domande a scelta multipla) |
| `levels2.c` | Livelli 6-9 (domande a risposta libera, completamento di codice) |
| `boss.c` | Scontro finale, misto scelta multipla + risposta libera |
| `Makefile` | Build automatizzata (`make` / `mingw32-make`) |

Le domande non sono scritte a mano dentro la logica dei livelli: sono dati in `domande.c`, letti da un motore di quiz comune (`domande.h`). Aggiungere o modificare una domanda non richiede toccare la logica di gioco.

## Come compilare

**Con Make** (consigliato):
```bash
make          # Linux/Mac
mingw32-make  # Windows con MinGW
```

**Senza Make**, in alternativa diretta:
```bash
gcc *.c -o main       # Linux/Mac
gcc *.c -o main.exe   # Windows
```

## Come avviare il gioco

```bash
./main        # Linux/Mac
.\main.exe    # Windows (PowerShell)
```

## Come si gioca

- Rispondi correttamente alle domande di ogni livello per proseguire. La barra delle vite è visibile prima di ogni domanda.
- Ogni risposta sbagliata riduce le vite disponibili.
- Il progresso (livello raggiunto) viene salvato automaticamente in `salva.txt` e ripreso al riavvio.
- Se le vite finiscono, la partita termina (schermata di Game Over) e puoi scegliere se ricominciare.
- Superando tutti i livelli si affronta il BOSS finale.

## Integrazione continua

Ogni push e pull request sul branch principale vengono compilati automaticamente sia su Linux sia su Windows tramite GitHub Actions (`.github/workflows/build.yml`), per garantire che le modifiche non rompano la build su nessuna delle due piattaforme.

## Possibili sviluppi futuri

- Salvataggio anche delle vite tra una sessione e l'altra.
- Ordine delle domande e delle opzioni randomizzato per aumentare la rigiocabilità.
- Un punteggio/tempo di risposta oltre alle sole vite.

## Autori

_Aggiungi qui i nomi degli autori del progetto._