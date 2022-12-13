

#ifndef POO_TEMA2_PERSOANA_H
#define POO_TEMA2_PERSOANA_H

#include <iostream>
#include "IOStream.h"

class Persoana : public IOStream {
protected:
    std::string nume;
    int varsta;
public:
    Persoana()=default;
    Persoana(std::string nume, int varsta);
    Persoana(const Persoana &rhs);
    Persoana& operator=(const Persoana &rhs); ///FAC LA FEL LA CLIENT SI ANGAJAT
    void afisare(std::ostream& os) const override;

     virtual void cit() ;

     virtual void afis() ;
    const std::string &getNume() const;
    void setNume(std::string nume);
    int getVarsta() const;
    void setVarsta(int varsta);

    enum class TipPersoana{
        Angajat,
        Client
    };

virtual void Prezentare() const = 0;
virtual TipPersoana getTipPersoana() const = 0;

    virtual ~Persoana();
};


#endif //POO_TEMA2_PERSOANA_H
