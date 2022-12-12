

#include "Angajat.h"
#include <iostream>
#include <string>

Angajat &Angajat::operator=(const Angajat &rhs) {
    if (this!=&rhs){
        Persoana::operator=(rhs);
        functie=rhs.functie;
    }
    return *this;
}
const std::string  &Angajat::getFunctie() const {
    return functie;
}
void Angajat::setFunctie(std::string functie) {
    Angajat::functie=std::move(functie);
}
Angajat::TipPersoana Angajat::getTipPersoana() const {
    return TipPersoana::Angajat;
}
void Angajat::Prezentare() const {
    std::cout<<"Buna ziua! Sunt "<< nume <<", chelnerul dumneavoastra."<<std::endl;
}
void Angajat::afisare(std::ostream &os) const {
    os << "Angajatul: " << nume << " in varsta de " << varsta << " ani." << std::endl;
}
Angajat::Angajat(std::string nume, int varsta, std::string functie) : Persoana(std::move(nume), varsta), functie(std::move(functie)){};
Angajat::Angajat(const Angajat &rhs) : Persoana(rhs.nume, rhs.varsta), functie(rhs.functie){};

