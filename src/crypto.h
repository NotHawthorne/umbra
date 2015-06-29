#ifndef CRYPTO_H
#define CRYPTO_H

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include "cryptocpp/aes.h"
#include "cryptocpp/cryptlib.h"
#include "cryptocpp/osrng.h"
#include "cryptocpp/modes.h"
#include "cryptocpp/dh.h"

using namespace CryptoPP;

void generateKey() {
    DH dh;
    AutoSeededRandomPool rnd;
    dh.AccessGroupParameters().GenerateRandomWithKeySize(rnd, 1024);
    const Integer& p = dh.GetGroupParameters().GetModulus();
    Integer        q = (p-1)/2;
    const Integer& g = dh.GetGroupParameters().GetGenerator();
    Integer        r = dh.GetGroupParameters().GetSubgroupOrder();
    std::string write;
    std::stringstream ss;
    ss << r;
    ss >> write;
    std::ofstream file;
    file.open("shhdir/mykey.shh");
    file << write;
    file.close();
}

QString myKey() {
    std::string line;
    std::string pth = "shhdir/mykey.shh";
    std::ifstream myfile (pth.c_str());
    if (myfile.is_open()) {
        while ( std::getline (myfile,line) ) {
            QString s0;
            s0.append(line.c_str());
            if (s0.section(".", 0, 0).toStdString() != "") {
                return s0.section(".", 0, 0);
            }
        }
    }
    myfile.close();
    return "...";
}

bool haveKey() {
    if (myKey() == "...") { std::printf("making key"); generateKey(); return true; }
    std::printf("had key");
    return true;
}

#endif // CRYPTO_H
