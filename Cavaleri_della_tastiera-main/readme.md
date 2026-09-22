# Cavalieri della Tastiera

Un gioco da terminale (Windows) in C, in cui il giocatore affronta una serie di livelli a quiz sulla programmazione, culminando in uno scontro finale contro il "BOSS". Il progresso viene salvato su file e il giocatore ha un numero limitato di vite.

## Requisiti

- Sistema operativo **Windows** (il gioco usa `windows.h` per i colori del testo in console).
- Compilatore **MinGW** (`gcc`) installato e disponibile da riga di comando.

## Struttura del progetto

Il codice è organizzato in più file, ognuno con una responsabilità precisa:

| File | Contenuto |
|---|---|
| `game.h` | Include comuni, costanti (`DELAY`, `MAX`) e prototipi di tutte le funzioni |
| `main.c` | Punto di ingresso del gioco (`main`) |
| `io_utils.c` | Funzioni di input/output: `setColor`, `printSlowly`, `Scelta` |
| `save.c` | Salvataggio e caricamento del progresso (`file`, `rea`) |
| `screens.c` | Schermate e flusso di gioco: `chiamate_salvate`, `checklife`, `BENVENUTO`, `GAMEOVER`, `END`, `ripeti` |
| `levels1.c` | Livelli 1-5 |
| `levels2.c` | Livelli 6-9 |
| `boss.c` | Scontro finale (`BOSS`) |

## Come compilare

Apri un terminale nella cartella del progetto ed esegui:

```powershell
gcc *.c -o main.exe
```

Questo compila tutti i file `.c` presenti nella cartella in un unico eseguibile `main.exe`.

## Come avviare il gioco

```powershell
.\main.exe
```

> Nota: se PowerShell segnala che il file non viene trovato subito dopo la compilazione, verifica che l'antivirus/Windows Defender non l'abbia messo in quarantena (capita spesso con eseguibili compilati da MinGW).

## Come si gioca

- Rispondi correttamente alle domande di ogni livello per proseguire.
- Ogni risposta sbagliata riduce le vite disponibili.
- Il progresso (livello raggiunto) viene salvato automaticamente e ripreso al riavvio.
- Se le vite finiscono, la partita termina (schermata di Game Over).
- Superando tutti i livelli si affronta il BOSS finale.

## Possibili sviluppi futuri

- Salvataggio anche delle vite tra una sessione e l'altra.
- Domande caricate da struct/array invece che scritte a mano in ogni livello, per facilitare l'aggiunta di nuovi contenuti.
- Ordine delle domande randomizzato per aumentare la rigiocabilità.

## Autori

_Aggiungi qui i nomi degli autori del progetto._