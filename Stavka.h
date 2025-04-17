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

public:

Stavka();
    Stavka(unsigned int s, std::string n, int k, double c, double p);

    unsigned int getSifra() const;
    std::string getNaziv() const;
    int getKolicina() const;
    double getCijenaBezPDV() const;
    double getPostotakPDV() const;

    void setSifra(unsigned int s);
    void setNaziv(std::string n);
    void setKolicina(int k);
    void setCijenaBezPDV(double c);
    void setPostotakPDV(double p);
    double ukupnaCijena() const;

    friend std::istream& operator>>(std::istream& in, Stavka& s);
    friend std::ostream& operator<<(std::ostream& out, const Stavka& s);
};
#endif