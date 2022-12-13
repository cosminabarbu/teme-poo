
#ifndef POO_TEMA2_ANGAJAT_H
#define POO_TEMA2_ANGAJAT_H

#include <iostream>
#include "Persoana.h"

class Angajat : public Persoana{
private:
    std::string functie;
    int nrAngajat;
public:
    Angajat()=default;
    Angajat(std::string nume, int varsta, std::string functie, int nrAngajat);
    Angajat(const Angajat &rhs);
    Angajat& operator=(const Angajat& rhs);
    const std::string &getFunctie() const;
    void setFunctie(std::string functie);
    int getNrAngajat() const;
    void setNrAngajat(int nrAngajat);
    void cit();
    void afis();
    void Prezentare() const override;
    TipPersoana getTipPersoana() const override;
    void afisare(std::ostream& os) const override;
    ~Angajat()=default;

};

#endif //POO_TEMA2_ANGAJAT_H
