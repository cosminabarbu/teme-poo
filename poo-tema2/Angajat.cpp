

#include "Angajat.h"
#include "Persoana.h"
#include <iostream>
#include <string>

Angajat &Angajat::operator=(const Angajat &rhs) {
    if (this!=&rhs){
        Persoana::operator=(rhs);
        functie=rhs.functie;
        nrAngajat=rhs.nrAngajat;

    }
    return *this;
}

const std::string  &Angajat::getFunctie() const {
    return functie;
}
void Angajat::setFunctie(std::string functie) {
    Angajat::functie=std::move(functie);
}
int Angajat::getNrAngajat() const {
    return nrAngajat;
}
void Angajat::setNrAngajat(int nrAngajat) {
    Angajat::nrAngajat = nrAngajat;
}

Angajat::TipPersoana Angajat::getTipPersoana() const {
    return TipPersoana::Angajat;
}
void Angajat::Prezentare() const {
    std::cout<<"Buna ziua! Sunt "<< nume <<"," << functie<<"ul dumneavoastra."<<std::endl;
}
void Angajat::afisare(std::ostream &os) const {
    os << "Angajatul: " << nume << " in varsta de " << varsta << " ani." << std::endl;
}
void Angajat::cit(){
    std::cout<<"Introduceti numele, varsta, functia si numarul angajatului:"<<std::endl;
    std::cin>>nume>>varsta>>functie>>nrAngajat;
}
void Angajat::afis(){
    std::cout<<nume<<" in varsta de "<<varsta<<" ani ocupa functia de "<<functie<<" in restaurantul nostru. ID angajat: "<<nrAngajat<<std::endl;
}
Angajat::Angajat(std::string nume, int varsta, std::string functie, int nrAngajat) : Persoana(std::move(nume), varsta), functie(std::move(functie)) , nrAngajat(nrAngajat){}
Angajat::Angajat(const Angajat &rhs) : Persoana(rhs.nume, rhs.varsta), functie(rhs.functie), nrAngajat(rhs.nrAngajat) {}

