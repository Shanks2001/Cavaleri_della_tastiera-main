#pragma once
#include <gtest/gtest.h>
#include <chrono>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <string>

extern "C"{
    #include "GAME.h"
    #include "platform.h"
    #include "domande.h"
}

namespace fs =std::filesystem;
//test su file txt senza sovrascrivere su sala.txt

struct TempWorkDir
{
    fs::path old, dir;
    TempWorkDir(){
        old =fs::current_path();
        auto t =
        std::chrono::steady_clock::now().time_since_epoch().count();
        dir=fs::temp_directory_path() / ("cavalieri_test_" + std::to_string(t));
        fs::create_directories(dir);
        fs::current_path(dir);
    }
    ~TempWorkDir(){
        fs::current_path(old);
        std::error_code ec;
        fs::remove_all(dir, ec);
    }

};

inline void write_text(const std::string &path, const std::string &text){
    std::ofstream(path) << text;
}

inline std::string read_text(const std::string &path){
    std::ifstream f(path);
    return std::string((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
} 
// simula la tastier 
inline void set_stdin(const std::string &text){
    auto p = (fs::temp_directory_path() / "cavalieri_stdin.txt").string();
    write_text(p, text);
    freopen(p.c_str(), "r", stdin);
}