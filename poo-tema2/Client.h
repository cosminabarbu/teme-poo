

#ifndef POO_TEMA2_CLIENT_H
#define POO_TEMA2_CLIENT_H

#include <iostream>
#include "Persoana.h"

class Client : public Persoana {
private:
    int nrLocuriDorite;
public:
    Client()=default;
    Client(std::string nume, int varsta, int nrLocuriDorite);
    int getNrLocuriDorite() const;
    void setNrLocuriDorite(int nrLocuriDorite);
    void Prezentare() const override;
    TipPersoana getTipPersoana() const override;
    void afisare(std::ostream& os) const override;
    virtual ~Client();
};


#endif //POO_TEMA2_CLIENT_H
