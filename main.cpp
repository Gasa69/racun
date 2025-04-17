#include <iostream>
#include <fstream>
#include <vector>
#include "stavka.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Upotreba: " << argv[0] << " <ime_datoteke>\n";
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file) {
        std::cerr << "Greška pri otvaranju datoteke.\n";
        return 1;
    }
