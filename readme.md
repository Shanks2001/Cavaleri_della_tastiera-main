# Cavalieri della Tastiera

Un piccolo quiz da terminale scritto in C. Si passa una serie di livelli con domande di programmazione e alla fine c'è il BOSS. Ho iniziato come esercizio per ripassare il C e poi ho continuato ad aggiungere pezzi.

## Come si gioca

- I livelli da 1 a 5 sono a scelta multipla (A, B o C).
- I livelli da 6 a 9 sono a risposta libera: nel codice mostrato manca una parola o un simbolo e va scritto.
- Alla fine c'è il BOSS, che mischia i due tipi di domanda.
- Si parte con 3 vite. Ogni risposta sbagliata ne toglie una e, finite le vite, compare il Game Over con la possibilità di riprovare.
- Il livello raggiunto viene salvato in `salva.txt`, quindi alla prossima partenza si riprende da lì.

Le risposte libere devono essere scritte uguali a come le aspetta il gioco, maiuscole comprese, e senza spazi.

## Requisiti

Basta un compilatore C (gcc). Funziona su Windows con MinGW e su Linux/Mac.

## Compilare e avviare

Con make (su Windows con MinGW è `mingw32-make`):

```
make
```

Oppure a mano:

```
gcc *.c -o main
```

Poi si avvia con `./main` su Linux/Mac oppure `.\main.exe` su Windows.

## Test

I test sono scritti con GoogleTest e si compilano con CMake. Controllano che le domande siano valide (per esempio che la risposta giusta sia A, B o C), che il salvataggio funzioni e che il quiz tolga le vite quando serve.

```
cmake -B build -G "MinGW Makefiles"
cmake --build build
ctest --test-dir build --output-on-failure
```

Serve un GCC recente: con le versioni vecchie di MinGW (io avevo la 6.3) GoogleTest non compila. Alla prima configurazione CMake scarica GoogleTest da solo, quindi serve internet e git.

I test durano una decina di secondi perché il gioco scrive il testo lettera per lettera con una piccola pausa, e nei test questa pausa c'è comunque.

## Com'è fatto

| File | Cosa fa |
|---|---|
| `main.c` | punto di ingresso |
| `GAME.h` | include comuni e dichiarazioni |
| `domande.c`, `domande.h` | tutte le domande come dati, più le funzioni che le fanno |
| `levels1.c`, `levels2.c` | i livelli 1-5 e 6-9 |
| `boss.c` | il BOSS |
| `screens.c` | schermate (benvenuto, game over, fine) e riavvio |
| `save.c` | salvataggio e caricamento |
| `io_utils.c` | lettura delle risposte e vite a schermo |
| `platform.c`, `platform.h` | cose che cambiano tra Windows e Linux (colori, pulizia schermo, pausa) |
| `tests/` | i test |

Le domande stanno in `domande.c` come tabelle, quindi per aggiungerne o cambiarne una non serve toccare il codice dei livelli.

## Integrazione continua

Su GitHub c'è un workflow (Actions) che compila il progetto a ogni push e a ogni pull request sul ramo principale, sia su Linux sia su Windows. I test per ora li lancio solo in locale.

## Cose da sistemare

- Dopo il BOSS il salvataggio va a un valore che il gioco non riconosce più, quindi al riavvio non parte nessun livello.
- Mettere i test nel workflow.
- Rendere la pausa tra le lettere regolabile, così i test girano in un attimo.
- Salvare anche le vite tra una sessione e l'altra.
- Mischiare l'ordine di domande e risposte.
- Aggiungere un punteggio o il tempo di risposta.

## Autore

Shanks2001