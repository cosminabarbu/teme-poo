
#ifndef POO_TEMA2_ANGAJAT_H
#define POO_TEMA2_ANGAJAT_H

#include <iostream>
#include "Persoana.h"

class Angajat : public Persoana{
private:
    std::string functie;
public:
    Angajat()=default;
    Angajat(std::string nume, int varsta, std::string functie);
    Angajat(const Angajat &rhs);
    Angajat& operator=(const Angajat& rhs);
    const std::string &getFunctie() const;
    void setFunctie(std::string functie);
    void Prezentare() const override;
    TipPersoana getTipPersoana() const override;
    void afisare(std::ostream& os) const override;
    ~Angajat()=default;
};
//Angajat:: Angajat(std::string nume, int varsta, std::string functie) : Persoana (std::move(nume), varsta), functie(std::move(functie)){};
//Angajat::Angajat(const Angajat &rhs) : Persoana(rhs.nume, rhs.varsta), functie(rhs.functie){};

#endif //POO_TEMA2_ANGAJAT_H
