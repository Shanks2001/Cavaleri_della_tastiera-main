
#include "test_helpers.h"

TEST(Scelta, RiconosceAbcMaiuscoleEMinuscole) {
    set_stdin("a\nB\nc\n");
    EXPECT_EQ(Scelta(), 1);
    EXPECT_EQ(Scelta(), 2);
    EXPECT_EQ(Scelta(), 3);
}

TEST(Scelta, IgnoraCaratteriNonValidiEPoiAccetta) {
    set_stdin("x\nb\n");
    EXPECT_EQ(Scelta(), 2);
}

TEST(ChiediScelta, RispostaGiustaNonTogliVite) {
    set_stdin("a\n");              // livello1[0]: la risposta giusta e' A
    int life = 3, cake = 1;
    chiediScelta(livello1[0], &life, &cake);
    EXPECT_EQ(life, 3);
}

TEST(ChiediScelta, RispostaSbagliataTogliUnaVitaEPoiRiprova) {
    set_stdin("b\na\n");           // prima sbagliata, poi giusta
    int life = 3, cake = 1;
    chiediScelta(livello1[0], &life, &cake);
    EXPECT_EQ(life, 2);
}

TEST(ChiediTesto, RispostaSbagliataTogliUnaVitaEPoiRiprova) {
    set_stdin("foo\nprintf\n");
    DomandaTesto d = { nullptr, "printf" };
    int life = 3, cake = 1;
    chiediTesto(d, 1, &life, &cake);
    EXPECT_EQ(life, 2);
}

TEST(ChiediTesto, RispostaGiustaNonTogliVite) {
    set_stdin("printf\n");
    DomandaTesto d = { nullptr, "printf" };
    int life = 3, cake = 1;
    chiediTesto(d, 1, &life, &cake);
    EXPECT_EQ(life, 3);
}

TEST(Checklife, ConViteRimasteNonFaNulla) {
    int cake = 1;
    checklife(2, &cake);           // se partisse il game over, il test si bloccherebbe
    SUCCEED();
}

// Ultima vita persa -> GAME OVER -> "Vuoi riprovare?" -> 'n' -> exit(0)
// (la logica sta in una funzione: le virgole dentro EXPECT_EXIT spezzerebbero la macro)
static void perdi_ultima_vita_e_rispondi_no() {
    set_stdin("b\nn\n");
    int life = 1;
    int cake = 1;
    chiediScelta(livello1[0], &life, &cake);
}

TEST(Quiz, PerdereUltimaVitaPortaAlGameOverEdEsceConN) {
    EXPECT_EXIT(perdi_ultima_vita_e_rispondi_no(), ::testing::ExitedWithCode(0), "");
}