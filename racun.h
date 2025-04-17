#ifndef RACUN_H
#define RACUN_H

#include <string>
#include "stavka.h"

class Racun {
private:
    std::string datumIzdavanja;  
    Stavka* stavke;                 
    int brojStavki;                 
    double ukupnaSuma;             
    double sumaPDV;                

public:
    Racun();
    ~Racun();

    void ucitajIzDatoteke(const std::string& nazivDatoteke);

    void ispisi() const;

    double getUkupnaSuma() const;
    double getSumaPDV() const;
};

#endif