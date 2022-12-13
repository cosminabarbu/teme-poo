

#ifndef POO_TEMA2_CLIENT_H
#define POO_TEMA2_CLIENT_H

#include <iostream>
#include "Persoana.h"

class Client : public Persoana {
private:
    int nrLocuriDorite;
public:
    Client();
    Client(std::string nume, int varsta, int nrLocuriDorite);
    Client(const Client &rhs);
    Client& operator=(const Client &rhs);
    int getNrLocuriDorite() const;
    void setNrLocuriDorite(int nrLocuriDorite);
    void Prezentare() const override;
    TipPersoana getTipPersoana() const override;
    void afisare(std::ostream& os) const override;
     virtual void cit() ;
     virtual void afis() ;
    virtual ~Client();
};
class Exceptie : public std::exception, public IOStream{
public:
    Exceptie();
    const char* what() const noexcept override;
    void afisare(std::ostream &os) const override;
    virtual ~Exceptie();
};

#endif //POO_TEMA2_CLIENT_H
