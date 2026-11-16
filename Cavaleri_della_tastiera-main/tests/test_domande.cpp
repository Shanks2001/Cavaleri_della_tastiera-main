
#include "test_helpers.h"

static void check_scelte(DomandaScelta *d, int n){
    ASSERT_GT(n, 0);
    for (int i = 0; i < n; i++) {
        SCOPED_TRACE("domanda " + std::to_string(i));
        EXPECT_NE(d[i].testo, nullptr);
        EXPECT_GE(d[i].corretta, 1);
        EXPECT_LE(d[i].corretta, 3);
        for(int j = 0; j<3; j++){
            ASSERT_NE(d[i].opzioni[j], nullptr);
            EXPECT_GT(std::string(d[i].opzioni[j]).size(), 0u);
        }
    }
}

static void check_testo(DomandaTesto *d, int n) {
    ASSERT_GT(n, 0);
    EXPECT_NE(d[0].testo, nullptr);
    for (int i = 0; i < n; i++) {
        SCOPED_TRACE("blank " + std::to_string(i));
        ASSERT_NE(d[i].risposta, nullptr);
        std::string r = d[i].risposta;
        EXPECT_GT(r.size(), 0u);
        EXPECT_EQ(r.find_first_of(" \t\n"), std::string::npos);
        EXPECT_LT(r.size(), 99u);
    }
}

TEST(Domande, Livello1) { check_scelte(livello1, NUM_DOMANDE_LVL1); }
TEST(Domande, Livello2) { check_scelte(livello2, NUM_DOMANDE_LVL2); }
TEST(Domande, Livello3) { check_scelte(livello3, NUM_DOMANDE_LVL3); }
TEST(Domande, Livello4) { check_scelte(livello4, NUM_DOMANDE_LVL4); }
TEST(Domande, Livello5) { check_scelte(livello5, NUM_DOMANDE_LVL5); }

TEST(Domande, Livello6) { check_testo(livello6, NUM_BLANK_LVL6); }
TEST(Domande, Livello7) { check_testo(livello7, NUM_BLANK_LVL7); }
TEST(Domande, Livello8) { check_testo(livello8, NUM_BLANK_LVL8); }
TEST(Domande, Livello9) { check_testo(livello9, NUM_BLANK_LVL9); }

TEST(Domande, BossScelteEBlankSonoValidi) {
    check_scelte(bossScelte, NUM_DOMANDE_BOSS);
    for (int i = 0; i < NUM_DOMANDE_BOSS; i++) {
        ASSERT_NE(bossBlank[i].risposta, nullptr);
        EXPECT_GT(std::string(bossBlank[i].risposta).size(), 0u);
    }
}
