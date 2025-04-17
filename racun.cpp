#include "racun.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <sstream>

Racun::Racun() : datumIzdavanja(""), stavke(nullptr), brojStavki(0), ukupnaSuma(0.0), sumaPDV(0.0) {}

void Racun::ucitajIzDatoteke(const std::string& nazivDatoteke) {
    std::ifstream file(nazivDatoteke);
    if (!file.is_open()) {
        throw std::runtime_error("Greška pri otvaranju datoteke: " + nazivDatoteke);
    }

