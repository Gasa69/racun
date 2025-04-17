#include "stavka.h"
#include <iomanip>
#include <sstream>

Stavka::Stavka() : sifra(0), naziv(""), kolicina(0), cijenaBezPDV(0), postotakPDV(0) {}

Stavka::Stavka(unsigned int s, std::string n, int k, double c, double p)
    : sifra(s), naziv(n), kolicina(k), cijenaBezPDV(c), postotakPDV(p) {}

unsigned int Stavka::getSifra() const { return sifra; }
std::string Stavka::getNaziv() const { return naziv; }
int Stavka::getKolicina() const { return kolicina; }
double Stavka::getCijenaBezPDV() const { return cijenaBezPDV; }
double Stavka::getPostotakPDV() const { return postotakPDV; }


