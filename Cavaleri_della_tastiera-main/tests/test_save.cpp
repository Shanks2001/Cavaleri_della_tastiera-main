
#include "test_helpers.h"

TEST(Save, FileIncrementaESalva) {
    TempWorkDir w;
    int cake = 4;
    file(&cake);
    EXPECT_EQ(cake, 5);
    EXPECT_EQ(read_text("salva.txt"), "5");
}

TEST(Save, ReaLeggeIlSalvataggioEsistente) {
    TempWorkDir w;
    write_text("salva.txt", "7");
    int cake = 0;
    rea(&cake);
    EXPECT_EQ(cake, 7);
}


static void primo_avvio_senza_salvataggio() {
    {
        TempWorkDir w;
        int cake = 0;
        rea(&cake);
        if (cake != 1) std::exit(2);
        if (read_text("salva.txt") != "1") std::exit(3);
    }
    std::exit(0);
}

TEST(Save, ReaSenzaFileCreaIlSalvataggioENonVaInCrash) {
    EXPECT_EXIT(primo_avvio_senza_salvataggio(), ::testing::ExitedWithCode(0), "");
}
