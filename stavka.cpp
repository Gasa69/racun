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

void Stavka::setSifra(unsigned int s) { sifra = s; }
void Stavka::setNaziv(std::string n) { naziv = n; }
void Stavka::setKolicina(int k) { kolicina = k; }
void Stavka::setCijenaBezPDV(double c) { cijenaBezPDV = c; }
void Stavka::setPostotakPDV(double p) { postotakPDV = p; }

double Stavka::ukupnaCijena() const {
    double osnovica = kolicina * cijenaBezPDV;
    double pdv = osnovica * postotakPDV / 100.0;
    return osnovica + pdv;
}

std::istream& operator>>(std::istream& in, Stavka& s) {
    std::string nazivTemp;
    char apostrof;
    std::string pdvStr;

    in >> s.sifra >> apostrof;
    std::getline(in, nazivTemp, '\'');
    in >> s.kolicina >> s.cijenaBezPDV >> pdvStr;

    s.naziv = nazivTemp;
    if (!pdvStr.empty() && pdvStr.back() == '%') {
        pdvStr.pop_back();
    }
    s.postotakPDV = std::stod(pdvStr);

    return in;
}
