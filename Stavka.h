#ifndef STAVKA_H
#define STAVKA_H

#include <string>
#include <iostream>

class Stavka {
protected:
    unsigned int sifra;
    std::string naziv;
    int kolicina;
    double cijenaBezPDV;
    double postotakPDV;

